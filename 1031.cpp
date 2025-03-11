#include<iostream>
#include<string>
using namespace std;
int main(){
	string M="10X98765432";
	string s[100];
	int end[100]={0};
	int N,he=0;
	int S[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	cin>>N;
	for(int i=0;i<N;i++){
		string tmp;
		cin>>s[i];
		tmp=s[i];
		int add=0;
		for(int j=0;j<17;j++){
			int num=tmp[j]-'0';
			add+=num*S[j];
		}
		add=add%11;
		if(M[add]==s[i][17]){
			end[i]=1;   //end标记是否正确 
			he++;
		}
	}
	if(he==N){
		cout<<"All passed";
		return 0;
	}
	for(int i=0;i<N;i++){
		if(end[i]!=1){
			cout<<s[i]<<"\n";
		}
	} 
	return 0;
}
