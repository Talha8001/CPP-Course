#include <iostream>
using namespace std;

// First version of f() template
template <class X> void f(X a)
{
	cout << "Inside f(X a)" << endl; 
} 

// Second version of f() template
template <class X, class Y> void f(X a, Y b)
{
	cout << "Inside f(X a, Y b)" << a << " " << b << endl;
}

template<class X> void func(X a, int b)
{
		cout << "General Data:" << a << endl;
		cout << "Integer Data:"  << b << endl;
		
}

int main()
{
         f(10); 	// calls f(X)      
		 f(10, 20); 	// calls f(X, Y)
		 func("awais",2.2);
}


