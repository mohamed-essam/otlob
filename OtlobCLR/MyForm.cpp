#include "MyForm.h"

#include <Windows.h>

using namespace OtlobCLR;

int WINAPI WinMain2(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());

	return 0;

}