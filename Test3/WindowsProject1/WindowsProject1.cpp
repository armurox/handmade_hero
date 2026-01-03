// WindowsProject1.cpp : Defines the entry point for the application.
//
#include <windows.h>


void bar(void)
{
	int barvariable;
	barvariable = 100;
}





void foo(void)
{
	int foovariable;
	foovariable = 200;
	bar();
}

struct projectile {
	char unsigned IsThisOnFire;
	int Damage;
	int ParticlesPerSecond;
	short HowManyCooks;
}; // Expected: 11 bytes (1 + 4 + 4 + 2) (88 bits)
// Actual: 16 bytes (128bits)

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{

	projectile TestProjectile;
	int SizeOfChar = sizeof(char unsigned);
	int SizeOfInt = sizeof(int);
	int SizeOfProjectile = sizeof(projectile);
	int SizeOfTestProjectile = sizeof(TestProjectile);


	TestProjectile.IsThisOnFire = 1;
	TestProjectile.Damage = 2;
	TestProjectile.ParticlesPerSecond = 3;
	TestProjectile.HowManyCooks = 4;
	unsigned short *ShortPointer = (unsigned short *) &TestProjectile;

	projectile Projectiles[40];

	int WhichProjectile = 4;
	Projectiles[WhichProjectile];

	projectile *ProjectilePointer = Projectiles;

	int SizeOfProjectiles = sizeof(Projectiles);
	int SizeOfProjectilePointer = sizeof(ProjectilePointer); 

	Projectiles[30].Damage = 30;
	(*(ProjectilePointer + 30)).Damage = 100;
	((projectile*)((char*)ProjectilePointer + 30 * sizeof(projectile))) -> Damage = 150;

	char unsigned Test;
	Test = 255;
	Test = Test + 1;
	foo();


	int x = 5;
	int y = 10;
	int z = 12;
	x = 0;
	x = x | (1 << 4);
	x = x | (1 << 8);
	x = x & (1 << 4);
	x = x ^ (1 << 8);
	
}