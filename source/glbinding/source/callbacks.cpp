
#include <glbinding/callbacks.h>

#include <sstream>
#include <type_traits>

#include <glbinding/AbstractValue.h>
#include <glbinding/Binding.h>

namespace
{
    glbinding::SimpleFunctionCallback g_unresolvedCallback;
    glbinding::FunctionCallback g_beforeCallback;
    glbinding::FunctionCallback g_afterCallback;
}

namespace glbinding 
{

FunctionCall::FunctionCall(const AbstractFunction * _function)
: function(_function)
, timestamp(std::chrono::high_resolution_clock::now())
, returnValue(nullptr)
{
}

FunctionCall::~FunctionCall()
{
    delete returnValue;

    for (AbstractValue * value : parameters)
    {
        delete value;
    }
}


CallbackMask operator|(const CallbackMask a, const CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) | static_cast<callback_mask_t>(b));
}

CallbackMask operator~(CallbackMask a)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    return static_cast<CallbackMask>(~static_cast<callback_mask_t>(a));
}

CallbackMask operator&(CallbackMask a, CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) & static_cast<callback_mask_t>(b));
}

CallbackMask& operator|=(CallbackMask& a, CallbackMask b)
{
    a = a | b;
    return a;
}

CallbackMask& operator&=(CallbackMask& a, CallbackMask b)
{
    a = a & b;
    return a;
}

std::string FunctionCall::toString() const
{
    std::ostringstream os;

    std::chrono::high_resolution_clock::duration time_span = timestamp.time_since_epoch();
    std::string timest = std::to_string(time_span.count());
    os << timest << ": ";
    os << function->name() << "(";

    for (unsigned i = 0; i < parameters.size(); ++i)
    {
        os << parameters[i]->asString();
        if (i < parameters.size() - 1)
            os << ", ";
    }

    os << ")";

    if (returnValue)
    {
        os << " -> " << returnValue->asString();
    }

    os << std::endl;
    std::string input = os.str();
    return input;
}

void setCallbackMask(const CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
        function->setCallbackMask(mask);
}

void setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : Binding::functions())
        if (blackList.find(function->name()) == blackList.end())
            function->setCallbackMask(mask);
}

void addCallbackMask(const CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
        function->addCallbackMask(mask);
}

void removeCallbackMask(const CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
        function->removeCallbackMask(mask);
}

void setUnresolvedCallback(SimpleFunctionCallback callback)
{
    g_unresolvedCallback = std::move(callback);
}

void setBeforeCallback(FunctionCallback callback)
{
    g_beforeCallback = std::move(callback);
}

void setAfterCallback(FunctionCallback callback)
{
    g_afterCallback = std::move(callback);
}

void unresolved(const AbstractFunction * function)
{
    g_unresolvedCallback(*function);
}

void before(const FunctionCall & call)
{
    g_beforeCallback(call);
}

void after(const FunctionCall & call)
{
    g_afterCallback(call);
}

} // namespace glbinding
