#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	int num,s,b,n;
	cin>>num;
	n=num%10;
	s=num/10%10;
	b=num/100;
	while(b>0){
		cout<<"B";
		b--;
	} 
	while(s>0){
		cout<<"S";
		s--;
	} 
	int i=1;
	while(n>0){
		cout<<i;
		n--;
		i++;
	} 
	return 0;
} 
