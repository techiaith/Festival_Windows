

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Jun 05 21:49:27 2015
 */
/* Compiler settings for FestivalTTSCOM.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __FestivalTTSCOM_i_h__
#define __FestivalTTSCOM_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFestivalTTSEngine_FWD_DEFINED__
#define __IFestivalTTSEngine_FWD_DEFINED__
typedef interface IFestivalTTSEngine IFestivalTTSEngine;

#endif 	/* __IFestivalTTSEngine_FWD_DEFINED__ */


#ifndef __FestivalTTSEngine_FWD_DEFINED__
#define __FestivalTTSEngine_FWD_DEFINED__

#ifdef __cplusplus
typedef class FestivalTTSEngine FestivalTTSEngine;
#else
typedef struct FestivalTTSEngine FestivalTTSEngine;
#endif /* __cplusplus */

#endif 	/* __FestivalTTSEngine_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFestivalTTSEngine_INTERFACE_DEFINED__
#define __IFestivalTTSEngine_INTERFACE_DEFINED__

/* interface IFestivalTTSEngine */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFestivalTTSEngine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0014FB73-CDD9-4BD2-83D1-0747A012DB58")
    IFestivalTTSEngine : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE say_text( 
            /* [in] */ BSTR inText) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE eval_command( 
            /* [in] */ BSTR inCommand) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE text_to_wave( 
            /* [in] */ BSTR inText,
            /* [in] */ BSTR inFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFestivalTTSEngineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFestivalTTSEngine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFestivalTTSEngine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFestivalTTSEngine * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFestivalTTSEngine * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFestivalTTSEngine * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFestivalTTSEngine * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFestivalTTSEngine * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *say_text )( 
            IFestivalTTSEngine * This,
            /* [in] */ BSTR inText);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *eval_command )( 
            IFestivalTTSEngine * This,
            /* [in] */ BSTR inCommand);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *text_to_wave )( 
            IFestivalTTSEngine * This,
            /* [in] */ BSTR inText,
            /* [in] */ BSTR inFile);
        
        END_INTERFACE
    } IFestivalTTSEngineVtbl;

    interface IFestivalTTSEngine
    {
        CONST_VTBL struct IFestivalTTSEngineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFestivalTTSEngine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFestivalTTSEngine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFestivalTTSEngine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFestivalTTSEngine_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFestivalTTSEngine_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFestivalTTSEngine_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFestivalTTSEngine_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFestivalTTSEngine_say_text(This,inText)	\
    ( (This)->lpVtbl -> say_text(This,inText) ) 

#define IFestivalTTSEngine_eval_command(This,inCommand)	\
    ( (This)->lpVtbl -> eval_command(This,inCommand) ) 

#define IFestivalTTSEngine_text_to_wave(This,inText,inFile)	\
    ( (This)->lpVtbl -> text_to_wave(This,inText,inFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFestivalTTSEngine_INTERFACE_DEFINED__ */



#ifndef __FestivalTTSCOMLib_LIBRARY_DEFINED__
#define __FestivalTTSCOMLib_LIBRARY_DEFINED__

/* library FestivalTTSCOMLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_FestivalTTSCOMLib;

EXTERN_C const CLSID CLSID_FestivalTTSEngine;

#ifdef __cplusplus

class DECLSPEC_UUID("DE59C381-1FB0-40F3-9688-DBEABE7A9466")
FestivalTTSEngine;
#endif
#endif /* __FestivalTTSCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


