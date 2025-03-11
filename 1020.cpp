#include<iostream>
#include<vector> 
#include <algorithm>
using namespace std;
struct Moon{
	int id;		//几号月饼 
	float ku;		//库存
	float mon;	//价格  	 
};

int main(){
	float N=0,need=0,end=0;
	cin>>N>>need;
	vector <Moon> moon(N);	
	for(int i=0;i<N;i++){
		cin >> moon[i].ku;
        moon[i].id = i;
	}
	for(int i=0;i<N;i++){
		cin >> moon[i].mon;
	}
	sort(moon.begin(),moon.end(), [](const Moon& A,const Moon& B){
		 return (A.mon / A.ku) > (B.mon / B.ku);
	});
	int i=0;
	while(need!=0&&i<N){
		if(moon[i].ku<=need){
			need-=moon[i].ku;
			end+=moon[i].mon;
			i++;

		}else {
			end+=moon[i].mon*(need/moon[i].ku);
			break;
		}
	}
	printf("%.2f",end);
	return 0;
}
