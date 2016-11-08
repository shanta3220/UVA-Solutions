#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
     
int main(){
    mp::cpp_int a, b;
    while(cin >> a >> b){
    cout << a * b << '\n';
    }
}
