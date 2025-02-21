#include <iostream>
#include<string>

using namespace std;

float ReadCircumfernce() {

	float L;

	cout << "ENTER PLEASE CIRCUMFRENCE : ";
	cin >> L;

	return L;
}

float CircleAreaAlongCircumference(float L) {

	const float PI = 3.141592653589793238462643383279502884197;

	float Area = pow(L, 2) / (4 * PI);

	return Area;
}

void PrintResults(float Area) {

	cout << "\nTHE RESULTS IS : " << Area << endl;
}

int main() {

	PrintResults(CircleAreaAlongCircumference(ReadCircumfernce()));

	return 0;
}