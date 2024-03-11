#include <iostream>
#include <typeinfo>
using namespace std;

//template<class T, class U = int> class A;//template class dec
template<class T, int size = 10> class A;//

template<class T, int size> class A {
   public:
      T x;
   //   U y;
      void show(){
      	cout << typeid(x).name() << endl;
      	cout << typeid(size).name() << endl;
      }
};
int main(){
	A<float> a;
	a.show();
}
