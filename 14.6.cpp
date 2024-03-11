#include <iostream> 
using namespace std;
 
template < typename T >
bool isEqualTo( const T &arg1, const T &arg2 ){
   return arg1 == arg2;
} 

class Complex {
private:
   int real; 
   int imaginary; 
public:
   // constructor for Fraction
   Complex( int realPart, int iPart ): real( realPart ),imaginary( iPart )
   {
      
   }
   bool operator==( const Complex &right ) const
   { 
      return real == right.real && imaginary == right.imaginary; 
   } 
   
friend ostream &operator<<(ostream &, Complex &);
}; 
 
// overloaded << operator 
ostream &operator<<( ostream &out, Complex &obj ) { if ( obj.imaginary > 0 ) 
      out << obj.real << " + " << obj.imaginary << "i";
   else if ( obj.imaginary == 0 )
      out << obj.real;
   else 
      out << obj.real << " - " << -obj.imaginary << "i";
 
   return out;
} 
 
int main(){
	
   int a; 
   int b; 
 
   cout << "Enter two integer values: "; cin >> a >> b;
   cout << a << " and " << b << " are "<< ( isEqualTo( a, b ) ? "equal" : "not equal" ) << '\n';
 
   char c; 
   char d; 
 
   
   cout << "\nEnter two character values: "; cin >> c >> d;
   cout << c << " and " << d << " are "<< ( isEqualTo( c, d ) ? "equal" : "not equal" ) << '\n';
 
   double e;
   double f; // testing equality
 
   cout << "\nEnter two double values: "; cin >> e >> f;
   cout << e << " and " << f << " are "<< ( isEqualTo( e, f ) ? "equal" : "not equal") << '\n';
 
   Complex g( 10, 5 ); 
   Complex h( 10, 5 );
 
   cout << "\nThe class objects " << g << " and " << h << " are "<< ( isEqualTo( g, h ) ? "equal" : "not equal" ) << '\n';
} 
