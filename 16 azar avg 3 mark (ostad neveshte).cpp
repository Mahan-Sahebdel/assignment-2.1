#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class student{
protected:
string name;
int rollnumber;

public:
void getnumber(){
cout<<"Enter the Name : ";
cin>>name;
cout<<"\nEnter the Roll Number : ";
cin>>rollnumber;
}
void showNumber(){
cout<<"\n\nName : "<<name;
cout<<"\nRoll number : "<<rollnumber;
}

};

class test : public student{
protected:
float mark1, mark2, mark3;

public:
void getmarks(){
cout<<"\nEnter 3 marks :"<<endl;
cin>>mark1>>mark2>>mark3;
}

void showMarks(){
cout<<"\n\nSubject 1 = "<<mark1;
cout<<"\nSubject 2 = "<<mark2;
cout<<"\nSubject 3 = "<<mark3;
}
};

class result : public test{
float avg;
public:
void showAverage(){
avg=(mark1+mark2+mark3)/3;
cout<<"\n\nThe Average is = "<<avg;
}

};

int main(){
result obj;
obj.getnumber();
obj.getmarks();

obj.showNumber();
obj.showMarks();
obj.showAverage();
return 0;
}
