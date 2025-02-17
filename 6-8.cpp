#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
    
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial(const int N){
    int tmp=N;
    long long int num=1;
    if(tmp<0){printf("Invalid input");}
    for(int i=1;i<=tmp;i++){
        num=num*i;
    }
    if(tmp>=0){printf("%lld",num);}
}
