#include <gmock/gmock.h>

#include <thread>
#include <array>
#include <list>
#include <iostream>
#include <sstream>

#include <RingBuffer.h>

using namespace glbinding;

class RingBuffer_test : public testing::Test
{
public:
};

TEST_F(RingBuffer_test, SimpleTest)
{
    RingBuffer<int> buffer(10);
    EXPECT_EQ(10, buffer.maxSize());
    EXPECT_EQ(true, buffer.isEmpty());

    RingBuffer<int>::TailIdentifier tail = buffer.addTail();
    auto it = buffer.cbegin(tail);
    EXPECT_EQ(false, buffer.valid(tail, it));
    EXPECT_EQ(0, buffer.size(tail));
    EXPECT_EQ(0, buffer.size());

    for (int i = 0; i < 10; i++)
    {
        EXPECT_EQ(true, buffer.push(i));
    }

    EXPECT_EQ(10, buffer.size());
    EXPECT_EQ(10, buffer.size(tail));
    EXPECT_EQ(false, buffer.push(11));
    EXPECT_EQ(true, buffer.isFull());

    EXPECT_EQ(true, buffer.valid(tail, it));

    for (int i = 0; i < 5; i++)
    {
        EXPECT_EQ(true, buffer.valid(tail, it));
       int j = *it;
       EXPECT_EQ(i, j);
        it = buffer.next(tail, it);
        EXPECT_EQ(buffer.size(tail), buffer.size());
    }

    EXPECT_EQ(5, buffer.size());

    for (int i = 10; i < 15; i++)
    {
        EXPECT_EQ(true, buffer.push(i));
    }

    EXPECT_EQ(10, buffer.size());

    for (int i = 5; i < 15; i++)
    {
        EXPECT_EQ(true, buffer.valid(tail, it));
        EXPECT_EQ(i, *it);
        it = buffer.next(tail, it);
        EXPECT_EQ(buffer.size(tail), buffer.size());
    }

    for (int i = 0; i < 7; i++)
    {
        EXPECT_EQ(true, buffer.push(i));
    }

    for (int i = 0; i < 5; i++)
    {
        EXPECT_EQ(true, buffer.valid(tail, it));
        EXPECT_EQ(i, *it);
        it = buffer.next(tail, it);
        EXPECT_EQ(buffer.size(tail), buffer.size());
    }

    EXPECT_EQ(2, buffer.size());

    buffer.removeTail(tail);
    EXPECT_EQ(2, buffer.size());


}

TEST_F(RingBuffer_test, StringTest)
{
    RingBuffer<std::string> buffer(10);
    EXPECT_EQ(10, buffer.maxSize());
    EXPECT_EQ(true, buffer.isEmpty());

    RingBuffer<int>::TailIdentifier tail = buffer.addTail();

    for (int i = 0; i < 10; i++)
    {
        std::ostringstream oss;
        oss << i;
        EXPECT_EQ(true, buffer.push("Hello world " + oss.str()));
    }

    auto it = buffer.cbegin(tail);

    for (int i = 0; i < 10; i++)
    {
        EXPECT_EQ(true, buffer.valid(tail, it));
        std::ostringstream oss;
        oss << i;
        std::string expected = "Hello world " + oss.str();
        EXPECT_EQ(expected, *it);
        it = buffer.next(tail, it);
        EXPECT_EQ(buffer.size(tail), buffer.size());
    }

    EXPECT_EQ(0, buffer.size());
    EXPECT_EQ(false, buffer.valid(tail, it));
}

// Test behavior with objects
struct mockObject {
    int value;
    int* pointer;
    int* reference;
} ;

TEST_F(RingBuffer_test, ObjectTest)
{

}

TEST_F(RingBuffer_test, SimpleMultiThreadedTest)
{

    RingBuffer<int> buffer(1000);
    int testSize = 100000;

    std::thread t1([&]()
    {
        for(int i = 0; i < testSize; i++)
            while(!buffer.push(i));
    });

    std::thread t2([&]()
    {
        RingBuffer<int>::TailIdentifier tail = buffer.addTail();
        auto it = buffer.cbegin(tail);

        int i = 0;
        while (i < testSize)
        {
            if (buffer.valid(tail, it))
            {
                EXPECT_EQ(i++, *it);
                it = buffer.next(tail, it);
            };

        }


        EXPECT_EQ(0, buffer.size(tail));
    });

    t1.join();
    t2.join();
    EXPECT_EQ(0, buffer.size());
}

// TEST_F(RingBuffer_test, MultiThreadedTest)
// {

//     RingBuffer<int, 3> buffer;
//     std::array<int, 5> i1 = {{1, 2, 3, 4, 5}};
//     std::list<int> out;
//     std::thread t1([&]()
//     {
//         for(const int s: i1)
//             while(!buffer.push(s));
//     });

//     std::thread t2([&]()
//     {
//         int result;
//         for(const int s: i1)
//         {
//             while(!buffer.pull(result));
//             EXPECT_EQ(s, result);
//             out.push_front(result);
//         }

//     });

//     t1.join();
//     t2.join();
//     EXPECT_EQ(5, out.size());
//     EXPECT_EQ(0, buffer.size());
// }

// TEST_F(RingBuffer_test, MultiThreadedTest2)
// {

//     RingBuffer<int, 3> buffer;
//     std::thread t1([&]()
//     {
//         for(int i = 0; i < 100000; i++)
//             while(!buffer.push(i));
//     });

