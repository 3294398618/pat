#include<iostream>
using namespace std;
int N=0,yi=0;
int A[100];
void resver(int a,int b){
	while(b>a){
		int tmp=0;
		tmp=A[a];
		A[a]=A[b];
		A[b]=tmp;
		b--;
		a++;
	}
}
int main(){
	cin>>N>>yi;
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	if(yi>N){
		yi=yi%N;
	}
	resver(0,N-1);
	resver(0,yi-1);
	resver(yi,N-1);
	for(int i=0;i<N;i++){
		if(i!=0){
			cout<<" ";
		}
		cout<<A[i];
	}
	return 0;
}
