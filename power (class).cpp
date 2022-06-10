#include<iostream>
#include<conio.h>
using namespace std;
class car{
	public:
		int print(int );
	
};
int car::print(int a){
	return a*a;
}
int main(){
	int x;
	cin>>x;
	car obj;
	cout<<obj.print(x);
	
	
}
