#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(int& SIDE, int& Diagonal) {

	cout << "ENTER PLEASE THE SIDE OF RECTANGAL :";
	cin >> SIDE;

	cout << "ENTER PLEASE THE DIAGONAL OF RECTANGAL :";
	cin >> Diagonal;

}

float CalculateAreaRectangleBySideAndDiagonal(int A, int D) {

	float Area = A * sqrt(pow(D, 2) - pow(A, 2));

	return Area;

}

void PrintResults(float area) {

	cout << "\nTHE RESULTS IS : " << area << endl;
}

int main() {

	int Side, Diagonal;

	ReadNumber(Side, Diagonal);

	PrintResults(CalculateAreaRectangleBySideAndDiagonal(Side, Diagonal));

	return 0;

}