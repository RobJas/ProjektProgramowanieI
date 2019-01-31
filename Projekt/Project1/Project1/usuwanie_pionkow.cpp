#include <iostream>
#include <windows.h>
#include "usuwanie_pionkow.h"
#include "setCursor.h"
using namespace std;

void usuwanie_pionkow(int stara_pozycja)
{
	switch (stara_pozycja)
	{
	case 1:
		setCursor(4, 3);
		cout << "       ";
		break;
	case 2:
		setCursor(17, 3);
		cout << "      ";
		break;
	case 3:
		setCursor(30, 3);
		cout << "      ";
		break;
	case 4:
		setCursor(43, 3);
		cout << "      ";
		break;
	case 5:
		setCursor(56, 3);
		cout << "      ";
		break;
	case 6:
		setCursor(69, 3);
		cout << "      ";
		break;
	case 7:
		setCursor(82, 3);
		cout << "      ";
		break;
	case 8:
		setCursor(95, 3);
		cout << "      ";
		break;
	case 9:
		setCursor(108, 3);
		cout << "      ";
		break;
	case 10:
		setCursor(108, 8);
		cout << "      ";
		break;
	case 11:
		setCursor(108, 13);
		cout << "      ";
		break;
	case 12:
		setCursor(108, 18);
		cout << "      ";
		break;
	case 13:
		setCursor(108, 23);
		cout << "      ";
		break;
	case 14:
		setCursor(108, 28);
		cout << "      ";
		break;
	case 15:
		setCursor(108, 33);
		cout << "      ";
		break;
	case 16:
		setCursor(108, 38);
		cout << "      ";
		break;
	case 17:
		setCursor(108, 43);
		cout << "      ";
		break;
	case 18:
		setCursor(95, 43);
		cout << "      ";
		break;
	case 19:
		setCursor(82, 43);
		cout << "      ";
		break;
	case 20:
		setCursor(69, 43);
		cout << "      ";
		break;
	case 21:
		setCursor(56, 43);
		cout << "      ";
		break;
	case 22:
		setCursor(43, 43);
		cout << "      ";
		break;
	case 23:
		setCursor(30, 43);
		cout << "      ";
		break;
	case 24:
		setCursor(17, 43);
		cout << "      ";
		break;
	case 25:
		setCursor(4, 43);
		cout << "      ";
		break;
	case 26:
		setCursor(4, 38);
		cout << "      ";
		break;
	case 27:
		setCursor(4, 33);
		cout << "      ";
		break;
	case 28:
		setCursor(4, 28);
		cout << "      ";
		break;
	case 29:
		setCursor(4, 23);
		cout << "      ";
		break;
	case 30:
		setCursor(4, 18);
		cout << "      ";
		break;
	case 31:
		setCursor(4, 13);
		cout << "      ";
		break;
	case 32:
		setCursor(4, 8);
		cout << "      ";
		break;
	}
}