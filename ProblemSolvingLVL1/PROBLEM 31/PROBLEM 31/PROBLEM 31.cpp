#include <iostream>
#include<string>

using namespace std;

int ReadNumber() {

	int Number;

	cout << "ENTER PLEASE YOUR NUMBER : ";
	cin >> Number;

	return Number;
}

void PowerOf2_3_4(int Num) {

	int a, b, c;

	a = pow(Num, 2);
	b = pow(Num, 3);
	c = pow(Num, 4);

	cout << "\nThe power of " << Num << " ^ 2 is : " << a << endl

	  	 << "The power of " << Num << " ^ 3 is : " << b << endl

		 << "The power of " << Num << " ^ 4 is : " << c << endl;
}

int main() {

	PowerOf2_3_4(ReadNumber());

	return 0;
}