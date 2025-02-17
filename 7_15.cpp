#include <stdio.h>

int main() {
    float tmp = 1, sum = 0; // tmp 是当前项的值，sum 是累加和
    float end, san = 1, xia = 1; // end 是阈值，san 是分子的阶乘，xia 是分母的连乘积
    float i = 1, n = 3; // i 是阶乘的计数器，n 是分母的连乘基数
    scanf("%f", &end); // 输入阈值

    while (tmp > end) { // 当当前项的值大于等于阈值时继续循环
        sum += tmp; // 将当前项加到累加和中
        san *= i; // 计算分子的阶乘部分
        i++; // 阶乘计数器加 1
        xia *= n; // 计算分母的连乘积部分
        n += 2; // 分母的基数加 2
        tmp = san / xia; // 计算下一项的值
    }
	sum+=tmp;
    printf("%.6f\n", 2 * sum); // 输出圆周率的近似值，乘以 2 得到最终的 π
    return 0;
}
