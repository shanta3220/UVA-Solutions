#include <iostream>
using namespace std;

int main() {
	int t, m, n, x, y;
	while (cin >> t && t != 0){
        cin >> m >> n;
        
        while(t--){
            cin >> x >> y;
            
            if( x == m || y == n)
                cout << "divisa\n";
            else if (x > m && y > n)
                cout << "NE\n";
            else if ( x < m && y >n)
                cout << "NO\n";
            else if ( x < m && y < n)
                cout << "SO\n";
            else cout << "SE\n";
        
        }
   
   }
	return 0;
}
