#pragma once

#ifdef HI_PLATFORM_WINDOWS
	#ifdef HI_BUILD_DLL
		#define HI_API __declspec(dllexport)
	#else
		#define HI_API __declspec(dllimport)
	#endif
#else
	#error HiEngine only supports Windows !
#endif // HI_PLATFORM_WINDOWS
