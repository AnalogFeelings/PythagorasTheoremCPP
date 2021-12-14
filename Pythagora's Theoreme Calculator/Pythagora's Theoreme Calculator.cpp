#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//Sets the console text color
void SetColor(int c)
{
	HANDLE hConsole;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}

int main()
{
	main_loop:
	double cateto1;
	double cateto2;
	double hipotenusa;
	bool isFinished = false;

	SetColor(12);
	cout << "PYTHAGORAS THEOREM CALCULATOR" << endl;
	SetColor(6);
	cout << "Nora 2020" << endl;
	cout << endl;
	SetColor(11);

	cout << "Side A -> ";
	cin >> cateto1;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		SetColor(12);
		cout << "Give a valid Side A!" << endl;
		SetColor(11);
		cout << "Side A -> ";
		cin >> cateto1;
	}
	cout << "Side B -> ";
	cin >> cateto2;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		SetColor(12);
		cout << "Give a valid Side B!" << endl;
		SetColor(11);
		cout << "Side B -> ";
		cin >> cateto2;
	}
	cout << endl;

	float resultado = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
	SetColor(3);
	cout << "FORMULA: HYPOTENUSE^2 = SIDE1^2 + SIDE2^2" << endl;
	cout << endl;
	cout << "HYPOTENUSE^2 = " << cateto1 << "^2 + " << cateto2 << "^2" << endl;
	cout << "HYPOTENUSE^2 = " << cateto1 * cateto1 + cateto2 * cateto2 << endl;
	cout << "HYPOTENUSE = sqrt(" << cateto1 * cateto1 + cateto2 * cateto2 << ")" << endl;
	cout << endl;
	SetColor(10);
	cout << "HYPOTENUSE = ";
	cout << resultado << endl;
	cout << endl;
	isFinished = true;

	while (isFinished = true)
	{
		char choice;
		cout << "Would you like to perform another calculation?(Y/N)" << endl;
		cin >> choice;
		if (choice == 'N' || choice == 'n')
		{
			exit(0);
		}
		else if (choice == 'Y' || choice == 'y')
		{
			system("CLS");
			goto main_loop;
		}
	}
}
