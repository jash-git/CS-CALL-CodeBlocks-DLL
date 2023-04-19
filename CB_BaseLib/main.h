#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT SomeFunction(const LPCSTR sometext);
LPCSTR DLL_EXPORT SomeFunction01(const LPCSTR sometext);
double DLL_EXPORT Add(double a, double b);//test_API

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
