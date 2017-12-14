#include <stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	unsigned short int nz;
	int ch1, ch2, k;
	cout << "Введите номер задания \n";
	cin >> nz;
start:
	switch (nz)
	{
	case 15:
	{
		/*15.	Нарисовать равнобедренный треугольник из символов ^.Высоту выбирает пользователь.
			Например: высота = 5, на экране*/
		int vys, kol = 1;
		cout << "Высота = ";
		cin >> vys;
		int i;
		for (i = 1; i <= vys; i++)
		{
			
			k = kol;
			if (i == 1)
			{
				ch1 = (vys / 2)+1;
				while (kol <= vys)
				{
					if (kol == ch1)
					{
						cout << "^";
					}
					else
					{
						cout << " ";
					}
					kol++;
				}
				cout << endl;
				kol = 1;
				ch1 = 1; 
				ch2 = vys;
			}
			else
			{
				while (kol <= vys)
				{
					
					if ((kol == ch1) || (kol == ch2))
					{
						cout << "^";
					}
					else
					{
						cout << " ";
					}
					cout << endl;
					kol++;
					ch1++;
					ch2--;
				}
				kol = 1;
			}

		
		}
		goto start;
	}
		break;
	default:
	{
		cout << "Такого задания нет \n";
		goto start;
	}
	break;
	}
}



