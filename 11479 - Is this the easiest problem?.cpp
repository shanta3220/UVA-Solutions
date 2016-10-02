#include <iostream>
using namespace std;

int main() {
	int t,i=1;
  int a, b, c;
	cin>>t;
	while(t--){
	    cin >> a >> b >> c;
	    cout<< "Case " << i++ << ": ";
	    if(a >= 1 && b >= 1 && c >= 1){
	        if(a == b && b == c) cout << "Equilateral\n";
	        else if(b > a && b > c){
	            if(a+c>b&& a!=c) cout << "Scalene\n";
	            else if(a+c>b&& a==c) cout << "Isosceles\n";
	             else cout << "Invalid\n";
	        }
	        else if(a > b && a > c){
	            if(b + c >a && b != c) cout << "Scalene\n";
	            else if(b+c > a && b==c) cout << "Isosceles\n";
	            else cout << "Invalid\n";
	        }
	        else if(c > b && c > a){
	            if(b + a > c && b!=a) cout << "Scalene\n";
	            else if(b + a > c && b==a) cout << "Isosceles\n";
	            else cout << "Invalid\n";
	        }
	        else if(c == b && c!=a ||c == a && b!=a ||a == b && c!=a ) cout << "Isosceles\n";
	        else cout << "Invalid\n";
	    }
	    else cout << "Invalid\n";
	}
	return 0;
}
