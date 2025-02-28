#include<iostream>
using namespace std;
int PAT(string C){
	int p=-1,t=-1,A_left=0,A_right=-1;
	for(int i=0;i<C.length();i++){
		if(C[i]=='P'||C[i]=='A'||C[i]=='T'){//基本确认  进一步确认P一个而且右边为A  
			switch(C[i]){
				case 'P': A_left+=i;
					if(p!=-1||C[i+1]!='A'){ 
					return 0;
				}
					p=i;
					break;
				case 'A': if(A_right>=0){
					A_right++;
					
				}
					break;
				case 'T': A_right=0;
					if(t!=-1||C[i-1]!='A'){
					return 0;
				}
					t=i;
					break;
			}
		}
		else{
			return 0;
		}
	}
	if(p!=-1&&t!=-1){
		if(((t-p)-1)*A_left==A_right){
			return 1;
		}
		if((t-p)==2&&A_left==A_right){
			return 1;
		}
	}
	return 0;
}

int main(){
	string C;
	int num;
	int a[20];
	cin>>num;
	for(int i=0;i<num;i++){		
		cin>>C;
		a[i]=PAT(C);  //a[i]记录是否正确 
	}
	for(int i=0;i<num;i++){
		if(a[i]==1){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	} 
	return 0;
}
