#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// �������ÿ��6�����ĸ�ʽ
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

    // ��ȡ��A��ʼ��4������
    vector<int> digits = {A, A+1, A+2, A+3};
    
    // �洢���ɵ�������λ��
    set<int> result;

    // ʹ������ѭ���������е���λ��
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

    // ���������һ��vector�в�����
    vector<int> sortedResult(result.begin(), result.end());
    
    // ������
    printNumbers(sortedResult);

    return 0;
}

