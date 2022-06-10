#include<iostream>
#include<conio.h>
using namespace std;
class parent{
	public:
	int x=1;
	void show1(){
		cout<<"x:"<<x<<endl;
	}
};
class child : public parent{
	public:
		int y=2;
		void show2(){
			cout<<"y:"<<y<<endl;
		}
		
};
class grandchild : public child{
	public:
	int z=3;
	void show3(){
		cout<<"z:"<<z;
	}
};
main(){
	
	grandchild obj2;
	obj2.show1();
	obj2.show2();
	obj2.show3();
	
	getch();
	
}
