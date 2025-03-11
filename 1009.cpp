#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string input;        //�������� 
    getline(cin, input); // ��ȡ��������

    // ʹ���ַ������ָ��
    vector<string> words;
    stringstream ss(input);     //��input��ɴ����� 
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // �ߵ�����˳��
    reverse(words.begin(), words.end());

    // ʹ�÷�Χ for ѭ����������ľ���
    int x=0;
    for (auto word : words) {
        if(x!=0){
        	cout<<" "; 
		}
		x++;
		cout << word; 
    }
    cout << endl;

    return 0;
}
