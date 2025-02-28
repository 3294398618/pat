#include <iostream>
#include <vector>
#include <unordered_set>  //换成set亦可以，就是更加的慢 
#include <algorithm>

using namespace std;

// 生成卡拉兹猜想序列，直到到达1
unordered_set<int> callatzSequence(int n) {
    unordered_set<int> sequence;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n + 1) / 2;
        }
        sequence.insert(n);
    }
    return sequence;
}

// 找出关键数
vector<int> findKeyNumbers(const vector<int>& numbers) {
    unordered_set<int> covered; // 存储所有被覆盖的数
    //遍历读入的number 
	for (int num : numbers) {
		//把算个出来的所有数据加入sequence 
        unordered_set<int> sequence = callatzSequence(num);
		//加入   ，covered 是unordered,会自动去除重复的        
        covered.insert(sequence.begin(), sequence.end());
    }

    // 找出关键数
    vector<int> keyNumbers;
    for (int num : numbers) {
        if (covered.find(num) == covered.end()) {
            keyNumbers.push_back(num);
        }
    }

    // 按从大到小排序
    sort(keyNumbers.begin(), keyNumbers.end(), greater<int>());
    return keyNumbers;
}

int main() {
    int K;
    cin >> K; // 输入数字个数
    vector<int> numbers(K);
    for (int i = 0; i < K; ++i) {
        cin >> numbers[i]; // 输入待验证的数字
    }

    // 找出关键数
    vector<int> keyNumbers = findKeyNumbers(numbers);

    // 输出结果
    bool first = true;
    for (int num : keyNumbers) {
        if (!first) {
            cout << " ";
        }
        cout << num;
        first = false;
    }


    return 0;
}
