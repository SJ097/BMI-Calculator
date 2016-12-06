/* BMI Calculator in C++. Created by Sathya Jayakumar.
   This program was created as practice in C++.*/

using namespace std;
#include <iostream>

int main() {

	// User can calculate their BMI using either the metrical or imperial system
	int system;
	
	// C++ advantage: Do not have to declare type of data (int, char...) output/input
	cout << "Do you use the 1. Metrical system or the 2. Imperial system?" << endl;
	cin >> system;

	// Invalid number loop
	while (system != 1 && system != 2) {
		cout << "Please enter a valid number: " << endl;
		cin >> system;
	}

	// C++ advantage: Can declare variables anywhere in program
	int mult;

	// Multiplier to BMI equation depending on chosen unit system
	if (system == 1)
		mult = 1;

	else mult = 703;

	// Height + Weight prompt
	double weight, height;

	cout << endl << "Please enter your height (in metres or inches): ";
	cin >> height;

	cout << endl << "Please enter your weight (in kilograms or pounds): ";
	cin >> weight;

	double bmi;

	// BMI Calculation
	bmi = weight / pow(height, 2) * mult;

	// Equivalent to system("PAUSE") from C
	cin.get();

	if (bmi < 18.5)
		cout << endl << "Your BMI is "<< bmi <<". You are underweight!" << endl;

	else if (18.5 <= bmi && bmi < 25)
		cout << endl << "Your BMI is "<< bmi <<". You are at a healthy weight!" << endl;

	else if (25 <= bmi && bmi < 30)
		cout << endl <<"Your BMI is "<< bmi <<". You are overweight!" << endl;

	else cout << endl << "Your BMI is "<< bmi <<". You are obese!" << endl;

	cin.get();

	// Concluding statement
	cout << "Life moves fast. Good health improves everyone's lives. Strive to maintain a healthy lifestyle!" << endl;

	cin.get();

	return 0;
}