#include <iostream>
#include <string>

using namespace std;

int ReadNum() {

	int num;

	cout << "ENTER PLEASE THE NUMBER : ";
	cin >> num;

	return num;
}

void PrintRangeFrom1toN_UsingFor(int N) {

	cout << "RENGE PRINTED USING FOR :\n";

	for (int i = 1; i <= N; i++) {

		cout << i << endl;
	}
	
}

void PrintRangeFrom1toN_Usingwhile(int N) {

	int i = 0;

	cout << "RENGE PRINTED USING WHILE :\n";

	while (i < N) {

		i++;

		cout << i << endl;

		
	}

}

void  PrintRangeFrom1toN_UsingDowhile(int N) {

	int i = 0;

	cout << "RENGE PRINTED USING DO WHILE :\n";

	do {

		i++;

		cout << i << endl;


	} while (i < N);

	


}

int main() {

	int N = ReadNum();


	PrintRangeFrom1toN_UsingFor(N);
	PrintRangeFrom1toN_Usingwhile(N);
	PrintRangeFrom1toN_UsingDowhile(N);

	return 0;
}