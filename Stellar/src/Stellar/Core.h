#pragma once

#ifdef SL_PLATFORM_WINDOWS
		#ifdef SL_BUILD_DLL
				#define STELLAR_API _declspec(dllexport)
		#else
				#define STELLAR_API _declspec(dllimport)
		#endif
#else
#error Stellar only support Windows!
#endif