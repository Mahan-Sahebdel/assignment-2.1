#include<iostream>
#include<conio.h>
using namespace std;
class wall{
	int x,y;
	public:
	wall(int m,int n){
		x=n;
		y=m;
	}
	void area(){
		cout<<x*y;
	}
};
int main(){
	int m,n;
	cout<<"enter dimentions:";
	cin>>n>>m;
	wall c(n,m);
	c.area();
	
}
