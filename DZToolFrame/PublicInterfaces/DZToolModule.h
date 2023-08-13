#ifdef  _WINDOWS_SOURCE
#ifdef  __DZToolModule
#define ExportedByDZToolModule     __declspec(dllexport)
#else
#define ExportedByDZToolModule     __declspec(dllimport)
#endif
#else
#define ExportedByDZToolModule
#endif
