#include <stdio.h>

int main() {
    float tmp = 1, sum = 0; // tmp �ǵ�ǰ���ֵ��sum ���ۼӺ�
    float end, san = 1, xia = 1; // end ����ֵ��san �Ƿ��ӵĽ׳ˣ�xia �Ƿ�ĸ�����˻�
    float i = 1, n = 3; // i �ǽ׳˵ļ�������n �Ƿ�ĸ�����˻���
    scanf("%f", &end); // ������ֵ

    while (tmp > end) { // ����ǰ���ֵ���ڵ�����ֵʱ����ѭ��
        sum += tmp; // ����ǰ��ӵ��ۼӺ���
        san *= i; // ������ӵĽ׳˲���
        i++; // �׳˼������� 1
        xia *= n; // �����ĸ�����˻�����
        n += 2; // ��ĸ�Ļ����� 2
        tmp = san / xia; // ������һ���ֵ
    }
	sum+=tmp;
    printf("%.6f\n", 2 * sum); // ���Բ���ʵĽ���ֵ������ 2 �õ����յ� ��
    return 0;
}
