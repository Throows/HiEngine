#pragma once

#include "Core.h"

namespace HiEngine
{
	class HI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	// Client
	Application* CreateApplication();

}


