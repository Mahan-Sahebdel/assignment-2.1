#include<iostream>
#include<conio.h>
using namespace std;
class number{
	private:
	int a;
	public:
	void get(){
		cout<<"enter a number please:";
		cin>>a;
		}
	
		int r(){
		return a;
	}

};
class pow2: public number{
	public:
	
	
	int x(){
		return r()*r()  ;
	}
};
class pow3:public number{
	public:
    
	int b(){
		return r()*r()*r() ;
	}
};
main(){
	pow2 o2;
	pow3 o3;
	
    o2.get();
	cout<<o2.x()<<endl;
	
    o3.get();
	cout<<o3.b();
	getch();
}
