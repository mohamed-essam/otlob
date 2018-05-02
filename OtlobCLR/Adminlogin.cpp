#include "Adminlogin.h"

#include <Windows.h>

using namespace OtlobCLR;

int WINAPI WinMain5(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Adminlogin());

	return 0;

}