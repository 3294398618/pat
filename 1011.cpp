#include<iostream>
using namespace std;
int main(){
	long long a[11],b[11],c[11];
	int N=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=0;i<N;i++){
		if((a[i]+b[i])<=c[i]){
			cout<<"Case #"<<i+1<<": false"<<endl;
		}
		else{
			cout<<"Case #"<<i+1<<": true"<<endl;
		}
	}


	return 0;
}
