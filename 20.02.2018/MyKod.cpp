#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Prototip.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	while (true)
	{
		unsigned short int nz;
		cout << "Enter the task number or 666 to exit : ";
		cin >> nz;

		if (nz == 1)
		{
			/*Napishite korotkuyu programmu na C, kotoraya ob"yavlyayet i initsializiruyet(lyubomu interesuyushchemu vas znacheniyu) double, int i char.
			Zatem ob"yavite i initsializiruyte ukazatel' na kazhdyy iz tri peremennyye.
			Zatem vasha programma dolzhna raspechatat' adres i znacheniye sokhranennyy v pamyati i razmer pamyati(v baytakh) kazhdoy iz shesti peremennykh.*/
			system("cls");
			int One = 11; double Two = 2.457; char Three = '�';
			int* ptrOne = &One; double* ptrTwo = &Two; char* ptrThree = &Three;

			perev(One, *ptrOne);
			perev(Two, *ptrTwo);
			perev(Three, *ptrThree);
		}

		else if (nz == 2)
		{
			/*����������� ������������ �������������� �0x% x� ��� ������ ������� � ����������������� �������.�� ������ ������ ������, ������� �������� �������� ��� : �0xbfe55918�.
			��������� ������� �0x� ������� ���, ��� ������������ ����������������� �������; ������� ���� ������ �����.*/
			system("cls");
			int mas[9], count = 0;
			int *ptrMas = mas;
			cout << endl;
			for (int i = 0; i < 9; i++)
			{
				mas[i] = 10 + rand() % 90;
				count++;
				printf("%d.mas[%d] = %d   (0x%p)\n", count, i, mas[i], ptrMas);
				ptrMas++;
			}
			cout << endl;
		}

		else if (nz == 3)
		{
			/*����������� �������� sizeof ��� ����������� ������� ������, ���������� ��� ������� ����������*/
			system("cls");
			int Int;
			float Float;
			double Double;
			char Char;

			printf("\nint zanimaet - %i baita v pamyati\n", sizeof(Int));
			printf("float zanimaet - %i baita v pamyati\n", sizeof(Float));
			printf("double zanimaet - %i bait v pamyati\n", sizeof(Double));
			printf("char zanimaet - %i bait v pamyati\n\n", sizeof(Char));
		}

		else if (nz == 4)
		{
			/*�������� ��������� � C, ����� ������������� ���������� ����� � �����������������.*/
			system("cls");
			cout << endl;
			char mas[10]; int chislo;
			for (int i = 0; i < 10; i++)
			{
				chislo = 111111 + rand() % 99999999;
				PreobrVShestnad(mas, chislo);
				printf("Desyatichnoe - %d - %s Shestnadcaterichnoe\n", chislo, mas);
			}
			cout << endl;
		}

		else if (nz == 5)
		{
			/*�������� ��������� c ��� ������ ������� � ������� HH24: MM: SS � �������������� ��������� single scanf (), ���������, 
			��� ������� �������� ������ ���� ����������, ���� ������� �������� �������, ���������� �� ����������; ����������� ����� � HH24: MM: SS, ���� �������� �����.*/
			system("cls");
			//����� �� ��������� ����� ���������?
		}
		else if (nz == 6)
		{
			/*�������� ��������� c ��� ����� � ������ ��������, ������� ������ ���� ������ 18 � ����� 30 ���,
			���������� ��������� ���������� �������� � ������ ������� ���������� �� ��� ���, ���� �������� �������� �� ����� ��������������.*/
			system("cls");
			Recvozr();
		}
		else if (nz == 7)
		{
			/*�������� ��������� c ��� ����� n �����, ����������� �� ����� � ���������� �����, �� �������� �� � �������.*/
			system("cls");
			int n;
			printf("\nVvedite n: ");
			scanf("%d",&n);
			MaxAndSum(n);		
		}

		else if (nz == 666)
		{
			break;
			system("exit");
		}
		else
		{
			system("cls");
			cout << "	Sorry\nThere is no such task ! \n";
		}
	}
}