#include "FNA3D_Driver.h"
#include "FNA3D_Driver_OpenGL.h"
#define INCLUDE_ARB_FUNCTIONS
typedef char GLcharARB;
typedef unsigned int GLhandleARB;
#include "FNA3D_Driver_OpenGL_vita.h"

#ifdef FNA3D_VITA_IGNORE_UNIMPLEMENTED
#   ifdef FNA3D_VITA_LOG_UNIMPLEMENTED
#       define FNA3D_VITA_HANDLE_UNIMPLEMENTED(func, message) \
    do { \
        FNA3D_LogWarn("Unimplemented function '%s' in vitaGL: %s", func, message); \
    } while(0)
#   else
#       define FNA3D_VITA_HANDLE_UNIMPLEMENTED(func, message)
#   endif
#else
#   define FNA3D_VITA_HANDLE_UNIMPLEMENTED(func, message) \
    do { \
        SDL_Assert(0 && "Unimplemented function '" func "' in vitaGL: " message); \
    } while(0)
#endif

void vitastub_glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glAttachObjectARB", "ARB functions not implemented");
}

void vitastub_glBeginQuery(GLenum target, GLuint id)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glBeginQuery", "Occlusion queries not implemented");
}

void vitastub_glBindProgramARB(GLenum target, GLuint program)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glBindProgramARB", "ARB functions not implemented");
}

void vitastub_glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glBlendColor", "No global blend color implementation");
}

void vitastub_glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glColorMaski", "No global blend color implementation");
}

void vitastub_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glCompressedTexSubImage2D", "No compressed texture implementation");
}

GLhandleARB vitastub_glCreateProgramObjectARB(void)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glCreateProgramObjectARB", "ARB functions not implemented");
    return 0;
}

GLhandleARB vitastub_glCreateShaderObjectARB(GLenum shaderType)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glCreateShaderObjectARB", "ARB functions not implemented");
    return 0;
}

void vitastub_glDebugMessageCallback(DEBUGPROC callback, const void *userParam)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDebugMessageCallback", "No debug calls implemented");
}

void vitastub_glDebugMessageCallbackKHR(DEBUGPROC callback, const void *userParam)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDebugMessageCallbackKHR", "No debug calls implemented");
}

void vitastub_glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDebugMessageControl", "No debug calls implemented");
}

void vitastub_glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDebugMessageControlKHR", "No debug calls implemented");
}

void vitastub_glDeleteObjectARB(GLhandleARB obj)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDeleteObjectARB", "ARB functions not implemented");
}

void vitastub_glDeleteProgramsARB(GLsizei n, const GLuint *programs)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDeleteProgramsARB", "ARB functions not implemented");
}

void vitastub_glDeleteQueries(GLsizei n, const GLuint *ids)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDeleteQueries", "Occlusion queries not implemented");
}

void vitastub_glDrawBuffers(GLsizei n, const GLenum *bufs)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDrawBuffers", "No custom draw buffers implemented");
}

void vitastub_glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDrawElementsInstancedBaseVertex", "No base vertex rendering implemented");
}

void vitastub_glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glDrawElementsInstancedBaseVertexOES", "No base vertex rendering implemented");
}

void vitastub_glEndQuery(GLenum target)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glEndQuery", "Occlusion queries not implemented");
}

void vitastub_glGenProgramsARB(GLsizei n, GLuint *programs)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGenProgramsARB", "ARB functions not implemented");
}

void vitastub_glGenQueries(GLsizei n, GLuint *ids)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGenQueries", "Occlusion queries not implemented");
}

void vitastub_glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGetBufferSubData", "No buffer override by offset implemented");
}

void vitastub_glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGetInfoLogARB", "ARB functions not implemented");
}

void vitastub_glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGetInternalformativ", "ARB functions not implemented");
}

void vitastub_glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGetObjectParameterivARB", "ARB functions not implemented");
}

void vitastub_glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGetQueryObjectuiv", "Occlusion queries not implemented");
}

void vitastub_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glGetTexImage", "No texture retrieval implemented");
}

void vitastub_glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glInvalidateFramebuffer", "No buffer attachment invalidation implemented");
}

void vitastub_glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glProgramLocalParameter4fvARB", "ARB functions not implemented");
}

void vitastub_glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint *params)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glProgramLocalParameterI4ivNV", "ARB functions not implemented");
}

void vitastub_glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void *string)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glProgramStringARB", "ARB functions not implemented");
}

void vitastub_glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glRenderbufferStorageMultisample", "No multisamples implemented");
}

void vitastub_glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glRenderbufferStorageMultisampleEXT", "No multisamples implemented");
}

void vitastub_glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glSampleMaski", "No sample mask implemented");
}

void vitastub_glSpecializeShaderARB(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glSpecializeShaderARB", "ARB functions not implemented");
}

void vitastub_glStringMarkerGREMEDY(GLsizei len, const void *string)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glStringMarkerGREMEDY", "No debugging functions implemented");
}

void vitastub_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glTexImage3D", "No 3D functions implemented");
}

void vitastub_glTexImage3DOES(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glTexImage3DOES", "No 3D functions implemented");
}

void vitastub_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glTexSubImage3D", "No 3D functions implemented");
}

void vitastub_glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glTexSubImage3DOES", "No 3D functions implemented");
}

void vitastub_glUseProgramObjectARB(GLhandleARB programObj)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glUseProgramObjectARB", "ARB functions not implemented");
}

void vitastub_glVertexAttribDivisor(GLuint index, GLuint divisor)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glVertexAttribDivisor", "No divisor implemented");
}

void vitastub_glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
	FNA3D_VITA_HANDLE_UNIMPLEMENTED("glVertexAttribDivisorARB", "ARB functions not implemented");
}
