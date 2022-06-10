#include<iostream>
#include<conio.h>
using namespace std;
class mark{
	public:
		int a[5];
		
		 int set(){
			
			cout<<"enter 5 marks:";
			for(int i=0;i<=4;i++){
				cin>>a[i];
		        			
	     }
	      
		}
		int avg(){
		int sum=0,avg;
		for(int i=0;i<=4;i++){
			sum+=a[i];
			avg=sum/5;
		}
		
		 return avg;
		}
};
main(){
	
	mark obj;
	obj.set();
	cout<<"averange is:"<<obj.avg();
	getch();
}
