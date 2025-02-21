#include <iostream>
#include <string>

using namespace std;

enum enOpType {Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };


/*void menuType() {


	cout << "--------------------------------------------------\n";
	cout << "\t\tMenu Type\t\t\n";
	cout << "--------------------------------------------------\n\n";
	
	cout << "1) Add the two numbers\n";
	cout << "2) Subtract the two numbers\n";
	cout << "3) Multiply the two numbers\n";
	cout << "4) Divid the two numbers\n";

    cout << "--------------------------------------------------\n";
}*/

float ReadNumbers(string Message) {

	float Number = 0;

	cout << Message ;
	cin >> Number;

	return Number;
}

enOpType ReadOpType() {

	char OT = '+';

	cout << "Please enter Operation Type ( + , - , * , / )?\n";
	cin >> OT;

	return (enOpType)OT;

}


float calculate(float num1 , float num2 , enOpType Optype) {



	switch (Optype) {

	case enOpType::Add:
		return num1 + num2;
		
	case enOpType::Subtract:
		return num1 - num2;
	
	case enOpType::Multiply:
		return num1 * num2;

	case enOpType::Divide:
		return num1 / num2;
		
	default :

		cout << "Wrong Operation ..!";

	}

}


int main() {

	float Number1 = ReadNumbers("enter plz the first number :");
	float Number2 = ReadNumbers("enter plz the second number :");

	enOpType OpType = ReadOpType();

	cout << endl << "Results = " << calculate(Number1, Number2, OpType) << endl;
	
	return 0;
}