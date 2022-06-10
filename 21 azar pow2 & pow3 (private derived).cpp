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
class pow2: private number{
	public:
	
	
	int x(){
		get();
		return r()*r()  ;
	}
};
class pow3:private number{
	public:
    
	int b(){
		get();
		return r()*r()*r() ;
	}
};
main(){
	pow2 o2;
	pow3 o3;
	
    
	cout<<o2.x()<<endl;
	
    
	cout<<o3.b();
	getch();
}
