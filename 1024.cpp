#include<iostream>
#include<string>
using namespace std;
void out(string A,string B){
	int zero=0;
	int NN=1;
	for(int i=(B.length()-1);i>0;i--){
		int tmp=B[i]-'0';
		if(tmp!=0){
			zero=zero*NN*10+tmp;
			NN=1;
		}else {
			NN*=10;
		}
	}
	//cout<<"zero"<<zero<<"\n";
	if(B[0]=='-'){
		for(int i=0;i<zero;i++){
			if(i==1){
				cout<<'.';
			}
			cout<<'0';
		}
		int AA=0; 
		for(auto i:A){
			if(AA==1&&zero==0){
				cout<<".";
			}
			cout<<i;
			AA++;
		}
	}else if(B[0]=='+'){
		if((zero-A.length()+1)>0&&zero!=0){

			zero=zero-A.length()+1;
			for(auto i:A){
			cout<<i;
			}
			for(int i=0;i<zero;i++){
				cout<<'0';
			}
		}else {
	
			for(int i=0;i<A.length();i++){
				cout<<A[i];
				if(zero==0&&i==0){
					cout<<".";
				}
			}
		}
		
	}
}
int main(){
	string num,end,E;  //num表示读入的数字，  end 表示底数  ，E表示指数,带正负 
	int BOOL_E=false;
	int homedian=0;    //表示点的位置 
	cin>>num;
	//cout<<num<<"\n";
	for(int i=0;i<num.length();i++){	
		if(i==0&&num[i]=='-'){
			cout<<'-';
			continue;
		}else if(num[i]!='.'&&num[i]!='E'&&BOOL_E==false&&num[i]!='+'){
			end+=num[i];
		}else if(num[i]=='.'){
			homedian=i;
		}else if(num[i]=='E'){
			BOOL_E=true;
			i++;
		}
		
		if(BOOL_E==true){   //没处理指数的正负 改变bool为int 
			E+=num[i];
		}
	}
	//cout<<"end"<<end<<"\n"<<"E"<<E<<"\n";
	out(end,E); 
	return 0;
}
