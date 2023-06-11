#pragma once
#include "Core.h"

namespace Stellar {

	class STELLAR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();
}

