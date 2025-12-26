#include <windows.h>

void foo(void)
{
	OutputDebugStringA("Hello, World!\n");
}

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
	foo();
}