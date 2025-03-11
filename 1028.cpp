#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Hum {
    string id;
    int year;
    int ma;
    int day;
};

// 比较函数：判断 A 是否比 B 更早
bool isEarlier(const Hum &A, const Hum &B) {
    if (A.year != B.year) return A.year < B.year;
    if (A.ma != B.ma) return A.ma < B.ma;
    return A.day < B.day;
}

// 比较函数：判断 A 是否比 B 更晚
bool isLater(const Hum &A, const Hum &B) {
    if (A.year != B.year) return A.year > B.year;
    if (A.ma != B.ma) return A.ma > B.ma;
    return A.day > B.day;
}

int main() {
    int N;
    cin >> N;
    vector<Hum> hum; // 存储所有人的信息

    for (int i = 0; i < N; i++) {
        string id, date;
        cin >> id >> date;

        // 解析日期
        int year = stoi(date.substr(0, 4));
        int ma = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        hum.push_back({id, year, ma, day});
    }

    Hum oldest = {"", 2014, 9, 6}; // 最年长的人
    Hum youngest = {"", 1814, 9, 6}; // 最年轻的人
    int validCount = 0; // 有效人数

    for (const auto &person : hum) {
        // 判断是否在有效范围内
        bool isValid = true;
        if (person.year > 2014 || (person.year == 2014 && (person.ma > 9 || (person.ma == 9 && person.day > 6)))) {
            isValid = false;
        }
        if (person.year < 1814 || (person.year == 1814 && (person.ma < 9 || (person.ma == 9 && person.day < 6)))) {
            isValid = false;
        }

        if (isValid) {
            validCount++;
            if (isEarlier(person, oldest)) {
                oldest = person;
            }
            if (isLater(person, youngest)) {
                youngest = person;
            }
        }
    }

    // 输出结果
    cout << validCount;
    if (validCount > 0) {
        cout << " " << oldest.id << " " << youngest.id;
    }
    cout << endl;

    return 0;
}
