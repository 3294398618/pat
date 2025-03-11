#include <iostream>
using namespace std;

// �ж�һ�����Ƿ�Ϊ����
bool is_prime(int n) {
    if (n <= 1) return false; // 1 ��������
    if (n == 2) return true;  // 2 ������
    if (n % 2 == 0) return false; // ż����������
    for (int i = 3; i * i <= n; i += 2) { // ֻ���鵽 sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num, count = 0, prev_prime = -1;
    cin >> num;

    // �� num ��ʼ���²������ڵ�������
    for (int i = num; i >= 2; i--) {
        if (is_prime(i)) {
            if (prev_prime != -1 && (prev_prime - i) == 2) {
                count++; // �ҵ�һ����������
            }
            prev_prime = i; // ����ǰһ������
        }
    }

    cout << count << endl;
    return 0;
}
