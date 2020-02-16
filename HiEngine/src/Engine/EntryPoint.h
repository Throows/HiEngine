#pragma once

#ifdef HI_PLATFORM_WINDOWS

extern HiEngine::Application* HiEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("HiFarmay Engine !\n");
	auto app = HiEngine::CreateApplication();
	app->Run();
	delete app;

}

#endif // HI_PLATFORM_WINDOWS
