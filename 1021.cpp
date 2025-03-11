#include<iostream>
#include<string>
using namespace std;
int main(){
	int A[10]={0};
	string num;
	cin>>num;
	for(auto i:num){
		A[i-'0']++;
	}
	for(int i=0;i<10;i++){
		if(A[i]!=0){
			cout<<i<<":"<<A[i]<<"\n";
		}
	}
	return 0;
	
}
