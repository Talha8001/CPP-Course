#include <iostream>
using namespace std;

template <class T1, class T2> 
class myclass
{
	T1 i;
	T2 j;
	public:
	myclass (T1 a, T2 b) { i = a; j = b; }
	void show( ) { cout << i << " & " << j << endl; }
};
template <class T, float size>
class MyClass
{
	T arr[size]; // length of array is passed in size
	// rest of the code in class
	T abc;
	public:
	MyClass(T a1[],int s){
		for(int i=0;i<s;i++){
			cout<<"array elements: "<< a1[i] << endl;
		}
	}
};
//template <class X=int> class myclass1 {
//	
//	public: myclass1(){cout << "Hi" << endl;}
//};

int main(){
	myclass <int, int> c1(1,2);//
	c1.show();
	myclass<int, double> ob1(10, 0.23);
	ob1.show();
	myclass<char,string> ob2('X', "Hello");
	ob2.show();
	int array[5]={1,2,3,4,5};
	MyClass <int,5> a1(array,5);
	
//	myclass1 <int> Array;
//	myclass1 <double> doubleArray;
//	myclass1 <> defArray;

}

