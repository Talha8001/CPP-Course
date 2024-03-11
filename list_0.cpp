#include <iostream>
using namespace std;
#include <list>
int main()
{
	list<int> lst(5);

	for(int i=0; i<5; i++)  lst.push_back( i );
	//0 1 2 3 4
	list<int>::iterator p = lst.begin();
	while(p != lst.end())
	{
		cout << *p << " ";
		p++;
	}
	list<int>::iterator p1 = lst.begin();
	for(int i=0; i<5; i++)  lst.push_front( i );
	// 0 1 2 3 4
	cout << endl;
	while(p1 != lst.end())
	{
		cout << *p1 << " " << endl;
		p1++;
	}
	
//	for(int i=0; i<=5; i++)  lst.push_back( i );
//	for(int i=0; i<=5; i++)  lst.push_front( i );
//	// 4 3 2 1 0 0 1 2 3 4
//	list<int>::iterator p = lst.begin();
//	while(p != lst.end())
//	{
//		cout << *p << " ";
//		p++;
//	}

	lst.sort();
	list<int>::iterator p2 = lst.begin();
	while(p2 != lst.end())
	{
		cout << *p2 << " ";
		p2++;
	}	list<int>::iterator p3 = lst.begin();
	lst.reverse();
	while(p3 != lst.end())
	{
		cout << *p3 << " ";
		p3++;
	}
}

