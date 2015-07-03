// dllmain.h : Declaration of module class.

class CFestivalTTSCOMModule : public ATL::CAtlDllModuleT< CFestivalTTSCOMModule >
{
public :
	DECLARE_LIBID(LIBID_FestivalTTSCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FESTIVALTTSCOM, "{509EF813-9C3D-4802-A0A5-07948A601BC5}")
};

extern class CFestivalTTSCOMModule _AtlModule;
