// DarkTestWrapper.cpp
#include "DarkTestWrapper.h"
#include <string.h>

// Dummy implementation for now (replace with real logic)
long __stdcall InitDarkTest() {
    return 1; // success
}

long __stdcall LoadFile(const char* filepath, long imageType, long deviceName) {
    if (!filepath) return -1;  // error
    return 1; // pretend success
}

long __stdcall CalcDarkImageLevel(double* darkLevel) {
    if (!darkLevel) return -1;
    *darkLevel = 123.45;  // dummy test value
    return 1;
}
