#include<iostream>
using namespace std;
int main(){
	char F;
	int num,tmp=1;
	
	
	cin>>num>>F;
	if(num==1){
		cout<<F<<"\n"<<0;
		return 0;
	}
	int i=1;
	while(tmp<num){
		i+=2;
		tmp=tmp+i*2;
	}
	tmp-=i*2;
	i-=2;
	int k=0;
	tmp=num-tmp;//tmp 保存多余的数量
	for(int j=i;j>0;j-=2){
		for(int n=0;n<k;n++){
			cout<<" ";
		}
		for(int n=0;n<j;n++){
			cout<<F;
		}

		cout<<"\n";
		k++;
	} 
	k-=2;
	for(int j=3;j<=i;j+=2){
		for(int n=0;n<k;n++){
			cout<<" ";
		}
		for(int n=0;n<j;n++){
			cout<<F;
		}

		cout<<"\n";
		k--;
	}
	cout<<tmp;
	return 0;
}
