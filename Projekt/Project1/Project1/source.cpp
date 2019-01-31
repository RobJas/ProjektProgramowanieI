#include <iostream>
#include "rysowanie_mapy.h"
#include "gra_struktura.h"
#include "regulamin.h"
using namespace std;

int main()
{
	regulamin();
	rysowanie_mapy();
	gra_struktura();
	cout << "";
	cin.ignore();
	cin.get();
	system("pause");
}