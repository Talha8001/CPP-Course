#include<iostream>

#include<vector>

using namespace std;
//
//int main()
//{
//	int x;
//	int *xptr;
//	xptr = &x;
//	x = 10;
//	cout << x << endl;//10
//	cout << &x << endl;//add of x
//	cout << xptr << endl;//add of x
//	cout << &xptr << endl;//add of xptr
//	cout << *xptr << endl;//10
//	
//	vector<char>  v(10);
//	vector<char>::iterator  p;
//	
//	p  =  v.begin();
//	int i = 0;
//	while ( p  !=  v.end() )
//	{
//		*p  =  i + 'a';
//		cout <<  << endl;//
//		p++;
//		i++;
//	}
//}

int main()
{
	vector<char> v(5); 
	v[0] = 'A';
	v[1] = 'B';
	v[2] = 'C';
	v[3] = 'D';
	v[4] = 'E';
	vector<char>::iterator  p;//
	vector<char>::iterator  p1;//
	p  =  v.begin();//
	p = p + 2;//
	
	cout << *p << endl;//C
	
	v.insert(p, 'y');
	cout << v[2] << endl;//Y*
	p1  =  v.begin();//
	p1 = p1 + 2;//
	v.erase(p1);//v.begin()
	cout << *p1 << endl;
	cout << " Current Contents:\n";
	for(int i=0; i < v.size(); i++)	
		cout << v[i] << " " << endl;//
		
	++p;//3
	cout << *p << endl;//
	p++;//4
	cout << *p << endl;//
	
	cout << " Current Contents:\n";
	for(int i=0; i < v.size(); i++)	
		cout << v[i] << " " << endl;//
}

