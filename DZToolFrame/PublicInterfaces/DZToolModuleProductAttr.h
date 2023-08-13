#ifdef  _WINDOWS_SOURCE
#ifdef  __DZToolModuleProductAttr
#define ExportedByDZToolModuleProductAttr     __declspec(dllexport)
#else
#define ExportedByDZToolModuleProductAttr     __declspec(dllimport)
#endif
#else
#define ExportedByDZToolModuleProductAttr
#endif
