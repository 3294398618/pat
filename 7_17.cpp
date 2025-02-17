#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// 用于输出每行6个数的格式
void printNumbers(const vector<int>& numbers) {
    int count = 0;
    // 使用传统的迭代器遍历
    for (vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
        count++;
		cout << *it ;
        if (count > 0 && count % 6 == 0) {
            cout << endl;
        }
        else{
        	cout<< " " ;
		}
        
    }
 //   cout << endl;
}

int main() {
    int A;
    cin >> A;

    // 在 C++98 中，不能直接使用 {} 来初始化 vector
    // 使用 push_back 方法逐个添加元素
    vector<int> digits;
    digits.push_back(A);
    digits.push_back(A+1);
    digits.push_back(A+2);
    digits.push_back(A+3);
    
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

