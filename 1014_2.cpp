#include <iostream>
#include <string>
#include <algorithm> // 用于min函数
using namespace std;

int main() {
    string A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;
    
    bool dayFound = false, hourFound = false;
    char day, hour;
    int minute = -1;

    // 处理前两个字符串，获取星期和小时
    int len1 = min(A1.length(), A2.length());
    for (int i = 0; i < len1; ++i) {
        if (A1[i] == A2[i]) {
            if (!dayFound) {
                // 检查是否是大写字母A-G
                if (A1[i] >= 'A' && A1[i] <= 'G') {
                    day = A1[i];
                    dayFound = true;
                }
            } else if (!hourFound) {
                // 检查是否是0-9或A-N
                if ((A1[i] >= '0' && A1[i] <= '9') || (A1[i] >= 'A' && A1[i] <= 'N')) {
                    hour = A1[i];
                    hourFound = true;
                    break; // 找到小时后立即退出循环
                }
            }
        }
    }

    // 处理后两个字符串，获取分钟
    int len2 = min(A3.length(), A4.length());
    for (int i = 0; i < len2; ++i) {
        if (A3[i] == A4[i] && isalpha(A3[i])) {
            minute = i;
            break;
        }
    }

    // 输出星期
    switch (day) {
        case 'A': cout << "MON "; break;
        case 'B': cout << "TUE "; break;
        case 'C': cout << "WED "; break;
        case 'D': cout << "THU "; break;
        case 'E': cout << "FRI "; break;
        case 'F': cout << "SAT "; break;
        case 'G': cout << "SUN "; break;
    }

    // 输出小时
    if (hour >= '0' && hour <= '9') {
        printf("%02d:", hour - '0');
    } else {
        printf("%02d:", hour - 'A' + 10);
    }

    // 输出分钟
    printf("%02d", minute);
    
    return 0;
}
