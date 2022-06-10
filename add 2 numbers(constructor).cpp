#include<iostream>
using namespace std;
class s{
	public:
		int a,b;
		s(int x,int y){
			a=x;
			b=y;
		}
		int add(){
			return a+b;
		}
};
main(){
	int x,y;
	cout<<"enter two numbers:";
	cin>>x>>y;
	s obj(x,y);
	cout<<obj.add();
}
