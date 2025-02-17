#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// 用于输出每行6个数的格式
void printNumbers(const vector<int>& numbers) {
    int count = 0;
    for (int num : numbers) {
        if (count > 0 && count % 6 == 0) {
            cout << endl;
        }
        cout << num << " ";
        count++;
    }
    cout << endl;
}

int main() {
    int A;
    cin >> A;

    // 获取从A开始的4个数字
    vector<int> digits = {A, A+1, A+2, A+3};
    
    // 存储生成的所有三位数
    set<int> result;

    // 使用三个循环生成所有的三位数
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                if (i != j && j != k && i != k) {
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    result.insert(num);
                }
            }
        }
    }

    // 将结果放入一个vector中并排序
    vector<int> sortedResult(result.begin(), result.end());
    
    // 输出结果
    printNumbers(sortedResult);

    return 0;
}

