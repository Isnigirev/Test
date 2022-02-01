#include <iostream>

//1.
int Rec1(int a)
{
	if (a == 0)
	{
		return 0;
	}
		
	Rec1(a / 2);

	std::cout << (a % 2);
}
//1.

//2.1
int Rec21(int iOsn, int iStep)
{
	if (iStep == 1)
	{
		return iOsn;
	}

	iStep--;

	iOsn *= Rec21(iOsn, iStep);
}
//2.1

//2.2
int Rec22(int iOsn, int iStep)
{
	if (iStep % 2 == 0)
	{
		iOsn *= iOsn;

		iStep /= 2;

		return Rec21(iOsn, iStep);
	}
	else
	{
		int Sum;

		iStep -= 1;

		Sum = Rec21(iOsn, iStep);

		return Sum *= iOsn;	
	}
}
//2.2

int main()
{
	setlocale(LC_ALL, "ru");

	int iNum = 0;

	std::cout << "Введите число для получения результата в 2-ой системе счисления" << std::endl;

	std::cin >> iNum;

	//1.

	if (iNum == 0 || iNum == 1)
	{
		std::cout << "число: " << iNum << " возведенное в 2-ой системе счисления " << iNum << std::endl;
	}
	else
	{
		std::cout << "число: " << iNum << " возведенное в 2-ой системе счисления --> ";

		Rec1(iNum);
	}

	//1.

	//2.
	
	std::cout << std::endl << "Введите число" << std::endl;

	int iStep, iNumFStep;

	std::cin >> iNumFStep;

	std::cout << "Введите в какую степень вы хотите возвести число: " << std::endl;

	std::cin >> iStep;

	std::cout << Rec21(iNumFStep, iStep) << std::endl;
	
//////////////////////////////////////////////////////////////////
	
	std::cout << "Возведено тоже самое число только через свойства степени: ";

	std::cout << Rec22(iNumFStep, iStep) << std::endl;

	//2.

	return 0;

}
