#include <iostream>
#include <string>
#include <cstdio> // ���� printf
using namespace std;

// ������ֶ�Ӧ��ƴ��
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
    cin >> C; // ʹ�� cin ��ȡ�ַ���

    int tmp = 0;
    // ���ַ����е�ÿ���ַ�ת��Ϊ���ֲ��ۼ�
    for (size_t i = 0; i < C.length(); i++) {
        if (C[i] >= '0' && C[i] <= '9') {
            tmp += (C[i] - '0');
        }
    }

    // ���ۼӽ����λ�洢��������
    int a[20] = {0};
    int i = 0;
    while (tmp != 0) {
        a[i++] = tmp % 10;
        tmp /= 10;
    }

    // �������Ϊ�ջ� tmp Ϊ 0��ֱ����� "ling"
    if (i == 0) {
        PPP(0);
        return 0;
    }

    // �������λ�������λ��ʼ��
    for (int j = i - 1; j > 0; j--) {
        PPP(a[j]);
        printf(" ");
    }
    // �����λ
    PPP(a[0]);

    return 0;
}