//     std::thread t2([&]()
//     {
//         int result;
//         for(int j = 0; j < 100000; j++)
//         {
//             while(!buffer.pull(result));
//             EXPECT_EQ(j, result);
//         }

//     });

//     t1.join();
//     t2.join();
//     EXPECT_EQ(0, buffer.size());
// }

// TEST_F(RingBuffer_test, ConsumerTest1)
// {
//     RingBuffer<int, 10> buffer;

//     unsigned int a = buffer.addTail();
//     EXPECT_EQ(0, a);

//     int result;

//     for(int i = 0; i < 5; i++)
//     {
//         while(!buffer.push(i)){}
//     }

//     for(int j = 0; j < 3; j++)
//     {
//         result = buffer.pull(a);
//         EXPECT_EQ(j, result);
//     }

//     unsigned int b = buffer.addTail();
//     EXPECT_EQ(1, b);

//     for(int j = 3; j < 5; j++)
//     {
//         result = buffer.pull(b);
//         EXPECT_EQ(j, result);
//     }

//     for(int i = 5; i < 13; i++)
//     {
//         while(!buffer.push(i)){}
//     }
    
//     EXPECT_EQ(10, buffer.size());
//     EXPECT_EQ(10, buffer.sizeTail(a));
//     EXPECT_EQ(8, buffer.sizeTail(b));
    
//     buffer.removeTail(a);
//     EXPECT_EQ(8, buffer.size());

//     unsigned int c = buffer.addTail();
//     EXPECT_EQ(0, c);

//     for(int j = 5; j < 9; j++)
//     {
//         result = buffer.pull(b);
//         EXPECT_EQ(j, result);
//     }

//     buffer.removeTail(b);
//     EXPECT_EQ(8, buffer.size());

//     for(int j = 5; j < 13; j++)
//     {
//         result = buffer.pull(c);
//         EXPECT_EQ(j, result);
//     }

//     EXPECT_EQ(0, buffer.size());
// }

// TEST_F(RingBuffer_test, ConsumerTest2)
// {
//     RingBuffer<int, 50> buffer;
//     unsigned int a = buffer.addTail();
//     unsigned int b = buffer.addTail();

//     std::thread t1([&]()
//     {
//         for(int i = 0; i < 100000; i++)
//             while(!buffer.push(i));
//     });

//     std::thread t2([&]()
//     {
//         int result;
//         bool ok;
//         for(int j = 0; j < 100000; j++)
//         {
//             ok = false;
//             while(!ok)
//             {
//                 result = buffer.pull(a, ok);
//             }
//             EXPECT_EQ(j, result);
//         }

//     });

//     std::thread t3([&]()
//     {
//         int result;
//         bool ok;
//         for(int j = 0; j < 100000; j++)
//         {
//             ok = false;
//             while(!ok)
//             {
//                 result = buffer.pull(b, ok);
//             }
//             EXPECT_EQ(j, result);
//         }

//     });

//     t1.join();
//     t2.join();
//     t3.join();

//     buffer.removeTail(a);
//     buffer.removeTail(b);

//     EXPECT_EQ(0, buffer.size());
// }

// TEST_F(RingBuffer_test, PullBlockTest)
// {
//     RingBuffer<int, 10> buffer;

//     unsigned int a = buffer.addTail();
//     EXPECT_EQ(0, a);

//     for(int i = 0; i < 5; i++)
//     {
//         while(!buffer.push(i)){}
//     }

//     EXPECT_EQ(5, buffer.size());

//     std::vector<int> result = buffer.pullTail(a, 4);
//     EXPECT_EQ(4, result.size());

//     for (int i = 0; i < 4; i++)
//     {
//         EXPECT_EQ(i, result[i]);
//     }

//     EXPECT_EQ(1, buffer.size());

//     for(int i = 5; i < 13; i++)
//     {
//         while(!buffer.push(i)){}
//     }

//     result = buffer.pullTail(a, 9);
//     EXPECT_EQ(9, result.size());

//     for (int i = 4; i < 13; i++)
//     {
//         EXPECT_EQ(i, result[i-4]);
//     }

//     EXPECT_EQ(0, buffer.size());
// }

// TEST_F(RingBuffer_test, MultiThreadedTest2)
// {

//     RingBuffer<int, 7> buffer;
//     std::array<int, 10> i1 = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
//     std::array<int, 10> i2 = {{10, 11, 12, 13, 14, 15, 16, 17, 18, 19}};
//     std::list<int> out;
//     std::thread t1([&]()
//     {
//         for(const int s: i1)
//             while(!buffer.push(s));
//     });

//     std::thread t2([&]()
//     {
//         for(const int s: i2)
//             while(!buffer.push(s));
//     });

//     std::thread t3([&]()
//     {
//         int result;
//         // std::cout << "End: " << i1.size() + i2.size() << std::endl;
//         for(int i = 0; i < i1.size() + i2.size(); i++)
//         {
//             while(!buffer.pull(result));
//             out.push_front(result);
//             std::cout << "i = " << result << std::endl;
//         }

//     });

//     t1.join();
//     t2.join();
//     t3.join();

//     EXPECT_EQ(i1.size() + i2.size(), out.size());
//     EXPECT_EQ(0, buffer.size());

//     out.sort();
//     for(const int s: i1)
//     {
//         EXPECT_EQ(s, out.front());
//         out.pop_front();
//     }
//     for(const int s: i2)
//     {
//         EXPECT_EQ(s, out.front());
//         out.pop_front();
//     }
// }



