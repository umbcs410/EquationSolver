#include <iostream>
#include <vector>
#include <complex>
#include <cmath>

using namespace std;

vector < vector <double> > solveQuadratic ( double power, double answer ) {
	vector< vector <double> > sol(2, vector<double>(2));
	// x^a = b;
	// x^3 = 8
	// x = 2
	// 8^1/3
	int power_int = static_cast<int>(power);
	if(power_int%2 == 1) {
		sol[0][0] = pow(answer,1/power);
	} else {
		sol[0][0] = pow(answer,1/power);
		sol[1][0] = -1 * sol[0][0];
	}
	return sol;
}

vector < vector <double> > solveQuadratic ( double a, double b, double c ) {
	vector< vector <double> > sol(2, vector<double>(2));
	// calc discriminant
	double discriminant = b * b - 4 * a * c;
	// in imaginary numbers discriminant is less than 0
	discriminant = abs(discriminant);
	sol[0][0] = sol[1][0] = (-1 * b) / (2 * a);
	sol[0][1] = (sqrt(discriminant)) / (2 * a);
	sol[1][1] = -1 * sol[0][1];
	return sol;
}

int main(void) {
	double a,b,c;
	cout << "Enter variable 1: ";
	cin >> a;
	cout << "Enter variable 2: ";
	cin >> b;
	cout << "Enter variable 3 (Ctrl-D to only submit two variables): ";
	cin >> c;
	cout << "Answer:" << endl;
	if ( c ) {
		vector < vector <double> > solution = solveQuadratic (a, b, c);
		cout << solution[0][0] << " " << solution[0][1] << endl;
		cout << solution[1][0] << " " << solution[1][1] << endl;
	} else {
		vector < vector <double> > solution = solveQuadratic (a, b);
		cout << solution[0][0] << " " << solution[0][1] << endl;
		cout << solution[1][0] << " " << solution[1][1] << endl;
	}
	return 0;
}
