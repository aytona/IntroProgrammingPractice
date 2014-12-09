#include <iostream>
using namespace std;

void positionUnderGravityByRef(double v, double t, double& y);
int main(){
	// get the v from input
	// fix t to 1
	// call the function and get the output y
	// print y

	double v, y;
	cin >> v;
	positionUnderGravityByRef(v,1,y);
	cout << y;
	return 0;
}