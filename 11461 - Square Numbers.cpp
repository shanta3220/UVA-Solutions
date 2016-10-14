#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b && a !=0 && b != 0){
	    int count = 0;
	    for (int i = a; i <= b; i++){
	         int s = sqrt(i);
	         if(s * s == i)
	            count++;
	    }
	    cout << count <<"\n";
	}
	return 0;
}
