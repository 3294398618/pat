
#include <iostream>
using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef  struct                     
{ KeyType  key;                                             
} ElemType;  

typedef  struct
{ ElemType  *R; 
  int  length;
} SSTable;                      

void  Create(SSTable &T)
{ int i;
  T.R=new ElemType[MAXSIZE+1];
  cin>>T.length;
  for(i=1;i<=T.length;i++)
     cin>>T.R[i].key;   
}

int  Search_Bin(SSTable T, KeyType k);

int main () 
{  SSTable T;  KeyType k;
   Create(T);
   cin>>k;
   int pos=Search_Bin(T,k);
   if(pos==0) cout<<"NOT FOUND"<<endl;
   else cout<<pos<<endl;
   return 0;
}

/* 请在这里填写答案 */
int  Search_Bin(SSTable T, KeyType k){
    int l=1;
    int r=T.length;
    int mid=r/2;    
    while(T.R[mid].key!=k){
        if(T.R[mid].key>k){
            r=mid-1;
            mid=(r+l)/2;
        }
        if(T.R[mid].key==k) {
			return mid;
		}
        if(T.R[mid].key<k){
            l=mid+1;
            mid=(l+r)/2;
        }
        if(T.R[mid].key==k){
		return mid;
		}
    if(l==r&&T.R[l].key!=k) return 0;
    }    
}
   
