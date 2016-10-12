#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[1000][1000] = {0};
	string s1, s2;
	while(getline(cin,s1)){
	    getline(cin,s2);
	    for(int i = 1; i <= s1.size(); i++){
	        for(int j = 1; j <= s2.size(); j++){
	            if (s1[i-1] == s2[j-1]){
	                a[i][j] = a[i-1][j-1] + 1;
	            }
	            else a[i][j] = max(a[i][j-1],a[i-1][j]);
	        }
	    }
	    cout << a[s1.size()][s2.size()] << "\n";
	}

	return 0;
}
