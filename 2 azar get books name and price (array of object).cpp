#include<iostream>
#include<conio.h>
using namespace std;
class book{
	public:
	string title;
	int price;
	int size;
	
	void get(){
			cin>>title;
			cin>>price;
		}
		void display(){
			cout<<title<<endl;
			cout<<price<<endl;
			}
};
main(){
	int size;
	cout<<"enter books number:";
	cin>>size;
	book obj[size];
	for(int i=0;i<size;i++){
		cout<<"enter title and price:";
		obj[i].get();
	}
	for(int j=0;j<size;j++){
		cout<<"book number"<<j+1<<":"<<'\t';
		obj[j].display();
}

getch();
}
