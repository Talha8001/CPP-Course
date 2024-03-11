#include <iostream>
#include <typeinfo>
using namespace std;

template <class T>
class test{
	T a;//int/T 
	public:
	test(T x){
		a=x;
	}
	 void show();
};
template <typename T>
void test<T>::show(){
		cout << a << endl;
		cout << typeid(a).name() << endl;//Ss -> It's a mangled typename.
	}
int main(){
	test <string> t1("a");
	t1.show();
	
	//test t1(10);
//	t1.show();
}
