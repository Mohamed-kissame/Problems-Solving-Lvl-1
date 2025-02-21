#include <iostream>
#include <string>

using namespace std;

void ReadTriangle(float &side, float &Base) {


	cout << "ENTER PLAESE THE SIDE OF TRIANGLE :";
	cin >> side;

	cout << "ENTER PLEASE THE BASE OF TRIANGLE :";
	cin >> Base;
}

float CircleAreaByTriangle(float a, float b) {

	const float PI = 3.141592653589793238462643383279502884197;

	float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	return Area;
}

void PrintResults(float Area) {

	cout << "\nTHE RESULTS IS :" << Area << endl;
}

int main() {

	float side, base;

	ReadTriangle(side, base);

	PrintResults(CircleAreaByTriangle(side, base));

	return 0;
}