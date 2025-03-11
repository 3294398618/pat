#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
	int N,P;
	cin>>N>>P;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	long long end=0;
	long long end_M=0;
	sort(A.begin(),A.end());
	for(int i=0;i<N;i++){
		end=0;
		long long m=A[i];
		long long M=A[i]*P;
		for(int j=i;j<N;j++){
			if(A[j]>M){
				break;
			}else {
				end++;
			}
		}
		if(end>end_M){
			end_M=end;
		}
	}
	cout<<end_M;
	return 0;
}
