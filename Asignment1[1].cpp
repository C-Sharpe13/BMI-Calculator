#include <iostream> 

using namespace std; 
//Calculators fo all of my conversions
namespace feetToInch {
	double heightToInches(double feet, double inches) {
		double heightInches = (feet * 12) + inches;
			return heightInches;
	}
}

namespace inchToMeter {
	double heightToMeter(double heightInches) {
		double heightMeter = heightInches * 0.0254;
			return heightMeter;
	}
}

namespace poundToKilograms {
	double poundKG(double pounds) {
		double weightKG = pounds * 0.4536;
		return weightKG;
	}
}

namespace calculateBMI {
	double bodyMassIndex(double heightMeter, double weightKG) {
		double bmi = weightKG / (pow(heightMeter, 2));
		return bmi;
	}
}


int main() {

	double feet, inches, pounds, heightInches, heightMeter, weightKG, bmi;
	cout << "Please enter your heaght in feet then inches: \n";
	cout << "Feet: "; cin >> feet;
	cout << "Inches: "; cin >> inches;
	cout << "Please enter your weight in pounds: "; cin >> pounds;

	//Converting the users height from feet and inches to just inches, then to meters and displaying height in meters
	heightInches = feetToInch::heightToInches(feet, inches);
	heightMeter = inchToMeter::heightToMeter(heightInches);
	cout << "Your height in M: "; cout << heightMeter << endl;
	//Converting weight in pounds to weight in KG and displaying weight in KG
	weightKG = poundToKilograms::poundKG(pounds);
	cout << "Your weight in KG: "; cout << weightKG << endl;
	//Calculating and displaying BMI
	bmi = calculateBMI::bodyMassIndex(heightMeter, weightKG);
	cout << "Your BMI: "; cout << bmi;
}