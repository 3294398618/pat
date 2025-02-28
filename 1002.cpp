#include <iostream>
#include <string>
#include <cstdio> // 用于 printf
using namespace std;

// 输出数字对应的拼音
void PPP(int p) {
    switch (p) {
        case 0: printf("ling"); break;
        case 1: printf("yi"); break;
        case 2: printf("er"); break;
        case 3: printf("san"); break;
        case 4: printf("si"); break;
        case 5: printf("wu"); break;
        case 6: printf("liu"); break;
        case 7: printf("qi"); break;
        case 8: printf("ba"); break;
        case 9: printf("jiu"); break;
        default: break;
    }
}

int main() {
    string C;
    cin >> C; // 使用 cin 读取字符串

    int tmp = 0;
    // 将字符串中的每个字符转换为数字并累加
    for (size_t i = 0; i < C.length(); i++) {
        if (C[i] >= '0' && C[i] <= '9') {
            tmp += (C[i] - '0');
        }
    }

    // 将累加结果按位存储到数组中
    int a[20] = {0};
    int i = 0;
    while (tmp != 0) {
        a[i++] = tmp % 10;
        tmp /= 10;
    }

    // 如果输入为空或 tmp 为 0，直接输出 "ling"
    if (i == 0) {
        PPP(0);
        return 0;
    }

    // 输出所有位（从最高位开始）
    for (int j = i - 1; j > 0; j--) {
        PPP(a[j]);
        printf(" ");
    }
    // 输出个位
    PPP(a[0]);

    return 0;
}
