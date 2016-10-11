#include <iostream>
#include <cstdio>
using namespace std;
int ugly[1501],a, b, c;
void uglyNum(){
    ugly[1] = 1;
    int a = b = c = 1, x = 2, y = 3,z = 5, t = 2;
    while(ugly[1500] == 0){
        if(x < y  && x < z) {
            ugly[t] = x;
            a++;
            x = ugly[a] * 2;
            t++;
        }
        else if(y < x && y < z) {
            ugly[t] = y;
            b++;
            y = ugly[b] * 3;
            t++;
        }
        else if(z < y  &&  z < x) {
    	   ugly[t]=z;
            c++;
            z =  ugly[c] * 5;
            t++;
        }
        if(x==y) {
            a++;
            x = ugly[a] * 2;
        }
        else if(y == z) {
            b++;
            y = ugly[b] * 3;
        }
        else if(z == x) {
            c++;
            z = ugly[c] * 5;
        }
    }
}


 
int main()
{
    uglyNum();
    cout << "The 1500'th ugly number is " << ugly[1500] << "." << "\n";
    return 0;
}
