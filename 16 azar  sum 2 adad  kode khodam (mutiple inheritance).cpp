#include<iostream>
#include<conio.h>
using namespace std;
class parent1{
	public:
		int x;
		void get1(){
			cout<<"enter a number:";
			cin>>x;
		}
};
class parent2{
	public:
		int y;
		void get2(){
			cout<<"enter a number:";
			cin>>y;
		}
};
class child : public parent1,public parent2{
	public:
		int sum(){
			return x+y;
		}
};
int main(){
	child obj;
	obj.get1();
	obj.get2();
	cout<<obj.sum();
}
