#include<iostream>
#include<string> 
using namespace std;
int main(){
	bool big=true;
	bool dol=true;
	bool dian=true;
	bool jia=true;
	bool jian=true;  //��ʾ��д��λ״̬ 
	int ok[37]={0};    //0~9  �������֣�11~36 ������ĸ    ����1��ʾ�ػ��� 
	string S_1,S_2;
	getline(cin,S_1);

	getline(cin,S_2);
	
	for(auto i:S_1){
		if(i=='.'){
			
			dian=false;
		}else if(i==','){
			
			dol=false;
		}else if(i=='+'){
			big=false;
			jia=false;
		}else if(i=='-'){
			
			jian=false;
		}else if(i>='0'&&i<='9'){
			int tmp=i-'0';
			ok[tmp]=1;
		} else if(i=='_'){
			ok[10]=1;
		}else {
			int tmp=0;
			if(i<='Z'&&i>='A'){
				 tmp=i-'A';
			} else if(i>='a'&&i<='z'){
				 tmp=i-'a';
			}
			tmp+=11;
			ok[tmp]=1;
		}
	
	
	}
	bool hasOutput=false;
	//���
	for(auto i:S_2){
		if(i=='.'&&dian==false){
			continue;
		}
		if(i==','&&dol==false){
			continue;
		}
		if(i=='+'&&jia==false){
			continue;
		}
		if(i=='-'&&jian==false){
			continue;
		}
		if(i<='Z'&&i>='A'&&big==false){
			continue;
		} 
		if(i>='0'&&i<='9'){
			int tmp=i-'0';
			if(ok[tmp]==1){
				continue;
			}
		}
		if(i=='_'&&ok[10]==1){
			continue;
		}
		if(i<='Z'&&i>='A'){
			int tmp=i-'A';
			tmp+=11;
			if(ok[tmp]==1){
				continue;
			}
		}
		if(i<='z'&&i>='a'){
			int tmp=i-'a';
			tmp+=11;
			if(ok[tmp]==1){
				continue;
			}
		}
		cout<<i;
		hasOutput=true;
	}	
    if(hasOutput==false){
        cout << endl;
    }
	
	return 0;
}
//С��S_1����Ϊ�� 
