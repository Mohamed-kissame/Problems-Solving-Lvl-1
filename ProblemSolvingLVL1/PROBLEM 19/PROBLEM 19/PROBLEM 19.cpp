#include <iostream>
#include <string>

using namespace std;

float ReadDiameter() {

	float Diameter;

	cout << "ENTER PLEASE THE DIAMETER OF CIRCLE : ";
	cin >> Diameter;

	return Diameter;

}

float CalculateCircleAreaThroughDiameter(float Diameter) {

	const float PI = 3.141592653589793238462643383279502884197;

	float area = (PI * pow(Diameter, 2)) / 4;

	return area;

}

void PrintResults(float Area) {

	cout << "\n THE RESULTS IS : " << Area << endl;
}

int main() {

	PrintResults(CalculateCircleAreaThroughDiameter(ReadDiameter()));

	return 0;
}