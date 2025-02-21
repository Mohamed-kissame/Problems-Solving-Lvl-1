#include <iostream>
using namespace std;


struct stINFO {

	int age;
	bool HASdriverLICENSE;
	bool HasRECOMMENDATION;

};

 stINFO READtheINFO() {

	 stINFO info;

	cout << "ENTER YOUR AGE : ";

	cin >> info.age;

	cout << "DO YOU HAVE A DRIVER LICENSE ? ";

	cin >> info.HASdriverLICENSE;

	cout << "DO YOU HAVE A RECOMMONDATION ? : ";

	cin >> info.HasRECOMMENDATION;
}

bool IsAccepted(stINFO Info) {	

	if (Info.HasRECOMMENDATION)
	{
		return true;
	}
	else
	{
		return (Info.age > 21 && Info.HASdriverLICENSE);
	}
}

void PrintRESULTS(stINFO Info) {

	if (IsAccepted(Info))
		cout << "\n Hired" << endl ;
	else
		cout << "\n Rejected" << endl;
}

int main() {

	PrintRESULTS(READtheINFO());
	

	return 0;

}