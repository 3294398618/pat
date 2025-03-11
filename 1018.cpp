#include<iostream>
#include<string>
using namespace std;
int main(){
	//A  B C J    //C J B
	int A[7]={0},jia_=0,yi_=0,A_num=0,B_num=0,N=0;
	char jia,yi;  //Í³¼Æ»ñÊ¤ 
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>jia>>yi;
		if(jia==yi){
			continue;
		}else if(jia=='C'&&yi=='J'){
			A[2]++;
			jia_++; 
		}else if(jia=='J'&&yi=='B'){
			A[3]++;
			jia_++;
		}else if(jia=='B'&&yi=='C'){
			A[1]++;
			jia_++; 
		}else if(yi=='C'&&jia=='J'){
			A[5]++;
			yi_++; 
		}else if(yi=='J'&&jia=='B'){
			A[6]++;
			yi_++;
		}else if(yi=='B'&&jia=='C'){
			A[4]++;
			yi_++; 
		}
	}
	int max=-1;
	for(int i=1;i<=3;i++){
		if(max<A[i]){
			max=A[i];
			A_num=i;
		}
	}
	max=-1;
	for(int i=4;i<=6;i++){
		if(max<A[i]){
			max=A[i];
			B_num=i;
		}
	}
	string end="0BCJBCJ";
	cout<<jia_<<" "<<N-jia_-yi_<<" "<<yi_<<"\n";
	cout<<yi_<<" "<<N-jia_-yi_<<" "<<jia_<<"\n";
	cout<<end[A_num]<<" "<<end[B_num] ;
	return 0;
	
}
