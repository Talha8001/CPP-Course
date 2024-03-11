#include <iostream>
using namespace std;
//
/*int main() {
  
  try {//Age 
    int candidate_age = 15;
	if (candidate_age >= 18) {
      cout << "Access granted - you are old enough to be admitted at MAJU.";
    } else {
      try {//Age 
    int candidate_age = 16;
	if (candidate_age >= 20) {
      cout << "Access granted - you are old enough to be admitted at MAJU.";
    } else {
      throw (404.404f);
	  throw (404); //
	  throw (candidate_age);
      
    }
  }
  catch (float candidate_age) {
    cout << "Please wait - You must be at least 20 years old.\n";
    cout << "Currently, your age iss: " << candidate_age;  
  }
  catch (int candidate_age) {
    cout << "Please wait - You must be at least 20 years old.\n";
    cout << "Currently, your age is: " << candidate_age;  
  }
	  throw (404.404f);
	  throw (404); //
	  throw (candidate_age);
      
    }
  }
  catch (float candidate_age) {
    cout << "Please wait - You must be at least 18 years old.\n";
    cout << "Currently, your age iss: " << candidate_age;  
  }
  catch (int candidate_age) {
    cout << "Please wait - You must be at least 18 years old.\n";
    cout << "Currently, your age is: " << candidate_age;  
  }
  return 0;
}
*/

//#include <iostream>
//using namespace std;

//int main()
//{
//	try {
//		int a = 11;
//		if(a<='b'){
//			cout << a << endl;
//		}
//	throw a;
//	}
//	catch (int c) {
//		cout << "Caught " << c;
//	}
//	catch (...) {
//		cout << "Default Exception\n";
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

//int main()
//{
//	try {
//	throw 'a';
//	}
//	catch (int x) {
//		cout << "Caught " << x;
//	}
//	catch (...) {
//		cout << "Default Exception\n";
//	}
//	return 0;
//}

int main()
{
    int a=10,b=1,c;
    try{
    	if(b!=0){
    		c=(a/b);
    		cout << c << endl;
    	}
    	else{
    		throw('a');
    	}
    }
    catch(int b){
    	cout<<"Denomintor is "<<b;
    }
    catch(...){
    	cout<<"def..";
    }
    return 0;
}
