#include <iostream>
using namespace std;



int main()
{
    setlocale(LC_ALL,"ru");

	struct Game
	{
		char cArr[3][3];
		char X = 'X', O = 'O', NOPE = '_';
		string stName = "PL", stName2 = "PC";


	};
	Game aaa;
	cout << "Выберите символ для игры: " << endl
		 << "X или O" << endl;
	char a, *cPL, *cPC;
	cin >> a;
	
	if (a == 'x')
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



}


