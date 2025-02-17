#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
    
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber( const int N){
	int j=0;
	int a[10];
	int tmp=N;
	int ok =0;
	for(int i=0;i<10;i++){
		a[i]=-1;
	}
	
	for(int i=1;i<10000;i++){
		if(i*i==tmp){ ok=1;
		}
		if(i*i>10000&&ok==0){
			return 0;
		}
	}
	
	while(tmp){
		a[j++]=tmp%10;
		tmp=tmp/10;
	}
	for(int i=0;i<10;i++){
		for(int n=i+1;n<10;n++){
			if(a[i]==a[n]&&a[i]!=-1) return 1;
		}
	} 
	return 0;
}
