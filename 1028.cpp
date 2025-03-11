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

// �ȽϺ������ж� A �Ƿ�� B ����
bool isEarlier(const Hum &A, const Hum &B) {
    if (A.year != B.year) return A.year < B.year;
    if (A.ma != B.ma) return A.ma < B.ma;
    return A.day < B.day;
}

// �ȽϺ������ж� A �Ƿ�� B ����
bool isLater(const Hum &A, const Hum &B) {
    if (A.year != B.year) return A.year > B.year;
    if (A.ma != B.ma) return A.ma > B.ma;
    return A.day > B.day;
}

int main() {
    int N;
    cin >> N;
    vector<Hum> hum; // �洢�����˵���Ϣ

    for (int i = 0; i < N; i++) {
        string id, date;
        cin >> id >> date;

        // ��������
        int year = stoi(date.substr(0, 4));
        int ma = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        hum.push_back({id, year, ma, day});
    }

    Hum oldest = {"", 2014, 9, 6}; // ���곤����
    Hum youngest = {"", 1814, 9, 6}; // ���������
    int validCount = 0; // ��Ч����

    for (const auto &person : hum) {
        // �ж��Ƿ�����Ч��Χ��
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

    // ������
    cout << validCount;
    if (validCount > 0) {
        cout << " " << oldest.id << " " << youngest.id;
    }
    cout << endl;

    return 0;
}
