#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long n, t, n2, count, sum;
	cin >> t;
	while(t--){
        cin >> n;
        n2 = n;
        sum = 0;
        count = 0;
        while( n != 0){
          count++;
          n /= 10;
        }
        n = n2;
        while(n2 !=0){
           sum += pow(n2%10,count);
           n2 /=10;
        }
        if (sum == n) cout << "Armstrong\n";
        else cout <<"Not Armstrong\n";
	}
	return 0;
}
