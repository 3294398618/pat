#include<iostream>
#include<string>
using namespace std;
int main(){
	string num,end;
	char N;
	cin>>num>>N;
	int tmp=0,yu=0;
	int p=N-'0';
	for(int i=0;i<num.length();i++){
		tmp+=num[i]-'0';
		//printf("tmp1=%d\n",tmp);
		if(!(end.empty()&&tmp/p==0)){
			end+=tmp/p+'0';	
		}
		
		if(i==(num.length()-1)){
			yu=tmp%p;
		}
		//printf("end%d=%c\n",i,end[i]);
		tmp=tmp%p;
		//printf("tmp2=%d\n",tmp);
		tmp=tmp*10; 
		//printf("tmp3=%d\n",tmp);
	}
	bool leadingZero = true;
	for (int i = 0; i < end.length(); ++i) {
	    if (leadingZero && end[i] == '0') {
	        continue; // 跳过前导零
	    }
	    leadingZero = false;
	    cout << end[i];
	}
	if (leadingZero) { // 如果全是零，则输出一个零
	    cout << '0';
	}
	cout<<" "<<tmp/10<<endl;
	return 0;
}
