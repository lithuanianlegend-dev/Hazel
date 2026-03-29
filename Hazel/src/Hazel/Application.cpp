#include "Application.h"

#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"

namespace Hazel
{
	Application::Application()
	{
		
	}

	Application::~Application()
	{
		
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		HZ_TRACE(e.ToString());
		if (e.IsInCategory(EventCategoryApplication))
		{
			HZ_FATAL("EVENT IS, INFACT, AN APPLICATION EVENT.");
		}

		while (true);
	}
}