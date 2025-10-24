#include <iostream>
using namespace std;


int gcd(int a, int b) {  
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;  
    int lcm = a * b / gcd(a, b);
    cout << "最小公倍数是" << lcm << endl;
    return 0;
}