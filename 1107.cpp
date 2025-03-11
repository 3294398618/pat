#include<iostream>
using namespace std;
int main(){
	int N,M,tmp;
	int MAX[1002];
	cin>>N>>M;
	for(int i=0;i<N;i++){
		int max=-1;
		for(int j=0;j<M;j++){
			cin>>tmp;
			if(tmp>max){
				max=tmp;
			}
		}
		MAX[i]=max;  //记录每组最大的一个; 
	}
	int max=-1;     //最后保存最大的max 
	for(int i=0;i<N;i++){
		if(MAX[i]>max){
				max=MAX[i];
			}
	}
	
	//输出
	for(int i=0;i<N;i++){
		if(i!=0){
			cout<<" ";
		}
		cout<<MAX[i];
		if(i==(N-1)){
			cout<<"\n";
		}
	} 
	cout<<max;
	return 0;
}
