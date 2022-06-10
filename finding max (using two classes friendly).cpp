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
	friend void max(one,two);
};
class two{
	int a;
	public:
		void setvalue(int i){
			a=i;
		}
		friend void max(one,two);
};
void max(one o1,two o2){
	if(o1.x>o2.a)
	cout<<"max is:"<<o1.x;
	  else
	  cout<<"max is:"<<o2.a;
    
	}

int main(){
	int i,j;
	cin>>i>>j;
	
	one obj;
	obj.setvalue(i);
	
	two obj2;
	obj2.setvalue(j);
	
	max(obj,obj2);
	
	
	
	
}
