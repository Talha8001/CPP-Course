#include <iostream>
#include <list>
using namespace std;
// splicing lists
int main ()
{
  list<int> mylist1, mylist2;
  list<int>::iterator it;

  // set some initial values:
  for (int i=1; i<=4; ++i)
     mylist1.push_back(i);      

  for (int i=1; i<=3; ++i)
     mylist2.push_back(i*10);  
  it = mylist1.begin();
  ++it;                         // points to __

  mylist1.splice (it, mylist2); 
                                         
  mylist2.splice (mylist2.begin(),mylist1, it);
  it = mylist1.begin();
  advance(it,3);
	//template void advance (InputIterator& it, Distance n);
  mylist1.splice ( mylist1.begin(), mylist1, it, mylist1.end());

  cout << "mylist1 contains:";
  for (it=mylist1.begin(); it!=mylist1.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  cout << "mylist2 contains:";
  for (it=mylist2.begin(); it!=mylist2.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}
