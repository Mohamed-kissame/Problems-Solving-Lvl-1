#include <iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int Num;

	do
	{

		cout << Message << endl;
		cin >> Num;

	} while (Num < 0);

	return Num;

}

int Fctorial(int N) {

	int F = 1;

	for (int i = N; i >= 1; i--)
	{
		F = F * i;
	}

	return F;
}

int main() {

	cout << Fctorial(ReadPositiveNumber("ENTER NUMBER ?"));

	return 0;
}
