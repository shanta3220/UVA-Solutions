#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main() {
	int t, n;
	string cans, party;
	cin >> t;
	while(t--){
	    cin >> n;
	    cin.ignore();
	    map <string, string> map1;
	    map <string, int > map2;
	    while(n--){
	        getline(cin, cans);
	        getline(cin, party);
	        map1[cans] = party;
	    }
	   cin >> n;
	   cin.ignore();
	   while(n--){
	       cin >> cans;
	       map2[cans]+=1;
	   }
	   
	   int max = -1, maxn = 0, c;
	   string winner ="";
	   map<string, string> :: iterator i;
	   for(i = map1.begin(); i != map1.end(); i++){
	       c = map2[i->first];
	       if ( c > max){
	         max = c;
	         maxn = 0;
	         winner = (*i).second;
	       }
	       else if (c == max) {
				maxn++;
            }
	   }
	    if (maxn != 1)
            winner = "tie";
        cout << winner << "\n";
        if(t)
           cout<<"\n";
	   
	   
	}
	return 0;
}
