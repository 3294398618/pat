#include<iostream>
using namespace std;
int main(){
	int i=0,j=0,tmp=0;
	int A[1001];
	while(cin>>tmp){
		A[++i]=tmp;	
	}
	j=i;//¼ÇÂ¼Î»ÖÃ 
	i=1;
	if(A[2]==0&&j==2){
		cout<<0<<" "<<0;
		return 0;
	}
	
	while(i<j){
		A[i]=A[i]*A[i+1];
		A[i+1]=A[i+1]-1;
		i+=2; 
	}
	i=1;
	 
	while(i<j){
		if(A[i]==0){
			break;
		}
		if(i!=1){
			cout<<" ";
		}
		cout<<A[i]<<" "<<A[i+1];

		i+=2; 
		
	}
	return 0;
}
