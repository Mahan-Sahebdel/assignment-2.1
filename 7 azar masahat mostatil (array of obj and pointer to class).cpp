#include<iostream>
#include<conio.h>
using namespace std;
class area{
	public:
		int a,b;
		void get(){
			cout<<"enter dimentions:";
			cin>>a>>b;
		}
		int f(){
			
			return a*b;
		}
};
main(){
	area *p;
	area obj[2];
	p=obj;
	for(int i=0;i<=1;i++){
	
	
	
		(p+i) -> get();
	}
	
	for(int j=0;j<=1;j++){
	
	
		cout<<(p+j) -> f()<<endl;
}
	
	
	
	
}
