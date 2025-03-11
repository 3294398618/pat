#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // �������������
    sort(A.begin(), A.end());

    int maxLen = 0; // ��¼��������еĳ���

    // ��������
    for (int i = 0; i < N; i++) {
        long long m = A[i]; // ��Сֵ
        long long maxM = m * P; // ���ֵ������

        // ʹ�ö��ֲ����ҵ����� A[j] <= maxM ����� j
        auto it = upper_bound(A.begin(), A.end(), maxM);
        int j = it - A.begin();

        // ������󳤶�
        maxLen = max(maxLen, j - i);
    }

    // ������
    cout << maxLen;

    return 0;
}
