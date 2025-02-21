#include<iostream>
#include<string>

using namespace std;

void ReadArbiraryTriangle(float& A, float& B, float& c) {

	cout << "ENTER PLEASE A :";
	cin >> A;

	cout << "ENTER PLEASE B :";
	cin >> B;

	cout << "ENTER PLEASE C :";
	cin >> c;

}

float CircleAreaByATriangle(float A, float B, float C) {

	const float PI = 3.141592653589793238462643383279502884197;

	float p = (A + B + C) / 2;

	float T = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));

	float Area = PI * pow(T, 2);

	return Area;

	
}

void PrintResults(float Area) {

	cout << "\nTHE RESULTS IS : " << Area << endl;
}

int main() {

	float a, b, c;

	ReadArbiraryTriangle(a, b, c);

	PrintResults(CircleAreaByATriangle(a, b, c));

	return 0;
}

