
#define black SetConsoleTextAttribute(h, 0)										//определение цветов для вывода в консоли 
#define blue SetConsoleTextAttribute(h, 1)
#define green SetConsoleTextAttribute(h, 2)
#define light_blue SetConsoleTextAttribute(h, 3)
#define red SetConsoleTextAttribute(h, 4)
#define purple SetConsoleTextAttribute(h, 5)
#define brown SetConsoleTextAttribute(h, 6)
#define light_gray SetConsoleTextAttribute(h, 7)
#define dark_gray SetConsoleTextAttribute(h, 8)
#define l_blue SetConsoleTextAttribute(h, 9)
#define light_green SetConsoleTextAttribute(h, 10)
#define dlight_blue SetConsoleTextAttribute(h, 11)
#define light_red SetConsoleTextAttribute(h, 12)
#define light_purple SetConsoleTextAttribute(h, 13)
#define yellow SetConsoleTextAttribute(h, 14)
#define white SetConsoleTextAttribute(h, 15)
#define fon SetConsoleTextAttribute(h, (((15 << 4) | 0)))

using namespace std;

void matrix(int A[5][6])									//функция, формирующая целочисленную матрицу 5х6 датчиком случайных чисел
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			A[i][j] = rand() % 201 - 100;					//определение пределов значений для заполнения матрицы от -100 до 100
		}
	}
}

void minus_x(int A[5][6])									//функция, утраивающая отрицательные элементы матрицы 5х6
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (A[i][j] < 0)
			{
				A[i][j] = A[i][j] * 3;
			}										
		}
	}
}

int sum(int A[5][6])										//функция для нахождения суммы положительных элементов матрицы 5х6
{
	int summa = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (A[i][j] > 0)
			{
				summa += A[i][j];
			}
		}
	}
	return summa;
}

void out(int A[5][6])													//функция для вывода матрицы 5х6
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			fon;
			printf("%5d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void menu()																		//меню программы
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	red;
	cout << setw(155) << "Введите число для выбора соответствующего пункта меню и нажмите Enter" << endl << endl;
	yellow;
	cout << setw(145) << "1. Сформировать случайную матрицу размером 5х6." << endl;
	brown;
	cout << setw(150) << "2. Утроить значение отрицательных элементов матрицы." << endl;
	light_green;
	cout << setw(164) << "3. Найти сумму положительных элементов матрицы и вывести на экран." << endl;
	light_blue;
	cout << setw(126) << "4. Вывести матрицу на экран." << endl;
	blue;
	cout << setw(134) << "5. Показать сведения о разработчике." << endl;
	purple;
	cout << setw(122) << "6. Завершение программы." << endl << endl;
}

void me()																		//сведения о разработчике
{
	cout << "Работу выполнил:" << endl << "студент 1-го курса факультета МРМ" << endl << "Терещенко В.А." 
		<< endl << "Группа РС-02" << endl << endl;
}

/*int in()
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	char temp;
	int choice;
	while (true)
	{
		cin >> temp;
		if (strcmp(&temp, "1") == 0 || strcmp(&temp, "2") == 0 || strcmp(&temp, "3") == 0 || strcmp(&temp, "4") == 0 || strcmp(&temp, "5") == 0 || strcmp(&temp, "6") == 0)
		{
			choice = atoi(&temp);
			return true;
		}
		else
		{
			system("cls");
			brown;
			menu();
			red;
			cout << "Неправильно введена цифра." << endl << "Попробуйте ещё раз." << endl << endl;
			white;
			return false;
		}
	}
	return choice;
}*/