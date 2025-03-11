#include<iostream>
#include<string>
using namespace std;
int main(){
	string A,B,end;
	int map[37]={0};///0~9保存0~9，，，11~36保存A~B;  10保存_; 

	int a=0,b=0;
	cin>>A>>B;
	while(a<A.length()&&b<B.length()){
		if(A[a]==B[b]){
			a++;
			b++;
		}else{
			end+=A[a];
			a++;
		}
	}
    while (a < A.length()) {
        end += A[a];
        a++;
    }	
	for(int i=0;i<end.length();i++){
		if(end[i]>='0'&&end[i]<='9'){
			int tmp=end[i]-'0';
			if(map[tmp]>0){
				continue;
			}
		}else if(end[i]>='A'&&end[i]<='Z'){
			int tmp=end[i]-'A'+1;
			tmp+=10;
			if(map[tmp]>0){
				continue;
			}
		}else if(end[i]>='a'&&end[i]<='z'){
			int tmp=end[i]-'a'+1;
			tmp+=10;
			if(map[tmp]>0){
				continue;
			}
		}else if(end[i]=='_'){
			if(map[10]>0){
				continue;
			}
		}
		//输出 
		if(end[i]>='a'&&end[i]<='z'){
			char tmp=(end[i]-'a'+'A');
			cout<<tmp; 
		}else{
			cout<<end[i];
		}
		
		if(end[i]>='0'&&end[i]<='9'){
			int tmp=end[i]-'0';
			map[tmp]++;
		}else if(end[i]>='A'&&end[i]<='Z'){
			int tmp=end[i]-'A'+1;
			tmp+=10;
			map[tmp]++;
		}else if(end[i]>='a'&&end[i]<='z'){
			int tmp=end[i]-'a'+1;
			tmp+=10;
			map[tmp]++;
		} else if(end[i]=='_'){
			map[10]++;
		}
	}
	

	return 0;
}
