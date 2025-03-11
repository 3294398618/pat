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

    // 对数组进行排序
    sort(A.begin(), A.end());

    int maxLen = 0; // 记录最长完美数列的长度

    // 滑动窗口
    for (int i = 0; i < N; i++) {
        long long m = A[i]; // 最小值
        long long maxM = m * P; // 最大值的上限

        // 使用二分查找找到满足 A[j] <= maxM 的最大 j
        auto it = upper_bound(A.begin(), A.end(), maxM);
        int j = it - A.begin();

        // 更新最大长度
        maxLen = max(maxLen, j - i);
    }

    // 输出结果
    cout << maxLen;

    return 0;
}
