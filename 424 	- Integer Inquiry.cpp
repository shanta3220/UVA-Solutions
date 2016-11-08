#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
     
int main(){
    mp::cpp_int a, b = 0;
    while(cin >> a && a != 0){
        b += a;
    
    }
    cout << b << '\n';
}
