#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Median( ElementType A[], int N ){
	ElementType num=0;
	int left=0;
	int right=N-1;
	int mid=N/2;
	while(left<right){
		int l=left;
		int r=right;	
		num=A[l];
		while(r>=l){
			while(A[r]>num){r--;
			}
			if (l<r) A[l]=A[r];
			while(A[l]<num){l++;
			}
			if(l<r) A[r]=A[l];
		}
		A[l]=num; 
		
		if(l==mid) return A[l];
		else if(l>mid) right=l;
		else           left=l;
	}
}
