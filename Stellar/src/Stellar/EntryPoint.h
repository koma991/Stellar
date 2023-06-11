#pragma once


#ifdef SL_PLATFORM_WINDOWS

extern Stellar::Application* Stellar::CreateApplication();

int main(int args,char** argv) {
	auto app = Stellar::CreateApplication();
	app->Run();
	delete app;
}
#endif