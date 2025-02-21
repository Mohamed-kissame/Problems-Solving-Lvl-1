#include <iostream>
#include <string>

using namespace std;

float ReadSquareSide() {

	float A;

	cout << "PLEASE ENTER SQUARE SIDE A :";
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquare(float A) {

	const float PI = 3.141592653589793238462643383279502884197;

	float Area = (pow(A, 2) * PI) / 4;

	return Area;
}

void PrintResults(float Area) {

	cout << "\nTHE RESULTS IS :" << Area << endl;
}

int main() {

	PrintResults(CircleAreaInscribedInSquare(ReadSquareSide()));

	return 0;
}