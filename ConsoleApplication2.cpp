// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include "iomanip"
#include "ctime"
#include "string"
#include "Windows.h"
#include "mylib.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	setlocale(0, "Rus");

	int flag = 0;																								//���������� ���� �� ������������� �������
	int flag_2 = 0;																								//���������� ���� �� ���������� �������
	int flag_3 = 0;																								//���������� ��������� ��������� �������

	light_green;
	cout << setw(128) << "����� ����������" << endl << endl;													

	brown;
	menu();	

	int choice;
	white;
	cin >> choice;

		do
		{
			switch (choice)
			{
			case 1:																								//���������� �������
				system("cls");
				int A[5][6];
				matrix(A);
				if (flag_3 == 1)																				//����� ����������� ��������� ��� ��������� ������� ��������
				{
					brown;
					menu();
					yellow;
					cout << "����� ";
					green;
					cout << "������� ������� ������������." << endl;
					l_blue;
					cout << "��� ��������� ������� ����� 4." << endl << endl;
					flag = 1;
					flag_3 = 1;
					flag_2 = 0;
					white;
					cin >> choice;
					break;
				}
				brown;
				menu();
				green;
				cout << "������� ������� ������������." << endl;
				l_blue;
				cout << "��� ��������� ������� ����� 4." << endl << endl;
				flag = 1;
				flag_3 = 1;
				white;
				cin >> choice;
				break;

			case 2:																								//�������� ������������� ��������� �������
				system("cls");
				if (flag != 1)																					//���������� ������� ����������� �������
				{
					brown;
					menu();
					red;
					cout << "��� �������������� ������� ��� ���������." << endl;
					l_blue;
					cout << "��� ����, ����� ������������ ������� ������� ����� 1." << endl << endl;
					white;
					cin >> choice;
					break;
				}
				minus_x(A);
				brown;
				menu();
				green;
				cout << "������� ������� ����������." << endl;
				l_blue;
				cout << "��� ��������� ������� ����� 4." << endl << endl;
				flag_2 = 1;
				white;
				cin >> choice;
				break;

			case 3:																								//����� ������������� ��������� �������
				system("cls");
				if (flag != 1)																					//���������� ������� ����������� �������
				{
					brown;
					menu();
					red;
					cout << "��� �������������� ������� ��� ���������." << endl;
					l_blue;
					cout << "��� ����, ����� ������������ ������� ������� ����� 1." << endl << endl;
					white;
					cin >> choice;
					break;
				}
				brown;
				menu();
				yellow;
				cout << "����� ������������� ��������� ������� = ";
				green;
				cout << sum(A) << endl << endl;
				white;
				cin >> choice;
				break;

			case 4:																								//����� ����������� �������
				system("cls");
				if (flag != 1)																					//���������� ������� ����������� �������
				{
					brown;
					menu();
					red;
					cout << "��� �������������� ������� ��� ������." << endl;
					l_blue;
					cout << "��� ����, ����� ������������ ������� ������� ����� 1." << endl << endl;
					white;
					cin >> choice;
				}
				else if (flag_2 == 1)																			//����� ������������ �������
				{
					brown;
					menu();
					light_blue;
					cout << "������������ �������: " << endl << endl;
					out(A);
					white;
					cin >> choice;
				}
				else if (flag == 1)																				//����� �������������� �������
				{
					brown;
					menu();
					blue;
					cout << "�������� �������: " << endl;
					out(A);
					white;
					cin >> choice;
				}
				break;

			case 5:																								//�������� � ������������
				system("cls");
				brown;
				menu();
				dark_gray;
				me();
				white;
				cin >> choice;
				break;
			case 6:																								//�����
				break;

			default:																							//����������� �������� ����� 
				system("cls");
				brown;
				menu();
				red;
				cout << "����������� ������� �����." << endl << "���������� ��� ���." << endl << endl;
				white;
				cin >> choice;
				break;
			}
		} while (choice != 6);

	system("cls");
	white;

	return 0;
}
