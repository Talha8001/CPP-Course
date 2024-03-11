#include <iostream>
using namespace std;
/*
//macros
#define open_brace {
#define close_brace }

#define welcome "Hi, welcome to C++"
int sum_integers(int, int )open_brace
	
close_brace

int sum_floats(float, float){
	
}
*/
//template <int size>//template <typename T, int size>
template <typename T, int size>
class MyArray{
	private:
		T array[size];
	public:
		void display_size(){
			cout<< size << endl;
			//cout<< welcome << endl;
		}
};

template <class display_output> void display(display_output x){
	cout << "Your input is: " << x << endl;
}
template <typename X>
void  SimplePrint (X a)//class //typename
{
	cout << "Parameter is: " << a << endl;
}
template <class T>
void swapargs(T a, T b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout << a <<" "<< b << endl;
}

template <class T1, class T2> void myfunc(T1 a, T2 b){
	cout << a << "&" << b << endl;
}
template <class X> void fun(X a){
	cout << "Hi, all data types: " << a << endl;
}
void fun(int a){
	cout << "Hello integers: " << a << endl;
}

int main()
{
	//SimplePrint
	int i = 20; 
	char c = 'M';
	float f = 5.5;
	string s1 = "AWais";
	SimplePrint ( i );
	SimplePrint ( c );
	SimplePrint ( f );
	SimplePrint ( s1 );
	//swapargs
	
//	int i=10, j=20;           
	double x=10.1, y=23.3;
	char a='x', b='z';
	
//   swapargs(i, j); // swap integers
    swapargs(x, y); // swap floats
    swapargs(a, b); // swap chars
    
	myfunc(1,2);
    fun(x);
    fun(a);
    
    display<int>(1);
    display(a);
    MyArray<int,13> array;
    array.display_size();
}
