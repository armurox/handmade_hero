#include <windows.h>

void foo(void)
{
	const char *Foo = "Hello, World!\r\n";
	OutputDebugStringA("Hello, World!\n");
}

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
	char SmallS; // 8 bits - 256 bits [-128, 127]
	char unsigned SmallU; // 8 bits unsigned - 256 different values [0, 255]

	short MediumS; // 16 bits - 65536
	short unsigned MediumU;

	int LargeS; // 32 bits - 4 billion
	int unsigned LargeU;

	char unsigned Test;

	Test = 255;
	Test = Test + 1;

	int Integer;
	Integer = 5;
	Integer = 5 + 2;
	Integer = Integer + 7;
	foo();
}