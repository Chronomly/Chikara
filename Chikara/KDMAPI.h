#pragma once
#ifndef KDMAPI_H
#include <Windows.h>
#include <cstdint>

namespace KDMAPI {
  extern HMODULE dll_handle;
  extern uint32_t(__cdecl* SendDirectData)(unsigned long msg);
  extern int(__cdecl* TerminateKDMAPIStream)();
  extern void Init();
  extern void Destroy();
}
#endif