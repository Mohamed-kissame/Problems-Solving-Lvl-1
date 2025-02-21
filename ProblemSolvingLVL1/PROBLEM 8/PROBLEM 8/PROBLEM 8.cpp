#include <iostream>

using namespace std;

enum enPassFail {PASS , FAIL};

float ReadMark() {

	float Mark;

	cout << "PLEASE ENTER YOUR MARK : ";
	cin >> Mark;

	return Mark;

}

enPassFail checkMARk(float Mark) 
{


	if (Mark >= 50)
		return enPassFail::PASS;
	else
		return enPassFail::FAIL;

}

void PRINtresults(float Mark) {


	if (checkMARk(Mark) == enPassFail::PASS)
		cout << "\n YOU PASSED \n";

	else
		cout << "\n YOU FailD \n";
}

int main() {

	PRINtresults(ReadMark());

	return 0;
}
