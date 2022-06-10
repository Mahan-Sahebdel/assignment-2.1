#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one{
	int x;
	public:
	void setvalue(int i){
		x=i;
		
	}
	friend void swap(one,two);
	
};
class two{
	int a;
	public:
		void setvalue(int i){
			a=i;
			
		}
		friend void swap(one,two);
		
};
void swap(one o1,two o2){
	int temp;
	temp=o1.x;
	o1.x=o2.a;
	o2.a=temp;
	cout<<"after swap:"<<o1.x<<endl<<o2.a;
}

int main(){
	int i,j;
	cout<<"enter two numbers to swap:";
	cin>>i>>j;
	
	one obj;
	obj.setvalue(i);
	
	two obj2;
	obj2.setvalue(j);
	
	swap(obj,obj2);
	
	
	
	
}
