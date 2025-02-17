#include<stdio.h>

int main() {
    int num_1, num_2;
    char C;
    scanf("%d %c %d", &num_1, &C, &num_2);
    
    if (C == '+') {
        printf("%d", num_1 + num_2);
        return 0;
    }
    if (C == '-') {
        printf("%d", num_1 - num_2);
        return 0;
    }
    if (C == '*') {
        printf("%d", num_1 * num_2);
        return 0;
    }
    if (C == '/') {
        printf("%d", num_1 / num_2);
        return 0;
    }
    if (C == '%') {
        printf("%d", num_1 % num_2);
        return 0;
    }    
    printf("ERROR");
    return 0;
}
