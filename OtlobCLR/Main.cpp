#include "Main.h"

using namespace OtlobCLR;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Main());

	return 0;

}