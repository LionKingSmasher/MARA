#pragma once


#ifdef _WIN32
  #define MARA_EXPORT __declspec(dllexport)
#else
  #define MARA_EXPORT
#endif

MARA_EXPORT void mara();
