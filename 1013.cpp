#include<iostream>
using namespace std;
int sushu(int j){
	bool a=true;
	while(a){
		j++;
		bool b=true;    //�ж�j�ǲ������� 
		for(int i=2;i*i<=j;i++){
			if(j%i==0){//j��������  
				b=false;
				break;
			}
		}
		if(b==true){
			return j;
		}
	}
}
int main(){
	int M,N,i,tmp,num;
	int shuc=1;
	cin>>M>>N;
	i=2;    //������������ 
	num=1; //ͳ���ǵڼ������� 
	while(1){
		if(num>N){
			return 0;
		}
		if(shuc%10!=1&&num>=M){
			cout<<" ";
		}
		if(shuc!=1&&shuc%10==1&&num>=M){
			cout<<"\n";
		}
		
		if(num>=M){
			cout<<i;
			shuc++;
		} 
		i=sushu(i);
		num++;
	}
	return 0;
}
