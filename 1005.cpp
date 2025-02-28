#include <iostream>
#include <vector>
#include <unordered_set>  //����set����ԣ����Ǹ��ӵ��� 
#include <algorithm>

using namespace std;

// ���ɿ����Ȳ������У�ֱ������1
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

// �ҳ��ؼ���
vector<int> findKeyNumbers(const vector<int>& numbers) {
    unordered_set<int> covered; // �洢���б����ǵ���
    //���������number 
	for (int num : numbers) {
		//������������������ݼ���sequence 
        unordered_set<int> sequence = callatzSequence(num);
		//����   ��covered ��unordered,���Զ�ȥ���ظ���        
        covered.insert(sequence.begin(), sequence.end());
    }

    // �ҳ��ؼ���
    vector<int> keyNumbers;
    for (int num : numbers) {
        if (covered.find(num) == covered.end()) {
            keyNumbers.push_back(num);
        }
    }

    // ���Ӵ�С����
    sort(keyNumbers.begin(), keyNumbers.end(), greater<int>());
    return keyNumbers;
}

int main() {
    int K;
    cin >> K; // �������ָ���
    vector<int> numbers(K);
    for (int i = 0; i < K; ++i) {
        cin >> numbers[i]; // �������֤������
    }

    // �ҳ��ؼ���
    vector<int> keyNumbers = findKeyNumbers(numbers);

    // ������
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
