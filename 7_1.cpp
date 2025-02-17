#include<stdio.h>
int main(){
    float tmp=0;
    int zhen=0;
    int xia,da;
    scanf("%fl",&tmp);
    tmp=tmp*0.01;
    tmp=tmp/0.3048;
    zhen =(int)tmp;
    xia=zhen%12;
    da=(tmp-xia)*12;

	

    printf("%d %d",xia,da);
}
