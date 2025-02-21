#include <iostream>
#include <string>
using namespace std; 

string READtheNAME() {

	string name;

	cout << "ENTER YOUR FULL NAME : ";
	getline(cin, name);
	return name;
}

void PRINTtheNAME(string name) {

	cout << "\nYOUR NAME IS : " << name << endl;
}

int main() {


	PRINTtheNAME(READtheNAME());

	return 0;
}