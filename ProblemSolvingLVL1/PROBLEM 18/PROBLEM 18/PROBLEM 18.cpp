#include<iostream>
#include<string>

using namespace std;

const float PI = 3.141592653589793238462643383279502884197;

float ReadRadious() {

	float R;

	cout << "ENTER PLEASE RADIOUS OF CIRCLE :";
	cin >> R;

	return R;
}

float CalculatArea(float R) {

	float area = ::PI * pow(R, 2);

	return area;
}

void PrintResults(float Area) {

	cout << "\nTHE AREA OF CIRCLE IS : " << Area << endl;
}

int main() {

	PrintResults(CalculatArea(ReadRadious()));

	return 0;
}