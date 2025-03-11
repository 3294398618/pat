#include<iostream>
using namespace std;
int main() {
	int A,B,A_,B_,tmp,end=0,AN=0,BN=0;
	cin>>A>>A_>>B>>B_;
	tmp=A;
	while(tmp){
		if(tmp%10==A_){
			AN++;
		}
		tmp=tmp/10;
	}
	tmp=B;
	while(tmp){
		if(tmp%10==B_){
			BN++;
		}
		tmp=tmp/10;
	}
	tmp=0;
	for(int i=0;i<AN;i++){
		tmp=tmp*10;
		tmp+=A_;
	}
	end+=tmp;
	tmp=0;
	for(int i=0;i<BN;i++){
		tmp=tmp*10;
		tmp+=B_;
	}
	end+=tmp;
	cout<<end;
	return 0;
}
