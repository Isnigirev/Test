#include <iostream>
#include <ctime>
using namespace std;

int *flag1, *flag2;

struct st
{	
	char X = 'X', O = 'O', NOPE = '_';
	char cArr[3][3]{};
	string stName = "PL", stName2 = "PC";
};

int random (int i1, int i2)
{
	st aaa;
	srand(time(nullptr));
	if (aaa.cArr[i1][i2] == 0 )
	{
	cout << "weee: " << endl;
	
	int i1 = rand() % 3, i2 = rand() % 3;

	flag1 = &i1; flag2 = &i2;
	}
	else
	{
	
		int i1 = rand() % 3, i2 = rand() % 3;




	}
return 0;
}

int main()
{
	
    setlocale(LC_ALL,"ru");
	st aaa;
	cout << "Выберите символ для игры: " << endl
		 << "X или O" << endl;
	char a, *cPL, *cPC;
	cin >> a;
	
	if (a == 'x'|| a == 'X')
	{
		cPL = &aaa.X;
		cPC = &aaa.O;
	}
	else
	{
		cPL = &aaa.O;
		cPC = &aaa.X;
	}
	cout << "Вы выбрали: " << *cPL << endl;
	cout << "ПК выбрал: " << *cPC << endl;
	
	srand(time(nullptr));
	
	int i1 = rand() % 3, i2 = rand() % 3;

	random (i1, i2);

	cout << *flag1 << *flag2 << endl;
}

