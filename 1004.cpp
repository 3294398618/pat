#include<iostream>
using namespace std;
int main(){
	string name[100];
	string cod[100];
	int num,max=-1,min=101;
	int max_i=0,min_i=0;
	cin>>num;
	for(int i=1;i<=num;i++){
		int tmp=0;
		cin>>name[i]>>cod[i]>>tmp;
		if(tmp>max) {
			max=tmp; max_i=i;
		}
		if(tmp<min){
			min=tmp; min_i=i;
		}
	}
	cout<<name[max_i]<<" "<<cod[max_i]<<endl;
	cout<<name[min_i]<<" "<<cod[min_i]<<endl;
	return 0;
	
}
