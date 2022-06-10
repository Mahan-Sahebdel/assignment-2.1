#include<iostream>
using namespace std;
class convert{
	int x,sum,i=1;
	public:  
		convert(int a){
			x=a;
		}
		int f(){
			while(x>=1){
			sum+=(x%2)*i;
			
			i*=10;
			x=x/2;
			}
			return sum;
		}
		
};
main(){
	int a;
	cout<<"enter number in decimal:";
	cin>>a;
	convert obj(a);
	
	cout<<"binary: "<<obj.f();
}
