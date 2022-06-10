#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
	public:
		int age;
		string name;
};
int main(){
	myclass obj;
	cout<<"enter your age:";
	cin>>obj.age;
	cout<<"enter your name:";
	cin>>obj.name;
	
	cout<<obj.age<<"\t"<<obj.name;
}
