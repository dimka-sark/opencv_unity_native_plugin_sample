
#define ANDROID_BUILD


#ifdef ANDROID_BUILD
#define DLL_EXPORT
#else
#define DLL_EXPORT _declspec(dllexport) __stdcall
#endif