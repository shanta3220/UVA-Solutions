#include <iostream>
using namespace std;

int main() {
    int t, cases = 0, i = 1;
    cin >> t;
    char c, z;
    while(t--) {
        int w1, w2, w3, w4;
        cin >> w1 >>c >> w2 >>w3 >> z >> w4;
        w1 = w1 * 60 + w2;
        w3 = w3 * 60 + w4;
        int m1, m2, m3, m4;
        cin >> m1 >> c >> m2 >> m3 >> z >> m4;
        m1 = m1 * 60 + m2; 
        m3 = m3 * 60 + m4;
        cout<<"Case "<<i++<<": ";
        if(w3 < m1 || w1 > m3)
            cout << "Hits Meeting\n";
        else
            cout << "Mrs Meeting\n";
    }
    return 0;
}
