#include <iostream>
#include <string>
#include <algorithm> // ����min����
using namespace std;

int main() {
    string A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;
    
    bool dayFound = false, hourFound = false;
    char day, hour;
    int minute = -1;

    // ����ǰ�����ַ�������ȡ���ں�Сʱ
    int len1 = min(A1.length(), A2.length());
    for (int i = 0; i < len1; ++i) {
        if (A1[i] == A2[i]) {
            if (!dayFound) {
                // ����Ƿ��Ǵ�д��ĸA-G
                if (A1[i] >= 'A' && A1[i] <= 'G') {
                    day = A1[i];
                    dayFound = true;
                }
            } else if (!hourFound) {
                // ����Ƿ���0-9��A-N
                if ((A1[i] >= '0' && A1[i] <= '9') || (A1[i] >= 'A' && A1[i] <= 'N')) {
                    hour = A1[i];
                    hourFound = true;
                    break; // �ҵ�Сʱ�������˳�ѭ��
                }
            }
        }
    }

    // ����������ַ�������ȡ����
    int len2 = min(A3.length(), A4.length());
    for (int i = 0; i < len2; ++i) {
        if (A3[i] == A4[i] && isalpha(A3[i])) {
            minute = i;
            break;
        }
    }

    // �������
    switch (day) {
        case 'A': cout << "MON "; break;
        case 'B': cout << "TUE "; break;
        case 'C': cout << "WED "; break;
        case 'D': cout << "THU "; break;
        case 'E': cout << "FRI "; break;
        case 'F': cout << "SAT "; break;
        case 'G': cout << "SUN "; break;
    }

    // ���Сʱ
    if (hour >= '0' && hour <= '9') {
        printf("%02d:", hour - '0');
    } else {
        printf("%02d:", hour - 'A' + 10);
    }

    // �������
    printf("%02d", minute);
    
    return 0;
}
