#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
    MessageBoxA(0, "This is handmade hero.", "Handmade Hero", MB_OK|MB_ICONINFORMATION);
    return(0);         
}