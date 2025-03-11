#include <iostream>
#include <vector>
using namespace std;

int main() {
    int coeff, exp;
    vector<pair<int, int>> poly; // 存储多项式项（系数，指数）
    vector<pair<int, int>> deriv; // 存储导数多项式项（系数，指数）

    // 读取输入
    while (cin >> coeff >> exp) {
        poly.push_back({coeff, exp});
    }

    // 计算导数
    for (const auto& term : poly) {
        if (term.second != 0) { // 忽略常数项
            deriv.push_back({term.first * term.second, term.second - 1});
        }
    }

    // 处理零多项式
    if (deriv.empty()) {
        cout << "0 0";
        return 0;
    }

    // 输出导数多项式
    for (size_t i = 0; i < deriv.size(); ++i) {
        cout << deriv[i].first << " " << deriv[i].second;
        if (i + 1 < deriv.size()) {
            cout << " ";
        }
    }

    return 0;
}
