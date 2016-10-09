#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string input){
    int len = input.size();
    bool isPalindrome = true;
    for(int j = 0; j<len/2; j++){
	if(input[j] != input[len - 1 -j]){
		isPalindrome = false;	
		break;
			
	}
    }
	
    return isPalindrome;
}
bool isMirrored(string input){
    int len = input.size();
    int l =len -1;
    bool isPalindrome = true;
    for(int i = 0; i<len; i++){
        if(input[i]=='B'||input[i]=='C'||input[i]=='D'||input[i]=='F'||input[i] =='G'||input[i]=='K'||input[i]=='N'
	   ||input[i]=='4'||input[i]=='6'||input[i]=='P'||input[i]=='Q' ||input[i]=='R'||input[i]=='7'||input[i]=='9'){
            	isPalindrome = false;
            	return isPalindrome;
        }
        if(input[i]==input[l-i]){
		if(input[i]=='Z'||input[i]=='5'||input[i]=='2'||input[i]=='3'
		   ||input[i]=='L'||input[i]=='J'||input[i]=='E'||input[i]=='S'){
            	     isPalindrome = false;
            	     return isPalindrome;
            }
        }
        
        
    }
     for(int i = 0; i<len/2; i++){
	  if(input[i] != input[len - 1 -i]){
		 if(input[i]=='2'&&input[len-1-i]=='S') isPalindrome = true;
		 else if(input[i]=='3'&&input[len-1-i]=='E') isPalindrome = true;
		 else if(input[i]=='L'&&input[len-1-i]=='J') isPalindrome = true;
		 else if(input[i]=='0'&&input[len-1-i]=='O') isPalindrome = true;
		 else if(input[i]=='5'&&input[len-1-i]=='Z') isPalindrome = true;
		 else if(input[i]=='S'&&input[len-1-i]=='2') isPalindrome = true;
		 else if(input[i]=='E'&&input[len-1-i]=='3') isPalindrome = true;
		 else if(input[i]=='J'&&input[len-1-i]=='L') isPalindrome = true;
		 else if(input[i]=='O'&&input[len-1-i]=='0') isPalindrome = true;
		 else if(input[i]=='Z'&&input[len-1-i]=='5') isPalindrome = true;
		 else{
			isPalindrome = false;	
			break;

		 }
	    }
	}
      return isPalindrome;
}

int main(){
    
    string s;
    while(cin>>s){
    bool truth = isPalindrome(s);
    bool truth2 = isMirrored(s);
    if(truth==1 && truth2 ==1) cout << s << " -- is a mirrored palindrome.\n\n";
    else if(truth==1 && truth2 ==0) cout << s << " -- is a regular palindrome.\n\n";
    else if(truth==0 && truth2 ==1) cout << s << " -- is a mirrored string.\n\n";
    else cout << s <<" -- is not a palindrome.\n\n";
    }
	return 0;
}
