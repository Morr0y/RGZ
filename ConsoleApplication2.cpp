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

	int flag = 0;																								//определяет была ли сгенерирована матрица
	int flag_2 = 0;																								//определяет была ли обработана матрица
	int flag_3 = 0;																								//определяет повторную генерацию матрицы

	light_green;
	cout << setw(128) << "Добро пожаловать" << endl << endl;													

	brown;
	menu();	

	int choice;
	white;
	cin >> choice;

		do
		{
			switch (choice)
			{
			case 1:																								//заполнение матрицы
				system("cls");
				int A[5][6];
				matrix(A);
				if (flag_3 == 1)																				//вывод измененного заголовка при генерации матрицы повторно
				{
					brown;
					menu();
					yellow;
					cout << "Новая ";
					green;
					cout << "матрица успешно сформирована." << endl;
					l_blue;
					cout << "Для просмотра введите цифру 4." << endl << endl;
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
				cout << "Матрица успешно сформирована." << endl;
				l_blue;
				cout << "Для просмотра введите цифру 4." << endl << endl;
				flag = 1;
				flag_3 = 1;
				white;
				cin >> choice;
				break;

			case 2:																								//утроение отрицательных элементов матрицы
				system("cls");
				if (flag != 1)																					//определяет наличие заполненной матрицы
				{
					brown;
					menu();
					red;
					cout << "Нет сформированной матрицы для обработки." << endl;
					l_blue;
					cout << "Для того, чтобы сформировать матрицу введите цифру 1." << endl << endl;
					white;
					cin >> choice;
					break;
				}
				minus_x(A);
				brown;
				menu();
				green;
				cout << "Матрица успешно обработана." << endl;
				l_blue;
				cout << "Для просмотра введите цифру 4." << endl << endl;
				flag_2 = 1;
				white;
				cin >> choice;
				break;

			case 3:																								//сумма положительных элементов матрицы
				system("cls");
				if (flag != 1)																					//определяет наличие заполненной матрицы
				{
					brown;
					menu();
					red;
					cout << "Нет сформированной матрицы для обработки." << endl;
					l_blue;
					cout << "Для того, чтобы сформировать матрицу введите цифру 1." << endl << endl;
					white;
					cin >> choice;
					break;
				}
				brown;
				menu();
				yellow;
				cout << "Сумма положительных элементов матрицы = ";
				green;
				cout << sum(A) << endl << endl;
				white;
				cin >> choice;
				break;

			case 4:																								//вывод заполненной матрицы
				system("cls");
				if (flag != 1)																					//определяет наличие заполненной матрицы
				{
					brown;
					menu();
					red;
					cout << "Нет сформированной матрицы для вывода." << endl;
					l_blue;
					cout << "Для того, чтобы сформировать матрицу введите цифру 1." << endl << endl;
					white;
					cin >> choice;
				}
				else if (flag_2 == 1)																			//вывод обработанной матрицы
				{
					brown;
					menu();
					light_blue;
					cout << "Обработанная матрица: " << endl << endl;
					out(A);
					white;
					cin >> choice;
				}
				else if (flag == 1)																				//вывод необработанной матрицы
				{
					brown;
					menu();
					blue;
					cout << "Исходная матрица: " << endl;
					out(A);
					white;
					cin >> choice;
				}
				break;

			case 5:																								//сведения о разработчике
				system("cls");
				brown;
				menu();
				dark_gray;
				me();
				white;
				cin >> choice;
				break;
			case 6:																								//выход
				break;

			default:																							//неправильно введённая цифра 
				system("cls");
				brown;
				menu();
				red;
				cout << "Неправильно введена цифра." << endl << "Попробуйте ещё раз." << endl << endl;
				white;
				cin >> choice;
				break;
			}
		} while (choice != 6);

	system("cls");
	white;

	return 0;
}
