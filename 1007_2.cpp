#include <iostream>
using namespace std;

// 判断一个数是否为素数
bool is_prime(int n) {
    if (n <= 1) return false; // 1 不是素数
    if (n == 2) return true;  // 2 是素数
    if (n % 2 == 0) return false; // 偶数不是素数
    for (int i = 3; i * i <= n; i += 2) { // 只需检查到 sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num, count = 0, prev_prime = -1;
    cin >> num;

    // 从 num 开始向下查找相邻的素数对
    for (int i = num; i >= 2; i--) {
        if (is_prime(i)) {
            if (prev_prime != -1 && (prev_prime - i) == 2) {
                count++; // 找到一对孪生素数
            }
            prev_prime = i; // 更新前一个素数
        }
    }

    cout << count << endl;
    return 0;
}
