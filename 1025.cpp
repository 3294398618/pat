#include<iostream>
using namespace std;
struct Node{
	int key;
	int next;
};
Node L[99999]={0,-1}; 

int main(){
	int p,q;
	int per_num=1;
	int strat,N,K;
	cin>>strat>>N>>K;
	for(int i=0;i<99999;i++){
		L[i].key=-1;
		L[i].next=-1;
	}
	for(int i=0;i<N;i++){
		int tmp=0;
		cin>>tmp;
		cin>>L[tmp].key>>L[tmp].next;
	}
	int pre_end=strat;
	p=strat;
	q=L[p].next;
	L[p].next=-1;
	while(L[q].next!=-1){
		int tmp=L[q].next;
		L[q].next=p;
		p=q;
		q=tmp;
		//最后q指向K后面一个 
		per_num++;
		strat=p;
		if(L[p].key==K){
			strat=p;
			if((N-per_num)>=K){
				p=q;
				q=L[p].next;
				L[p].next=-1;
				while(L[q].next!=-1){
					int tmp=L[q].next;
					L[q].next=p;
					p=q;
					q=tmp;
				}
				L[q].next=p;
				p=q;
				L[pre_end].next=p;
			}else{
				L[pre_end].next=q;
			}
			
			break;
		}
	}
	p=strat;
	while(L[p].next!=-1){
		printf("%05d %d %05d\n",p,L[p].key,L[p].next);
		//cout<<p<<" "<<L[p].key<<" "<<L[p].next<<"\n";
		p=L[p].next;	
	}
	printf("%05d %d -1\n",p,L[p].key);
	return 0;
}
