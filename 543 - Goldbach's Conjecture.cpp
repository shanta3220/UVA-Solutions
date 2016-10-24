#include <iostream>
#include <cstdio>
using namespace std;

#define M 1000000
bool marked[M];

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void sieve() {
  for (int i = 3; i * i <= M; i += 2) {
    if (marked[i] == false) {
      for (int j = i * i; j <= M; j += i + i) {
        marked[j] = true;
      }
    }
  }
}
int main() {
    sieve();
    int n;
    while(scanf("%d", &n) == 1){
        for(int i = n; i>=2; i--){
    	    if(isPrime(i)&& n - i != 0){
    	        if(isPrime( n - i)) {
    	            printf("%d = %d + %d\n", n, n - i, i);
    	            break;
    	        }
            }      
    	}
    }    
	return 0;
}
