#pragma once

#ifdef HELLOLIB_CUSTOM_EXPORTS 
#define HELLOLIB_API __declspec(dllexport) 
#else 
#define HELLOLIB_API __declspec(dllimport) 
#endif

class HELLOLIB_API HelloLib
{
public:
   void printHello();
};