#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	bool day_=false,A3_=false;
	char day,hour;
	int time;
	string A1,A2,A3,A4;
	cin>>A1;
	cin>>A2;
	cin>>A3; 
	cin>>A4;
	for(int i=0;i<min(A1.length(), A2.length());i++){
		if(day_==true&&A1[i]==A2[i]&&((A1[i]>='A'&&A1[i]<='N')||(A1[i]>='0')&&A1[i]<='9')){
			hour=A1[i];
			break;
		}		
		if(A1[i]==A2[i]&&day_==false&&A1[i]<'H'&&A1[i]>'@'){
			day=A1[i];
			day_=true;
		}
		
	}
	for(int i=0;i<A3.length();i++){
		if(A3_==false&&A3[i]==A4[i]&&A3[i]<='Z'&&A3[i]>='A'){
			A3_=true; 
			time=i;
			break;
		}
		if(A3_==false&&A3[i]==A4[i]&&A3[i]<='z'&&A3[i]>='a'){
			A3_=true; 
			time=i;
			break;
		}
	}
	switch(day){
		case 'A':{
			cout<<"MON ";
			break;
		}
		case 'B':{
			cout<<"TUE ";
			break;
		}
		case 'C':{
			cout<<"WED ";
			break;
		}
		case 'D':{
			cout<<"THU ";
			break;
		}
		case 'E':{
			cout<<"FRI ";
			break;
		}
		case 'F':{
			cout<<"SAT ";
			break;
		}
		case 'G':{
			cout<<"SUN ";
			break;
		}
	}
	if(hour>'9'){
		printf("%d",9+hour-'@'); 
	}else{
		printf("0%c",hour);
	}
	cout<<":";
	if(time<10){
		cout<<'0';
	}
	printf("%d",time);
	return 0;
}
