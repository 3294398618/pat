#include<iostream>
using namespace std;
int main(){
	int h,m,s;
	unsing long long
	long long C1,C2;
	cin>>C1>>C2;
	C2=C2-C1;
	C2=C2/100;
	h=C2/(60*60);
	m=C2%(60*60)/60;
	s=C2%60;
	if(C2%100>=50){
		s++;
	}
	if(s==60){
		s=0;
		m++;
	}
	if(m==60){
		m=0;
		h++;
	}
	printf("%02d:%02d:%02d",h,m,s); 
	return 0;
}
