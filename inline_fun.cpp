#include <iostream>
using namespace std;
// Definition of inline function cube. Definition of function appears
// before function is called, so a function prototype is not required.
// First line of function definition acts as the prototype.
inline double cube( const double side ){
	return side * side * side; // calculate cube
}
inline int max_num(int x, int y) {
  return (x > y)? x < y;
}
int main()
{
	double sideValue; // stores value entered by user
	cout << "Enter the side length of your cube: ";
	cin >> sideValue; // read value from user
	// calculate cube of sideValue and display result
 	cout << "Volume of cube with side "
	<< sideValue << " is " << cube( sideValue ) << endl;
	
	int count = 1; // declare integer variable count
	int &cRef = count; // create cRef as an alias for count
	cRef++; // increment count (using its alias cRef)
	cout << cRef << endl;
	
	int max = max_num(12,11);
	cout << max << endl;
} // end main
