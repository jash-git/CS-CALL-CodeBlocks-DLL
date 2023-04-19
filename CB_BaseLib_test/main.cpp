#include <iostream>
#include "stdio.h"
#include <windows.h>

using namespace std;

//---
#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

double DLL_EXPORT Add(double a, double b);//test_API

void DLL_EXPORT SomeFunction(const LPCSTR sometext);

LPCSTR DLL_EXPORT SomeFunction01(const LPCSTR sometext);
#ifdef __cplusplus
}
#endif
//---
int main()
{
    cout << "Hello world!" << "\t" <<Add(10,15)<< endl;
    LPCSTR sometext ="ABCD 012345678";
    SomeFunction(sometext);
    cout << SomeFunction01(sometext)<< endl;
    SomeFunction(sometext);
    return 0;
}
