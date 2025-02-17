#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// �������ÿ��6�����ĸ�ʽ
void printNumbers(const vector<int>& numbers) {
    int count = 0;
    // ʹ�ô�ͳ�ĵ���������
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

    // �� C++98 �У�����ֱ��ʹ�� {} ����ʼ�� vector
    // ʹ�� push_back ����������Ԫ��
    vector<int> digits;
    digits.push_back(A);
    digits.push_back(A+1);
    digits.push_back(A+2);
    digits.push_back(A+3);
    
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

