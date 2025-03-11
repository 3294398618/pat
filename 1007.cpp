#include<iostream>

using namespace std;
int main(){
	int end=0,num=0,tmp=-1; 
	cin>>num;
    if (num < 2) {
        cout << 0 << endl; // 小于 2 没有素数
        return 0;
    }	
	//输出相邻的素数且差为2的个数
	for(int i=num;i>=2;i--){
		int j=i-1;
		while(j>1){
			if(i%j==0){
				j=-1;   //表示i不是素数 
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
