#ifndef BACKEND_H
#define BACKEND_H

#define DLL_EXPORT __declspec(dllexport)

extern "C" {
    int DLL_EXPORT ReturnFunction();
}

#endif // BACKEND_H