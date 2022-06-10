#include<iostream>
#include<conio.h>
using namespace std;
class sum{
      float x,y;
      public:
      	float z;
      sum(float a=0,float b=0){
      	x=a;
      	y=b;
	  }
	  friend sum add(sum o){
	  	sum ob;
	  	ob.z=o.x+o.y;
	  	return ob;
	  }
    void display(sum c){
    	cout<<c.z;
	}
	  
};


main(){
	float a,b;
	cin>>a>>b;
	sum obj(a,b);
	sum o1;
	o1=add(obj);
	o1.display(o1);
}
