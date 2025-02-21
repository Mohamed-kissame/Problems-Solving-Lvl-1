#include <iostream>
using namespace std;

struct stINFO {

	int age;
	bool HasDRIVINGlicense;
};

stINFO ReadAgeHasDRIVER() {

	stINFO INFO;

	cout << "ENTER YOUR AGE : ";
	cin >> INFO.age;

	cout << "DO YOY HAVE DRIVER LICENSE :";
	cin >> INFO.HasDRIVINGlicense;

	return INFO;
}

bool IsAcceptedT(stINFO Info) {

	return (Info.age > 21 && Info.HasDRIVINGlicense);

}

void PrintRESULTs(stINFO INFO) {

	if (IsAcceptedT(INFO))
		cout << "\n Hired " << endl;
	else
		cout << "\n Rejected " << endl;
}

int main() {

	PrintRESULTs(ReadAgeHasDRIVER());

	return 0;
}