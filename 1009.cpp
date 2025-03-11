#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string input;        //定义名称 
    getline(cin, input); // 读取整行输入

    // 使用字符串流分割单词
    vector<string> words;
    stringstream ss(input);     //将input变成处理流 
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // 颠倒单词顺序
    reverse(words.begin(), words.end());

    // 使用范围 for 循环输出倒序后的句子
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
