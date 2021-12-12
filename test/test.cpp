#include <iostream>

using namespace std;
//Шаблоны
template <class T1, class T2>
T1 AW(T1 one, T2 two)
{
	return one + two;
}


int main()
{
    setlocale(LC_ALL,"ru");
	
	cout << AW(2.4,3) <<endl;
	
	return 0;
}

