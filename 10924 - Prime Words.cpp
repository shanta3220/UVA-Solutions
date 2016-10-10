#include <iostream>
#include <string.h>
using namespace std;

bool isPrime(int number)
  {
     int i;
     for (i=2; i<number; i++)
     { if(number % i==0)
       return false;
     }
     
     return true;
  }
  
int main() {
	int sumofword, letter[20];
	char c[20];
	while(cin >> c){
	    cin.ignore();
	    bool res = true;
	    sumofword = 0;
	    for(int i = 0; i < strlen(c); i++){
	            letter[i] = c[i];
	            if(letter[i] > 90)
	            sumofword += letter[i]- 96;
	            else sumofword += letter[i] -38;
	    }
	   if(isPrime(sumofword)) cout<<"It is a prime word.\n";
	    else cout <<"It is not a prime word.\n";
	     
	}
	return 0;
}
