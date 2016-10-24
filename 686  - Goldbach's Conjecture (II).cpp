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
    int n, count;
    while(scanf("%d", &n)&& n != 0){
       
        count = 0; 
        for(int i = 2; i <= n; i++){
    	    if(isPrime(i)){
    	        for(int j = i; j <= n; j++){
        	        if(isPrime(j)&& i+j == n){
        	            count++;
        	            break;
        	        }
    	        }
    	     }      
    	}
    	printf("%d\n", count);
    }    
	return 0;
}

