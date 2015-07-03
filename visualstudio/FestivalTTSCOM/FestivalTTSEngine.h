// FestivalTTSEngine.h : Declaration of the CFestivalTTSEngine

#pragma once
#include "resource.h"       // main symbols

#include "FestivalTTSCOM_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CFestivalTTSEngine

class ATL_NO_VTABLE CFestivalTTSEngine :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFestivalTTSEngine, &CLSID_FestivalTTSEngine>,
	public IDispatchImpl<IFestivalTTSEngine, &IID_IFestivalTTSEngine, &LIBID_FestivalTTSCOMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:

	CFestivalTTSEngine();

DECLARE_REGISTRY_RESOURCEID(IDR_FESTIVALTTSENGINE)


BEGIN_COM_MAP(CFestivalTTSEngine)
	COM_INTERFACE_ENTRY(IFestivalTTSEngine)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(say_text)(BSTR inText);
	STDMETHOD(eval_command)(BSTR inCommand);
	STDMETHOD(text_to_wave)(BSTR inText, BSTR inFile);
};

OBJECT_ENTRY_AUTO(__uuidof(FestivalTTSEngine), CFestivalTTSEngine)
