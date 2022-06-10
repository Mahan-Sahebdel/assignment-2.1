#include<iostream>
#include<conio.h>
using namespace std;
class student{
	public:
		string name;
		void getname(){
			cout<<"please enter student name:";
			cin>>name;
		}
};
class test : public student{
	public:
		int a,b,c;
		void getmark(){
			cout<<"please enter student marks(3 marks):";
			cin>>a>>b>>c;
		}
};
class result : public test{
	public:
		
	float avg(){
		cout<<"student marks avg:";
		return (a+b+c)/3;
	}
};
int main(){
	result obj;
	obj.getname();
	obj.getmark();
	cout<<obj.avg();
}
