/*

--------- * Benzaiten * ---------
Benzaiten :: Built for private use on Special Force 2 PlayPark
Configuration.h : Config
---------------------------------

*/

//Window Class : Special Force 2 - (LaunchUnrealUWindowsClient)

#define ProcessEventIndex 67 
#define g_dwProcessEvent 0x00454AD0
#define EXCEPTION_CONTINUABLE 0
#define IS_FUNCTION(c, oo, o, n) (pFunction->Class->Name.Index == c && pFunction->Outer->Outer->Name.Index == oo && pFunction->Outer->Name.Index == o && pFunction->Name.Index == n)
void __fastcall hkProcessEvent(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult);
DWORD dwNullptrExceptionHandler = NULL;

class Log
{
public:
	Log() {}
	~Log()
	{
		if (LOG.is_open())
		{
			LOG << std::endl;
		}
	}

	template <typename T>
	Log& operator<<(const T& t)
	{
		if (LOG.is_open())
		{
			LOG << t;
		}
		return *this;
	}
private:
	static std::ofstream LOG;
};