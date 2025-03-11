#include<iostream>
using namespace std;
int main(){
	long long A,B,D;
	cin>>A>>B>>D;
	int num[100000];
	long long tmp=A+B;
	int i=0;
	if(tmp==0){
		cout<<0;
		return 0;
	}
	while(tmp!=0){
		num[++i]=tmp%D;
		tmp=tmp/D;
	}
	for(int j=i;j>0;j--){
		cout<<num[j];
	}
	return 0;
} 
