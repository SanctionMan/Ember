#pragma once

#ifdef EM_PLATFORM_WINDOWS

extern Ember::Application* Ember::CreateApplication();

int main(int argc, char** argv)
{
	printf("Ember Engine\n");
	auto app = Ember::CreateApplication();
	app->Run();
	delete app;
}

#endif // EM_PLATFORM_WINDOWS
