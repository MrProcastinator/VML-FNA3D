/* FNA3D - 3D Graphics Library for FNA
 *
 * Copyright (c) 2020-2024 Ethan Lee
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software in a
 * product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * Ethan "flibitijibibo" Lee <flibitijibibo@flibitijibibo.com>
 *
 */

 #ifndef FNA3D_DRIVER_OPENGL_VITA_H
 #define FNA3D_DRIVER_OPENGL_VITA_H
 
 void vitastub_glBeginQuery(GLenum target, GLuint id);
 void vitastub_glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
 void vitastub_glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
 void vitastub_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
 void vitastub_glDebugMessageCallback(DEBUGPROC a, const GLvoid *b);
 void vitastub_glDebugMessageCallbackKHR(DEBUGPROC callback, const void *userParam);
 void vitastub_glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
 void vitastub_glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
 void vitastub_glDeleteQueries(GLsizei n, const GLuint *ids);
 void vitastub_glDrawBuffers(GLsizei n, const GLenum *bufs);
 void vitastub_glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
 void vitastub_glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
 void vitastub_glEndQuery(GLenum target);
 void vitastub_glGenQueries(GLsizei n, GLuint *ids);
 void vitastub_glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
 void vitastub_glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
 void vitastub_glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params);
 void vitastub_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
 void vitastub_glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments);
 void vitastub_glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint *params);
 void vitastub_glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
 void vitastub_glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
 void vitastub_glSampleMaski(GLuint maskNumber, GLbitfield mask);
 void vitastub_glStringMarkerGREMEDY(GLsizei len, const void *string);
 void vitastub_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
 void vitastub_glTexImage3DOES(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
 void vitastub_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
 void vitastub_glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
 void vitastub_glVertexAttribDivisor(GLuint index, GLuint divisor);
 
 #ifdef INCLUDE_ARB_FUNCTIONS
 /* For Mojoshader */
 void vitastub_glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj);
 void vitastub_glBindProgramARB(GLenum target, GLuint program);
 GLhandleARB vitastub_glCreateProgramObjectARB(void);
 GLhandleARB vitastub_glCreateShaderObjectARB(GLenum shaderType);
 void vitastub_glDeleteObjectARB(GLhandleARB obj);
 void vitastub_glDeleteProgramsARB(GLsizei n, const GLuint *programs);
 void vitastub_glGenProgramsARB(GLsizei n, GLuint *programs);
 void vitastub_glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
 void vitastub_glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params);
 void vitastub_glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);
 void vitastub_glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void *string);
 void vitastub_glSpecializeShaderARB(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
 void vitastub_glUseProgramObjectARB(GLhandleARB programObj);
 void vitastub_glVertexAttribDivisorARB(GLuint index, GLuint divisor);
 #endif
 
 #endif