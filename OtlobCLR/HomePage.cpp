#include "HomePage.h"

#include <Windows.h>

using namespace OtlobCLR;

int WINAPI WinMain3(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew HomePage());

	return 0;

}