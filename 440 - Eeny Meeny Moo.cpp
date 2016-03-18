#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,n,printm,city;
    while(cin >> n && n!= 0){
        for(int m=2; ; m++){
            city = n-1;
            printm = 1;
            x = (m-1) % city;
            while(city>1){
                if(x == 0){
                    printm = 0;
                    break;
                }
                city--;
                x = (x + m -1) % city;

            }
            if(printm){                  //or printm==1.
                cout<<m<<"\n";
                break;
            }

    }



    }

    return 0;
}
