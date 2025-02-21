#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& B) {

	cout << "PLEASE ENTRE RECTANGLE WIDTH A ? :";
	cin >> A;

	cout << "PLEASE ENTER RECTANGLE LENGTH B ? :";
	cin >> B;

}

float CalculateRectangleArea(float A, float B) {

	return A * B;
}

void PrintResults(float area) {

	cout << "\nTHE AREA OF RECTANGLE IS : " << area << endl;
}

int main() {

	float A, B;

	ReadNumbers(A, B);

	PrintResults(CalculateRectangleArea(A, B));

	return 0;
}