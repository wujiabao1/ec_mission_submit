#include <iostream>
using namespace std;

// 函数：求最大公约数（辗转相除法）
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
    cin >> a >> b;  // 输入两个数
    // 计算最小公倍数：两数之积除以最大公约数
    int lcm = a * b / gcd(a, b);
    cout << "最小公倍数是" << lcm << endl;
    return 0;
}