#include<iostream>
using namespace std;
int main(){
	int tmp,num[10]={0};
	bool First=true; 
	int i=0;
	while(cin>>tmp){
		num[i++]=tmp;
	}
	if(num[0]!=0&&First==true){
		int i=0;
		while(First==true){
			++i;
			if(num[i]!=0){
				cout<<i;
				num[i]--;
				First=false;
			}
		}
	}
	for(int i=0;i<10;i++){
		if(num[i]>0){
			for(int j=0;j<num[i];j++){
				cout<<i;
			}
		}
	}
	
	return 0;
}
