#ifndef NDK_CMAKE_SAMPLE_FUNC_H_
#define NDK_CMAKE_SAMPLE_FUNC_H_

#if defined(WIN32)
    #define FUNC_API __stdcall
    #define FUNC_EXPORT __declspec(dllexport)
#elif defined(__ANDROID__)
    #define FUNC_API
    #define FUNC_EXPORT __attribute__ ((visibility ("default")))
#else
    #define FUNC_API
    #define FUNC_EXPORT
#endif

extern "C"
{
    FUNC_EXPORT float FUNC_API add(float a, float b);
}

#endif // NDK_CMAKE_SAMPLE_FUNC_H_
