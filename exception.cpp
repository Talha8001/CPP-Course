#include <iostream>
#include <string>
using namespace std;

int main() {
  int candidate_age = 15;
  try {
    if (candidate_age >= 18) {
      cout << "Access granted - you are old enough to be admitted at MAJU.";
    } else {
      throw ("Hi!!");
    }
  }
  catch (double candidate_age) {
    cout << "Please wait - You must be at least 18d years old.\n";
    cout << "Age is: " << candidate_age;  
  }
  catch (int candidate_age) {
    cout << "Please wait - You must be at least 18i years old.\n";
    cout << "Age is: " << candidate_age;  
  }
  catch (float candidate_age) {
    cout << "Please wait - You must be at least 18f years old.\n";
    cout << "Age is: " << candidate_age;  
  }
  
  catch (char *s1) {
    cout << "Please wait - You must be at least 18s years old.\n";
    cout << "Age is: " << s1;  
  }
  catch (...) {
    cout << "Please wait - You must be at least 18default years old.\n";
    //cout << "Age is: " << ;  
  }
  return 0;
}
