#include<iostream>
#include <string>

using namespace std;

int ReadNumber() {

	int Num;

	cout << "ENTER PLEASE THE NUMBER : ";
	cin >> Num;

	return Num;

}

int ReadPower() {

	int M;

	cout << "ENTER POWER OF M : ";
	cin >> M;

	return M;

}

int PowerOfM(int Num, int M) {

	if (M == 0) {

		return 1;

	}

	int P = 1;
    

	for (int counter = 1; counter <= M; counter++) {

		P = P * Num;
	}

	return P;
}


int main() {

	cout << endl << "Results = " << PowerOfM(ReadPower(), ReadNumber());

	return 0;
	
}