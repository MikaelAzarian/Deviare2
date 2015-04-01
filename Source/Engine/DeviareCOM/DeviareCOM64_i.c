

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Apr 01 14:03:45 2015
 */
/* Compiler settings for DeviareCOM.idl:
    Os, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_INktObject,0x3B886748,0xDC9B,0x43B0,0xB7,0x61,0x68,0xDA,0xD9,0xE5,0x48,0x4F);


MIDL_DEFINE_GUID(IID, IID_INktProcess,0x32EC8909,0x95FE,0x483c,0xA5,0xBA,0xBE,0xE8,0x64,0x70,0xC2,0x10);


MIDL_DEFINE_GUID(IID, IID_INktProcessesEnum,0xDF43831B,0x7A0B,0x43d4,0xAC,0x40,0x61,0x36,0xA7,0xC9,0x5B,0x28);


MIDL_DEFINE_GUID(IID, IID_INktModule,0xF12AAEB4,0x3CD8,0x435F,0xBF,0x6B,0x7D,0x2C,0x2A,0xFF,0xD4,0xEC);


MIDL_DEFINE_GUID(IID, IID_INktModulesEnum,0x382A6E42,0x3E59,0x40d7,0xBA,0x40,0xAF,0xD1,0x06,0x11,0xC5,0xB8);


MIDL_DEFINE_GUID(IID, IID_INktExportedFunction,0x1B91884B,0xE65C,0x487d,0xAE,0x89,0x0D,0x86,0x27,0x8C,0x93,0xC9);


MIDL_DEFINE_GUID(IID, IID_INktExportedFunctionsEnum,0xB110FD2E,0x174C,0x40ec,0xB1,0x80,0xAA,0x2B,0xF9,0x8C,0x99,0x2D);


MIDL_DEFINE_GUID(IID, IID_INktHook,0xF69A083D,0x105F,0x417b,0xB1,0xE3,0xEE,0x43,0x0E,0x58,0x43,0x1A);


MIDL_DEFINE_GUID(IID, IID_INktHooksEnum,0xA31B9BE8,0xCE9A,0x4d7c,0xA6,0x24,0x20,0x64,0x0A,0xCA,0x53,0x2C);


MIDL_DEFINE_GUID(IID, IID_INktParam,0xBB0A417B,0xD0F2,0x4c69,0x81,0x58,0x95,0x08,0x7B,0x0A,0x0C,0x8F);


MIDL_DEFINE_GUID(IID, IID_INktParamsEnum,0x718E4DBC,0xDFC2,0x4fa8,0xBF,0xE6,0x0A,0x81,0x92,0xCE,0xEF,0x5D);


MIDL_DEFINE_GUID(IID, IID_INktHookCallInfo,0x1A2D8AE6,0x6CF9,0x49db,0x88,0x0D,0xA8,0x06,0xD5,0x59,0xEE,0x20);


MIDL_DEFINE_GUID(IID, IID_INktProcessMemory,0xACE2F499,0xAA1C,0x4b36,0x91,0x2F,0x18,0x9F,0x8F,0x8B,0x67,0x65);


MIDL_DEFINE_GUID(IID, IID_INktStackTrace,0x42B03B4D,0xC3DA,0x463d,0x98,0xB7,0x73,0x40,0x57,0x54,0xA7,0x64);


MIDL_DEFINE_GUID(IID, IID_INktSpyMgr,0xDD71FF07,0xB1E6,0x430e,0x84,0x39,0x53,0xB7,0x60,0xE9,0x00,0x62);


MIDL_DEFINE_GUID(IID, IID_INktHookCallInfoPlugin,0xD7630D7B,0x12E3,0x407a,0x80,0x56,0xCF,0x08,0xA2,0x5B,0x3A,0x07);


MIDL_DEFINE_GUID(IID, IID_INktHookInfo,0x99DE4737,0xC1B4,0x49f6,0x80,0x72,0xA7,0x64,0x5E,0x78,0xBA,0x8B);


MIDL_DEFINE_GUID(IID, IID_INktDbObject,0x8B4C6D62,0x05C5,0x48ee,0xA5,0x27,0xE1,0xE1,0xC3,0x5F,0x52,0x2C);


MIDL_DEFINE_GUID(IID, IID_INktDbObjectsEnum,0xE36B3F2F,0xDEA5,0x4d55,0x93,0x48,0x8B,0x67,0xA4,0x15,0x7B,0x21);


MIDL_DEFINE_GUID(IID, IID_INktDbModule,0x9AB36611,0xAB19,0x4346,0x95,0x63,0xAB,0x47,0xA7,0x1A,0x86,0x3F);


MIDL_DEFINE_GUID(IID, IID_INktDbModulesEnum,0xD8E4F664,0x6EC1,0x4c6b,0x87,0x91,0xD7,0x2E,0xC6,0x9E,0xBC,0xA1);


MIDL_DEFINE_GUID(IID, IID_INktTools,0xD9C5FF67,0x2311,0x494f,0xBA,0x9A,0xC7,0xC5,0xAA,0xF1,0x43,0x01);


MIDL_DEFINE_GUID(IID, IID_INktStructPEFileHeader,0x4192DDF7,0xFB9A,0x4de5,0x8A,0xE5,0xAD,0xCB,0x5C,0x98,0x6B,0x8F);


MIDL_DEFINE_GUID(IID, IID_INktStructPEOptionalHeader,0xFE1FD754,0x7630,0x44db,0xBF,0xAA,0x06,0x50,0x5C,0x44,0x5B,0x59);


MIDL_DEFINE_GUID(IID, IID_INktStructPESections,0x5BF7BC52,0x7158,0x4e0f,0x85,0x7E,0xF7,0xFD,0xB1,0x37,0x24,0x9F);


MIDL_DEFINE_GUID(IID, IID_INktPdbFunctionSymbol,0x21403F16,0xB370,0x4bc7,0x9D,0x7E,0x0D,0xED,0xA5,0x4E,0xAD,0x01);


MIDL_DEFINE_GUID(IID, LIBID_Deviare2,0x6E5EC37D,0xCF01,0x49B1,0x96,0xC7,0x5E,0x8E,0xCF,0x21,0xA1,0x4C);


MIDL_DEFINE_GUID(CLSID, CLSID_NktObject,0x6C58E03D,0xACFF,0x426F,0x95,0xAC,0x56,0xC1,0xFA,0x8B,0x0C,0x73);


MIDL_DEFINE_GUID(IID, DIID_DNktProcessEvents,0x07F5FFF7,0x4801,0x41c5,0x82,0x7F,0x91,0x19,0x81,0x04,0xD8,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_NktProcess,0xE5FD693D,0x4E04,0x4058,0xBB,0xBA,0x8D,0x60,0xBA,0xAE,0xE1,0x6C);


MIDL_DEFINE_GUID(CLSID, CLSID_NktProcessesEnum,0x6D477BF3,0xF521,0x475f,0xAC,0xF5,0x53,0x6D,0x16,0x04,0x86,0xB1);


MIDL_DEFINE_GUID(CLSID, CLSID_NktModule,0x5D36944B,0x2FBA,0x4CA1,0xA8,0x88,0xC5,0xD9,0x26,0x59,0x3D,0x20);


MIDL_DEFINE_GUID(CLSID, CLSID_NktModulesEnum,0x4207729B,0xB2F5,0x4628,0x98,0x85,0x23,0xC0,0xD0,0xB1,0x93,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_NktExportedFunction,0xD901F1D6,0xFC59,0x4dca,0x9D,0xAD,0xE9,0xC1,0xEE,0x7A,0x32,0x80);


MIDL_DEFINE_GUID(CLSID, CLSID_NktExportedFunctionsEnum,0xBD246936,0x6FDD,0x4e9c,0x9C,0xD4,0xE3,0xA8,0xEF,0x73,0x92,0xDC);


MIDL_DEFINE_GUID(IID, DIID_DNktHookEvents,0xB497652A,0x056C,0x46b1,0x82,0x0F,0xAB,0x15,0xD9,0xA4,0x58,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_NktHook,0x4C71C5D5,0xB510,0x465a,0xB2,0xE4,0xEA,0xC7,0xB2,0x71,0xC1,0x64);


MIDL_DEFINE_GUID(CLSID, CLSID_NktHooksEnum,0x329BE071,0x4C82,0x4106,0xB7,0xB1,0xE4,0xA6,0x68,0xEA,0xFC,0x1E);


MIDL_DEFINE_GUID(CLSID, CLSID_NktParam,0x5DA31131,0xA1AD,0x40b2,0xA5,0x26,0x87,0x6F,0x61,0xE1,0xDF,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_NktParamsEnum,0x51BFF27D,0x9E5F,0x47e6,0xAA,0xB8,0x76,0xBF,0xD2,0x59,0x2F,0x43);


MIDL_DEFINE_GUID(CLSID, CLSID_NktHookCallInfo,0xD41D1782,0xE887,0x4c10,0x8D,0xCF,0x9A,0x25,0xD9,0xDD,0xA8,0x88);


MIDL_DEFINE_GUID(CLSID, CLSID_NktHookInfo,0xB0506A96,0x1E21,0x4da4,0x91,0x77,0xB8,0x55,0x46,0x75,0x6B,0x8C);


MIDL_DEFINE_GUID(CLSID, CLSID_NktProcessMemory,0xD9706C19,0x23F1,0x435c,0x97,0xFB,0x1D,0x21,0x37,0x8E,0xCC,0x88);


MIDL_DEFINE_GUID(CLSID, CLSID_NktStackTrace,0xABF7E938,0xAF08,0x47ab,0x98,0x57,0xCF,0xF1,0x6E,0x6C,0x32,0x15);


MIDL_DEFINE_GUID(IID, DIID_DNktSpyMgrEvents,0x71BF517D,0x533B,0x473C,0xA3,0xB8,0x63,0xFD,0x98,0x87,0xC1,0x95);


MIDL_DEFINE_GUID(CLSID, CLSID_NktSpyMgr,0x4C7A99AA,0x560C,0x4f75,0x88,0x5E,0x3A,0xF6,0xCB,0xD3,0xCF,0x32);


MIDL_DEFINE_GUID(CLSID, CLSID_NktDbObject,0xCA025A96,0xCE32,0x45b6,0xBD,0x88,0x14,0xD3,0x42,0xE1,0x53,0x14);


MIDL_DEFINE_GUID(CLSID, CLSID_NktDbObjectsEnum,0x1505BE0D,0x8C51,0x4362,0xB7,0xA1,0x78,0x4F,0x2C,0x84,0x62,0xD0);


MIDL_DEFINE_GUID(CLSID, CLSID_NktDbModule,0x2D6F0D5D,0x0265,0x4a2e,0x81,0x90,0x17,0x88,0xC7,0xCA,0xF0,0x81);


MIDL_DEFINE_GUID(CLSID, CLSID_NktDbModulesEnum,0x534B629F,0x0C66,0x4479,0x82,0xCC,0xF7,0xE5,0x74,0x3F,0xC6,0x5F);


MIDL_DEFINE_GUID(CLSID, CLSID_NktTools,0x46071676,0x3D4D,0x40b2,0x90,0x88,0x55,0x35,0x47,0x32,0x41,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_NktHookCallInfoPlugin,0x10BBBE7A,0xA01F,0x45fd,0xBB,0x27,0x92,0xCB,0xDC,0xE7,0x38,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_NktStructPEFileHeader,0xB51A9270,0xC6BF,0x47c5,0xA7,0x1C,0xE4,0x61,0x7A,0x4C,0x41,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_NktStructPEOptionalHeader,0xEE31335B,0x46A8,0x4e52,0xB0,0x0E,0x95,0x76,0xE5,0x6D,0xBB,0x27);


MIDL_DEFINE_GUID(CLSID, CLSID_NktStructPESections,0x36238075,0x92D6,0x4573,0xAF,0x09,0x76,0xBE,0x12,0xCE,0x33,0x69);


MIDL_DEFINE_GUID(CLSID, CLSID_NktPdbFunctionSymbol,0x913602A6,0x9390,0x4cca,0x84,0xF2,0x7C,0xBB,0x53,0xF4,0x66,0x89);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



