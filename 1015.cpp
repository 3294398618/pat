#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Student{
	int id;
	int d;
	int c;
};
int main(){
//�·ֺͲŷ־�������H�ı�����Ϊ���ŵ�ȫ����
//�ŷֲ���H���·ֵ�����¼ȡ�ߵ�һ�࿼�����ڡ���ʤ�š�
//�²ŷ־����� H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š���
//���� 
int N,L,H;
	vector<Student> A1; 
	vector<Student> A2;
	vector<Student> A3;
	vector<Student> A4;
	cin>>N>>L>>H;
	int M=N;
	for(int i=0;i<N;i++){
		int id=0,d=0,c=0;
		cin>>id>>d>>c;
		if(d<L||c<L){
			M--;
			continue;
		}else if(d>=H&&c>=H){
			A1.push_back({id,d,c});
		}else if(d>=H&&c<H){
			A2.push_back({id,d,c});
		}else if(d>=c){
			A3.push_back({id,d,c});
		}else{
			A4.push_back({id,d,c});
		}
	}
	  // ���ɼ��������򣨳ɼ���ͬ��ѧ������
    sort(A1.begin(), A1.end(), [](const Student& a, const Student& b) {
            if (a.d+a.c != b.d+b.c) return (a.d+a.c)>(b.d+b.c);
            if (a.d+a.c==b.d+b.c&&a.d!=b.d) return a.d>b.d;
			return a.id<b.id;
        }
    );
    sort(A2.begin(), A2.end(), [](const Student& a, const Student& b) {
            if (a.d+a.c != b.d+b.c) return (a.d+a.c)>(b.d+b.c);
            if (a.d+a.c==b.d+b.c&&a.d!=b.d) return a.d>b.d;
			return a.id<b.id;
        }
    );
    sort(A3.begin(), A3.end(), [](const Student& a, const Student& b) {
            if (a.d+a.c != b.d+b.c) return (a.d+a.c)>(b.d+b.c);
            if (a.d+a.c==b.d+b.c&&a.d!=b.d) return a.d>b.d;
			return a.id<b.id;
        }
    );
    sort(A4.begin(), A4.end(), [](const Student& a, const Student& b) {
            if (a.d+a.c != b.d+b.c) return (a.d+a.c)>(b.d+b.c);
            if (a.d+a.c==b.d+b.c&&a.d!=b.d) return a.d>b.d;
			return a.id<b.id;
        }
    );
    cout<<M<<endl;
    for (const auto& s : A1) {
        cout << s.id << " " << s.d<<" "<<s.c << std::endl;
    }
    for (const auto& s : A2) {
        cout << s.id << " " << s.d<<" "<<s.c << std::endl;
    }
    for (const auto& s : A3) {
        cout << s.id << " " << s.d<<" "<<s.c << std::endl;
    }
    for (const auto& s : A4) {
        cout << s.id << " " << s.d<<" "<<s.c << std::endl;
    }
	return 0;
} 
