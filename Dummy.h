// DarkTestWrapper.h
#pragma once
#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) long __stdcall InitDarkTest();
__declspec(dllexport) long __stdcall LoadFile(const char* filepath, long imageType, long deviceName);
__declspec(dllexport) long __stdcall CalcDarkImageLevel(double* darkLevel);

#ifdef __cplusplus
}
#endif
