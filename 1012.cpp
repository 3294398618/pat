#include<iostream>
using namespace std;
int main(){
	int num=0;
	int A[8]={0};
	int A2_num=1,A_4num=0;
	bool a2=false;
	int tmp=0;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>tmp;
		if((tmp%5)==0&&(tmp%2)==0){
			A[1]+=tmp; //统计和 
		}
		if((tmp%5)==1){
			a2=true;
			if((A2_num%2)==0){
				A[2]-=tmp;
			} 
			else{
				A[2]+=tmp;
			}
			A2_num++;   //先加 初始为1 
		}
		if((tmp%5)==2){
			A[3]++;    //统计个数 
		}
		if((tmp%5)==3){
			A[4]+=tmp;
			A_4num++;//统计个数 求平均数，小数点后一位 
		}
		if((tmp%5)==4&&A[5]<tmp){
			A[5]=tmp;  //max
		}
	}

	for(int i=1;i<6;i++){
		if(i!=1){
			cout<<" ";
		}
		if(i==4){
			if(A_4num==0){
				cout<<"N";
			}
			else{
				printf("%.1f",A[4]/1.0/A_4num);
			}
		}
		else if(i==2&&a2==true&&A[2]==0){
			cout<<0;
		}
		else if(A[i]!=0){
			cout<<A[i];
		}else {
			cout<<"N";
		}
	}
	return 0;
}
