#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

namespace gl10
{

#include <glbinding/gl/types.inl>

} // namespace gl10


#include <glbinding/glbinding.h>

namespace gl10
{

inline GLBINDING_API void glAccum(GLenum op, GLfloat value);
inline GLBINDING_API void glAlphaFunc(GLenum func, GLfloat ref);
inline GLBINDING_API void glBegin(GLenum mode);
inline GLBINDING_API void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
inline GLBINDING_API void glBlendFunc(GLenum sfactor, GLenum dfactor);
inline GLBINDING_API void glCallList(GLuint list);
inline GLBINDING_API void glCallLists(GLsizei n, GLenum type, const void * lists);
inline GLBINDING_API void glClear(ClearBufferMask mask);
inline GLBINDING_API void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
inline GLBINDING_API void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
inline GLBINDING_API void glClearDepth(GLdouble depth);
inline GLBINDING_API void glClearIndex(GLfloat c);
inline GLBINDING_API void glClearStencil(GLint s);
inline GLBINDING_API void glClipPlane(GLenum plane, const GLdouble * equation);
inline GLBINDING_API void glColor3b(GLbyte red, GLbyte green, GLbyte blue);
inline GLBINDING_API void glColor3bv(const GLbyte * v);
inline GLBINDING_API void glColor3d(GLdouble red, GLdouble green, GLdouble blue);
inline GLBINDING_API void glColor3dv(const GLdouble * v);
inline GLBINDING_API void glColor3f(GLfloat red, GLfloat green, GLfloat blue);
inline GLBINDING_API void glColor3fv(const GLfloat * v);
inline GLBINDING_API void glColor3i(GLint red, GLint green, GLint blue);
inline GLBINDING_API void glColor3iv(const GLint * v);
inline GLBINDING_API void glColor3s(GLshort red, GLshort green, GLshort blue);
inline GLBINDING_API void glColor3sv(const GLshort * v);
inline GLBINDING_API void glColor3ub(GLubyte red, GLubyte green, GLubyte blue);
inline GLBINDING_API void glColor3ubv(const GLubyte * v);
inline GLBINDING_API void glColor3ui(GLuint red, GLuint green, GLuint blue);
inline GLBINDING_API void glColor3uiv(const GLuint * v);
inline GLBINDING_API void glColor3us(GLushort red, GLushort green, GLushort blue);
inline GLBINDING_API void glColor3usv(const GLushort * v);
inline GLBINDING_API void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
inline GLBINDING_API void glColor4bv(const GLbyte * v);
inline GLBINDING_API void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
inline GLBINDING_API void glColor4dv(const GLdouble * v);
inline GLBINDING_API void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
inline GLBINDING_API void glColor4fv(const GLfloat * v);
inline GLBINDING_API void glColor4i(GLint red, GLint green, GLint blue, GLint alpha);
inline GLBINDING_API void glColor4iv(const GLint * v);
inline GLBINDING_API void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
inline GLBINDING_API void glColor4sv(const GLshort * v);
inline GLBINDING_API void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
inline GLBINDING_API void glColor4ubv(const GLubyte * v);
inline GLBINDING_API void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
inline GLBINDING_API void glColor4uiv(const GLuint * v);
inline GLBINDING_API void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
inline GLBINDING_API void glColor4usv(const GLushort * v);
inline GLBINDING_API void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
inline GLBINDING_API void glColorMaterial(GLenum face, GLenum mode);
inline GLBINDING_API void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
inline GLBINDING_API void glCullFace(GLenum mode);
inline GLBINDING_API void glDeleteLists(GLuint list, GLsizei range);
inline GLBINDING_API void glDepthFunc(GLenum func);
inline GLBINDING_API void glDepthMask(GLboolean flag);
inline GLBINDING_API void glDepthRange(GLdouble near_, GLdouble far_);
inline GLBINDING_API void glDisable(GLenum cap);
inline GLBINDING_API void glDrawBuffer(GLenum buf);
inline GLBINDING_API void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
inline GLBINDING_API void glEdgeFlag(GLboolean flag);
inline GLBINDING_API void glEdgeFlagv(const GLboolean * flag);
inline GLBINDING_API void glEnable(GLenum cap);
inline GLBINDING_API void glEnd();
inline GLBINDING_API void glEndList();
inline GLBINDING_API void glEvalCoord1d(GLdouble u);
inline GLBINDING_API void glEvalCoord1dv(const GLdouble * u);
inline GLBINDING_API void glEvalCoord1f(GLfloat u);
inline GLBINDING_API void glEvalCoord1fv(const GLfloat * u);
inline GLBINDING_API void glEvalCoord2d(GLdouble u, GLdouble v);
inline GLBINDING_API void glEvalCoord2dv(const GLdouble * u);
inline GLBINDING_API void glEvalCoord2f(GLfloat u, GLfloat v);
inline GLBINDING_API void glEvalCoord2fv(const GLfloat * u);
inline GLBINDING_API void glEvalMesh1(GLenum mode, GLint i1, GLint i2);
inline GLBINDING_API void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
inline GLBINDING_API void glEvalPoint1(GLint i);
inline GLBINDING_API void glEvalPoint2(GLint i, GLint j);
inline GLBINDING_API void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer);
inline GLBINDING_API void glFinish();
inline GLBINDING_API void glFlush();
inline GLBINDING_API void glFogf(GLenum pname, GLfloat param);
inline GLBINDING_API void glFogfv(GLenum pname, const GLfloat * params);
inline GLBINDING_API void glFogi(GLenum pname, GLint param);
inline GLBINDING_API void glFogiv(GLenum pname, const GLint * params);
inline GLBINDING_API void glFrontFace(GLenum mode);
inline GLBINDING_API void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
inline GLBINDING_API GLuint glGenLists(GLsizei range);
inline GLBINDING_API void glGetBooleanv(GLenum pname, GLboolean * data);
inline GLBINDING_API void glGetClipPlane(GLenum plane, GLdouble * equation);
inline GLBINDING_API void glGetDoublev(GLenum pname, GLdouble * data);
inline GLBINDING_API GLenum glGetError();
inline GLBINDING_API void glGetFloatv(GLenum pname, GLfloat * data);
inline GLBINDING_API void glGetIntegerv(GLenum pname, GLint * data);
inline GLBINDING_API void glGetLightfv(GLenum light, GLenum pname, GLfloat * params);
inline GLBINDING_API void glGetLightiv(GLenum light, GLenum pname, GLint * params);
inline GLBINDING_API void glGetMapdv(GLenum target, GLenum query, GLdouble * v);
inline GLBINDING_API void glGetMapfv(GLenum target, GLenum query, GLfloat * v);
inline GLBINDING_API void glGetMapiv(GLenum target, GLenum query, GLint * v);
inline GLBINDING_API void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params);
inline GLBINDING_API void glGetMaterialiv(GLenum face, GLenum pname, GLint * params);
inline GLBINDING_API void glGetPixelMapfv(GLenum map, GLfloat * values);
inline GLBINDING_API void glGetPixelMapuiv(GLenum map, GLuint * values);
inline GLBINDING_API void glGetPixelMapusv(GLenum map, GLushort * values);
inline GLBINDING_API void glGetPolygonStipple(GLubyte * mask);
inline GLBINDING_API const GLubyte * glGetString(GLenum name);
inline GLBINDING_API void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params);
inline GLBINDING_API void glGetTexEnviv(GLenum target, GLenum pname, GLint * params);
inline GLBINDING_API void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params);
inline GLBINDING_API void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params);
inline GLBINDING_API void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params);
inline GLBINDING_API void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
inline GLBINDING_API void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);
inline GLBINDING_API void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);
inline GLBINDING_API void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
inline GLBINDING_API void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
inline GLBINDING_API void glHint(GLenum target, GLenum mode);
inline GLBINDING_API void glIndexMask(GLuint mask);
inline GLBINDING_API void glIndexd(GLdouble c);
inline GLBINDING_API void glIndexdv(const GLdouble * c);
inline GLBINDING_API void glIndexf(GLfloat c);
inline GLBINDING_API void glIndexfv(const GLfloat * c);
inline GLBINDING_API void glIndexi(GLint c);
inline GLBINDING_API void glIndexiv(const GLint * c);
inline GLBINDING_API void glIndexs(GLshort c);
inline GLBINDING_API void glIndexsv(const GLshort * c);
inline GLBINDING_API void glInitNames();
inline GLBINDING_API GLboolean glIsEnabled(GLenum cap);
inline GLBINDING_API GLboolean glIsList(GLuint list);
inline GLBINDING_API void glLightModelf(GLenum pname, GLfloat param);
inline GLBINDING_API void glLightModelfv(GLenum pname, const GLfloat * params);
inline GLBINDING_API void glLightModeli(GLenum pname, GLint param);
inline GLBINDING_API void glLightModeliv(GLenum pname, const GLint * params);
inline GLBINDING_API void glLightf(GLenum light, GLenum pname, GLfloat param);
inline GLBINDING_API void glLightfv(GLenum light, GLenum pname, const GLfloat * params);
inline GLBINDING_API void glLighti(GLenum light, GLenum pname, GLint param);
inline GLBINDING_API void glLightiv(GLenum light, GLenum pname, const GLint * params);
inline GLBINDING_API void glLineStipple(GLint factor, GLushort pattern);
inline GLBINDING_API void glLineWidth(GLfloat width);
inline GLBINDING_API void glListBase(GLuint base);
inline GLBINDING_API void glLoadIdentity();
inline GLBINDING_API void glLoadMatrixd(const GLdouble * m);
inline GLBINDING_API void glLoadMatrixf(const GLfloat * m);
inline GLBINDING_API void glLoadName(GLuint name);
inline GLBINDING_API void glLogicOp(GLenum opcode);
inline GLBINDING_API void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
inline GLBINDING_API void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
inline GLBINDING_API void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
inline GLBINDING_API void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
inline GLBINDING_API void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);
inline GLBINDING_API void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);
inline GLBINDING_API void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
inline GLBINDING_API void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
inline GLBINDING_API void glMaterialf(GLenum face, GLenum pname, GLfloat param);
inline GLBINDING_API void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params);
inline GLBINDING_API void glMateriali(GLenum face, GLenum pname, GLint param);
inline GLBINDING_API void glMaterialiv(GLenum face, GLenum pname, const GLint * params);
inline GLBINDING_API void glMatrixMode(GLenum mode);
inline GLBINDING_API void glMultMatrixd(const GLdouble * m);
inline GLBINDING_API void glMultMatrixf(const GLfloat * m);
inline GLBINDING_API void glNewList(GLuint list, GLenum mode);
inline GLBINDING_API void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz);
inline GLBINDING_API void glNormal3bv(const GLbyte * v);
inline GLBINDING_API void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);
inline GLBINDING_API void glNormal3dv(const GLdouble * v);
inline GLBINDING_API void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
inline GLBINDING_API void glNormal3fv(const GLfloat * v);
inline GLBINDING_API void glNormal3i(GLint nx, GLint ny, GLint nz);
inline GLBINDING_API void glNormal3iv(const GLint * v);
inline GLBINDING_API void glNormal3s(GLshort nx, GLshort ny, GLshort nz);
inline GLBINDING_API void glNormal3sv(const GLshort * v);
inline GLBINDING_API void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
inline GLBINDING_API void glPassThrough(GLfloat token);
inline GLBINDING_API void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values);
inline GLBINDING_API void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values);
inline GLBINDING_API void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values);
inline GLBINDING_API void glPixelStoref(GLenum pname, GLfloat param);
inline GLBINDING_API void glPixelStorei(GLenum pname, GLint param);
inline GLBINDING_API void glPixelTransferf(GLenum pname, GLfloat param);
inline GLBINDING_API void glPixelTransferi(GLenum pname, GLint param);
inline GLBINDING_API void glPixelZoom(GLfloat xfactor, GLfloat yfactor);
inline GLBINDING_API void glPointSize(GLfloat size);
inline GLBINDING_API void glPolygonMode(GLenum face, GLenum mode);
inline GLBINDING_API void glPolygonStipple(const GLubyte * mask);
inline GLBINDING_API void glPopAttrib();
inline GLBINDING_API void glPopMatrix();
inline GLBINDING_API void glPopName();
inline GLBINDING_API void glPushAttrib(AttribMask mask);
inline GLBINDING_API void glPushMatrix();
inline GLBINDING_API void glPushName(GLuint name);
inline GLBINDING_API void glRasterPos2d(GLdouble x, GLdouble y);
inline GLBINDING_API void glRasterPos2dv(const GLdouble * v);
inline GLBINDING_API void glRasterPos2f(GLfloat x, GLfloat y);
inline GLBINDING_API void glRasterPos2fv(const GLfloat * v);
inline GLBINDING_API void glRasterPos2i(GLint x, GLint y);
inline GLBINDING_API void glRasterPos2iv(const GLint * v);
inline GLBINDING_API void glRasterPos2s(GLshort x, GLshort y);
inline GLBINDING_API void glRasterPos2sv(const GLshort * v);
inline GLBINDING_API void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);
inline GLBINDING_API void glRasterPos3dv(const GLdouble * v);
inline GLBINDING_API void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);
inline GLBINDING_API void glRasterPos3fv(const GLfloat * v);
inline GLBINDING_API void glRasterPos3i(GLint x, GLint y, GLint z);
inline GLBINDING_API void glRasterPos3iv(const GLint * v);
inline GLBINDING_API void glRasterPos3s(GLshort x, GLshort y, GLshort z);
inline GLBINDING_API void glRasterPos3sv(const GLshort * v);
inline GLBINDING_API void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
inline GLBINDING_API void glRasterPos4dv(const GLdouble * v);
inline GLBINDING_API void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
inline GLBINDING_API void glRasterPos4fv(const GLfloat * v);
inline GLBINDING_API void glRasterPos4i(GLint x, GLint y, GLint z, GLint w);
inline GLBINDING_API void glRasterPos4iv(const GLint * v);
inline GLBINDING_API void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
inline GLBINDING_API void glRasterPos4sv(const GLshort * v);
inline GLBINDING_API void glReadBuffer(GLenum src);
inline GLBINDING_API void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
inline GLBINDING_API void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
inline GLBINDING_API void glRectdv(const GLdouble * v1, const GLdouble * v2);
inline GLBINDING_API void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
inline GLBINDING_API void glRectfv(const GLfloat * v1, const GLfloat * v2);
inline GLBINDING_API void glRecti(GLint x1, GLint y1, GLint x2, GLint y2);
inline GLBINDING_API void glRectiv(const GLint * v1, const GLint * v2);
inline GLBINDING_API void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
inline GLBINDING_API void glRectsv(const GLshort * v1, const GLshort * v2);
inline GLBINDING_API GLint glRenderMode(GLenum mode);
inline GLBINDING_API void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
inline GLBINDING_API void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
inline GLBINDING_API void glScaled(GLdouble x, GLdouble y, GLdouble z);
inline GLBINDING_API void glScalef(GLfloat x, GLfloat y, GLfloat z);
inline GLBINDING_API void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
inline GLBINDING_API void glSelectBuffer(GLsizei size, GLuint * buffer);
inline GLBINDING_API void glShadeModel(GLenum mode);
inline GLBINDING_API void glStencilFunc(GLenum func, GLint ref, GLuint mask);
inline GLBINDING_API void glStencilMask(GLuint mask);
inline GLBINDING_API void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
inline GLBINDING_API void glTexCoord1d(GLdouble s);
inline GLBINDING_API void glTexCoord1dv(const GLdouble * v);
inline GLBINDING_API void glTexCoord1f(GLfloat s);
inline GLBINDING_API void glTexCoord1fv(const GLfloat * v);
inline GLBINDING_API void glTexCoord1i(GLint s);
inline GLBINDING_API void glTexCoord1iv(const GLint * v);
inline GLBINDING_API void glTexCoord1s(GLshort s);
inline GLBINDING_API void glTexCoord1sv(const GLshort * v);
inline GLBINDING_API void glTexCoord2d(GLdouble s, GLdouble t);
inline GLBINDING_API void glTexCoord2dv(const GLdouble * v);
inline GLBINDING_API void glTexCoord2f(GLfloat s, GLfloat t);
inline GLBINDING_API void glTexCoord2fv(const GLfloat * v);
inline GLBINDING_API void glTexCoord2i(GLint s, GLint t);
inline GLBINDING_API void glTexCoord2iv(const GLint * v);
inline GLBINDING_API void glTexCoord2s(GLshort s, GLshort t);
inline GLBINDING_API void glTexCoord2sv(const GLshort * v);
inline GLBINDING_API void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);
inline GLBINDING_API void glTexCoord3dv(const GLdouble * v);
inline GLBINDING_API void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);
inline GLBINDING_API void glTexCoord3fv(const GLfloat * v);
inline GLBINDING_API void glTexCoord3i(GLint s, GLint t, GLint r);
inline GLBINDING_API void glTexCoord3iv(const GLint * v);
inline GLBINDING_API void glTexCoord3s(GLshort s, GLshort t, GLshort r);
inline GLBINDING_API void glTexCoord3sv(const GLshort * v);
inline GLBINDING_API void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
inline GLBINDING_API void glTexCoord4dv(const GLdouble * v);
inline GLBINDING_API void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
inline GLBINDING_API void glTexCoord4fv(const GLfloat * v);
inline GLBINDING_API void glTexCoord4i(GLint s, GLint t, GLint r, GLint q);
inline GLBINDING_API void glTexCoord4iv(const GLint * v);
inline GLBINDING_API void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
inline GLBINDING_API void glTexCoord4sv(const GLshort * v);
inline GLBINDING_API void glTexEnvf(GLenum target, GLenum pname, GLfloat param);
inline GLBINDING_API void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params);
inline GLBINDING_API void glTexEnvi(GLenum target, GLenum pname, GLint param);
inline GLBINDING_API void glTexEnviv(GLenum target, GLenum pname, const GLint * params);
inline GLBINDING_API void glTexGend(GLenum coord, GLenum pname, GLdouble param);
inline GLBINDING_API void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params);
inline GLBINDING_API void glTexGenf(GLenum coord, GLenum pname, GLfloat param);
inline GLBINDING_API void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params);
inline GLBINDING_API void glTexGeni(GLenum coord, GLenum pname, GLint param);
inline GLBINDING_API void glTexGeniv(GLenum coord, GLenum pname, const GLint * params);
inline GLBINDING_API void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
inline GLBINDING_API void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
inline GLBINDING_API void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
inline GLBINDING_API void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
inline GLBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLint param);
inline GLBINDING_API void glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
inline GLBINDING_API void glTranslated(GLdouble x, GLdouble y, GLdouble z);
inline GLBINDING_API void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
inline GLBINDING_API void glVertex2d(GLdouble x, GLdouble y);
inline GLBINDING_API void glVertex2dv(const GLdouble * v);
inline GLBINDING_API void glVertex2f(GLfloat x, GLfloat y);
inline GLBINDING_API void glVertex2fv(const GLfloat * v);
inline GLBINDING_API void glVertex2i(GLint x, GLint y);
inline GLBINDING_API void glVertex2iv(const GLint * v);
inline GLBINDING_API void glVertex2s(GLshort x, GLshort y);
inline GLBINDING_API void glVertex2sv(const GLshort * v);
inline GLBINDING_API void glVertex3d(GLdouble x, GLdouble y, GLdouble z);
inline GLBINDING_API void glVertex3dv(const GLdouble * v);
inline GLBINDING_API void glVertex3f(GLfloat x, GLfloat y, GLfloat z);
inline GLBINDING_API void glVertex3fv(const GLfloat * v);
inline GLBINDING_API void glVertex3i(GLint x, GLint y, GLint z);
inline GLBINDING_API void glVertex3iv(const GLint * v);
inline GLBINDING_API void glVertex3s(GLshort x, GLshort y, GLshort z);
inline GLBINDING_API void glVertex3sv(const GLshort * v);
inline GLBINDING_API void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
inline GLBINDING_API void glVertex4dv(const GLdouble * v);
inline GLBINDING_API void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
inline GLBINDING_API void glVertex4fv(const GLfloat * v);
inline GLBINDING_API void glVertex4i(GLint x, GLint y, GLint z, GLint w);
inline GLBINDING_API void glVertex4iv(const GLint * v);
inline GLBINDING_API void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
inline GLBINDING_API void glVertex4sv(const GLshort * v);
inline GLBINDING_API void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

} // namespace gl10
