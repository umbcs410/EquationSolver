#include <iostream>
#include <vector>
#include <complex>

using namespace std;

vector < vector <double> > solveQuadratic ( double a, double b, double c ) {
	vector< vector <double> > sol(2, vector<double>(3));
	//double discriminant = eq[1] * eq[1] - 4 * eq[0] * eq[2];
	double discriminant = b * b - 4 * a * c;
	// let's account for imaginary numbers
	if ( 0 > discriminant ) {
		discriminant *= -1;
		sol[0][0] = sol[1][0] = 0;
	} else {
		sol[0][0] = sol[1][0] = 1;
	}
	sol[0][1] = sol[1][1] = (-1 * b) / (2 * a);
	sol[0][2] = (sqrt(discriminant)) / (2 * a);
	sol[1][2] = -1 * sol[0][2];
	return sol;
}

int main(void) {
	double a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	vector < vector <double> > solution = solveQuadratic (a, b, c);
	string output = (0 == solution[0][0]) ? "Simple:" : "Complex:";
	cout << output << endl;
	cout << solution[0][1] << " " << solution[0][2] << endl;
	cout << solution[1][1] << " " << solution[1][2] << endl;
	return 0;
}
