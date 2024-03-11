#include <iostream>
 #include <iomanip>
 #include <vector>
 using namespace std;
//
//// void wages( int [] ); // function prototype
//// void display( const int [] ); // function prototype
//
//void wages(  ){
//vector <int>	money;
//double sales; 
//double i = 0.09; 
//cout << "Enter employee gross sales (-1 to end): ";
//cin >> sales;
//
//while ( sales != -1 ){
//double salary = 200.0 + sales * i;
//cout << setprecision( 2 ) << "Employee Commission is $"<< salary << '\n';
//
// int x = static_cast< int > ( salary ) / 100;
// money[ ( x < 10 ? x : 10 ) ]++;
//
// cout << "\nEnter employee gross sales (-1 to end): ";
// cin >> sales;
// } 
// } 
//
//void display(  ){
//	vector <int> dollars;
//cout << "Employees in the range:";
// for ( int i = 2; i < 10; i++ )
// cout << "\n$" << i << "00-$" << i << "99 : " << dollars[ i ];
// cout << "\nOver $1000: " << dollars[ 10 ] << endl;
//}
//
//int main()
// {
// vector<int> salaries; 
//
// cout << fixed << showpoint;
// wages( ); 
// display(); 
//}'

class A {
public:
A() {cout <<"A" << endl;}
A(A&a) {cout << "A copy "<< endl;}
virtual ~A() {cout << "A dto"<< endl;}
virtual void f() {cout <<"A f" << endl;}
};
class B : public A {
public:
B() {cout << "B ctor"<< endl;}
~B() {cout <<"B dtor"<< endl;}
void f() {cout <<"B f"<< endl;}
};
class C : public B {
public:
C() {cout <<"C ctor"<< endl;}
~C() {cout <<"C dtor"<< endl;}
void f() {cout <<"C f"<< endl;}
};
int main() {
cout <<"*** starting main" << endl;
A * a_ptr_to_a = new A;
B * b_ptr_to_b = new B;
C * c_ptr_to_c = new C;
A * a_ptr_to_b = b_ptr_to_b;
A * a_ptr_to_c = c_ptr_to_c;
B * b_ptr_to_c = c_ptr_to_c;
a_ptr_to_b -> f();
a_ptr_to_c -> f();
b_ptr_to_c -> f();
cout <<"*** back in main"<< endl;
cout <<"*** delete a_ptr_to_a"<< endl;
delete a_ptr_to_a;
cout <<"*** delete b_ptr_to_b"<< endl;
delete b_ptr_to_b;
cout <<"*** delete b_ptr_to_c:"<< endl;
delete b_ptr_to_c;
cout <<"*** leaving main"<< endl;
return 0;
}
