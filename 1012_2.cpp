#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 0;
    int result[6] = {0}; // result[1] 到 result[5] 存储结果
    int alternateSignCounter = 1; // 用于 A2 的交错求和
    int countForAverage = 0; // 用于统计 A4 的数字个数
    bool hasA1 = false, hasA2 = false, hasA3 = false, hasA4 = false, hasA5 = false; // 标记是否存在对应类别的数字
    int tmp = 0;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> tmp;
        switch (tmp % 5) {
            case 0:
                if (tmp % 2 == 0) { // 能被 5 整除且为偶数
                    result[1] += tmp;
                    hasA1 = true;
                }
                break;
            case 1:
                hasA2 = true;
                if (alternateSignCounter % 2 == 0) { // 交错求和，奇数位加，偶数位减
                    result[2] -= tmp;
                } else {
                    result[2] += tmp;
                }
                alternateSignCounter++;
                break;
            case 2:
                result[3]++;
                hasA3 = true;
                break;
            case 3:
                result[4] += tmp;
                countForAverage++;
                hasA4 = true;
                break;
            case 4:
                if (tmp > result[5]) { // 更新最大值
                    result[5] = tmp;
                }
                hasA5 = true;
                break;
            default:
                break;
        }
    }

    // 输出结果
    for (int i = 1; i <= 5; i++) {
        if (i != 1) {
            cout << " ";
        }
        switch (i) {
            case 1:
                if (hasA1) {
                    cout << result[1];
                } else {
                    cout << "N";
                }
                break;
            case 2:
                if (hasA2) {
                    cout << result[2];
                } else {
                    cout << "N";
                }
                break;
            case 3:
                if (hasA3) {
                    cout << result[3];
                } else {
                    cout << "N";
                }
                break;
            case 4:
                if (hasA4) {
                    cout << fixed << setprecision(1) << result[4] / (double)countForAverage;
                } else {
                    cout << "N";
                }
                break;
            case 5:
                if (hasA5) {
                    cout << result[5];
                } else {
                    cout << "N";
                }
                break;
            default:
                break;
        }
    }

    return 0;
}
