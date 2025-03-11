#include <iostream>
#include <vector>
using namespace std;

int main() {
    int coeff, exp;
    vector<pair<int, int>> poly; // �洢����ʽ�ϵ����ָ����
    vector<pair<int, int>> deriv; // �洢��������ʽ�ϵ����ָ����

    // ��ȡ����
    while (cin >> coeff >> exp) {
        poly.push_back({coeff, exp});
    }

    // ���㵼��
    for (const auto& term : poly) {
        if (term.second != 0) { // ���Գ�����
            deriv.push_back({term.first * term.second, term.second - 1});
        }
    }

    // ���������ʽ
    if (deriv.empty()) {
        cout << "0 0";
        return 0;
    }

    // �����������ʽ
    for (size_t i = 0; i < deriv.size(); ++i) {
        cout << deriv[i].first << " " << deriv[i].second;
        if (i + 1 < deriv.size()) {
            cout << " ";
        }
    }

    return 0;
}
