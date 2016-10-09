#include <iostream>
using namespace std;

int main() {
    long long int n, s, r; //r==reverse, s = sum of two, n = initial no./new number after sum//
    int test, count;
    cin >> test;
    while(test--){
        count = 0;
        cin >> n;
        s = n;
        bool t = false;
        while (t != true){
            r = 0;
            count++;
            while (n != 0){
              r = r*10;
              r = r + n%10;
              n = n/10;
            }
            
            s = s+r;
            n = s;
            r = 0;
            
            while (n != 0)
            {
              r = r * 10;
              r = r + n % 10;
              n = n / 10;
            }
            
            if(r == s) t = true;
            else n = s;
            
        }
    cout << count << " " << s << "\n";   
    }
	return 0;
}
