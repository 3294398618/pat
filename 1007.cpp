#include<iostream>

using namespace std;
int main(){
	int end=0,num=0,tmp=-1; 
	cin>>num;
    if (num < 2) {
        cout << 0 << endl; // С�� 2 û������
        return 0;
    }	
	//������ڵ������Ҳ�Ϊ2�ĸ���
	for(int i=num;i>=2;i--){
		int j=i-1;
		while(j>1){
			if(i%j==0){
				j=-1;   //��ʾi�������� 
			}
			j--;
		}
		if(tmp!=-1&&j!=-2&&(tmp-i)==2){
			end++;
		}
		if(j!=-2){
			tmp=i;
		} 
	} 
	cout<<end;
	return 0;
}
