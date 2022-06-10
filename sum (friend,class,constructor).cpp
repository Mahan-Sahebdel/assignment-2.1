#include<iostream>
using namespace std;

class sum{
    int x,y;
	public:
	
	int z;
	   sum(int a=0,int b=0){
	   	x=a;
	   	y=b;
	   }
	  
	friend sum p(sum o){
	sum ob;
	ob.z=o.x+o.y;
	return ob;
}
void display(sum c){
    cout<<c.z;
}
	};

int main(){
//	int a,b;
	sum obj(10, 20);
	
	sum o1;
	o1=p(obj);
	
	o1.display(o1);
	
		
	}

