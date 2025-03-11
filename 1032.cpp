#include<iostream>
using namespace std;
int main(){
	long long N;
	long long add[100001]={0};
	cin>>N;
	long long tmp,p,end=1;
	for(long long i=0;i<=N;i++){
		p=0;tmp=0;
		cin>>tmp>>p;
		add[tmp]+=p; 
	}
	long long max=add[1];
	for(long long i=1;i<=N;i++){
		tmp=add[i];
		if(max<tmp){
			max=tmp;
			end=i;
		}
	}
	cout<<end<<" "<<max;
	return 0;
}
