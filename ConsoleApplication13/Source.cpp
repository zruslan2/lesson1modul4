#include <stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	unsigned short int nz;
	int ch1, ch2, k;
start:
	cout << "������� ����� ������� \n";
	cin >> nz;
	switch (nz)
	{
	case 15:
	{
		/*15.	���������� �������������� ����������� �� �������� ^.������ �������� ������������.
			��������: ������ = 5, �� ������*/
		int vys, shyr=1, t1,t2,fill;
		cout << "������ = ";
		cin >> vys;
		cout << "��������: 1 - c ��������; 2 - ������ ������ \n";
		cin >> fill;
		if (fill == 1)
		{
			int i;
			for (i = 1; i < vys; i++)
			{
				shyr += 2;
			}
			t1 = shyr / 2 + 1;
			t2 = t1;
			for (i = 1; i <= vys; i++)
			{
				if (i == 1)
				{
					int a;
					for (a = 1; a <= shyr; a++)
					{
						if (a == t1)
						{
							cout << "^";
						}
						else
						{
							cout << " ";
						}
					}
					cout << endl;
				}
				else if (i == vys)
				{
					int a;
					for (a = 1; a <= shyr; a++)
					{
						cout << "^";
					}
					cout << endl;
				}
				else
				{
					int a;
					t2++;
					t1--;
					for (a = 1; a <= shyr; a++)
					{
						// � ��������
						if (a >= t1 && a <= t2)
						{
							cout << "^";
						}
						else
						{
							cout << " ";
						}
					
					}
					cout << endl;
				}
			}

		}
		else
		{
			int i;
			for (i = 1; i < vys; i++)
			{
				shyr += 2;
			}
			t1 = shyr / 2 + 1;
			t2 = t1;
			for (i = 1; i <= vys; i++)
			{
				if (i == 1)
				{
					int a;
					for (a = 1; a <= shyr; a++)
					{
						if (a == t1)
						{
							cout << "^";
						}
						else
						{
							cout << " ";
						}
					}
					cout << endl;
				}
				else if (i == vys)
				{
					int a;
					for (a = 1; a <= shyr; a++)
					{
						cout << "^";
					}
					cout << endl;
				}
				else
				{
					int a;
					t2++;
					t1--;
					for (a = 1; a <= shyr; a++)
					{
					
						// ������ ������
						if (a == t1 || a == t2)
						{
						cout << "^";
						}
						else
						{
						cout << " ";
						}
					}
					cout << endl;
				}
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



