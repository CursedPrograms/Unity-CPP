#include "backend.h"

extern "C" {
    int DLL_EXPORT ReturnFunction() {
        return 10;
    }
}