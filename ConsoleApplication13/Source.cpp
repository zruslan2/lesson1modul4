#include <stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	unsigned short int nz;
	int ch1, ch2, k;
	cout << "������� ����� ������� \n";
	cin >> nz;
start:
	switch (nz)
	{
	case 15:
	{
		/*15.	���������� �������������� ����������� �� �������� ^.������ �������� ������������.
			��������: ������ = 5, �� ������*/
		int vys, kol = 1;
		cout << "������ = ";
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
		cout << "������ ������� ��� \n";
		goto start;
	}
	break;
	}
}



