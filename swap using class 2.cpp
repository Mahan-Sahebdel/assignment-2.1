#include<iostream>
using namespace std;

class N2;

class N1{
int value1;

public:
void setvalue(int i){
value1=i;
}

void display(){
cout<<"Vlaue in Class 1 :\t"<<value1<<endl;
}

friend void swap(N1 &, N2 &);
};

class N2{
int value2;

public:
void setvalue(int i){
value2=i;
}
void display(){
cout<<"Vlaue in Class 2 :\t"<<value2<<endl;
}

friend void swap(N1 &, N2 &);
};

void swap(N1 &o1 , N2 &o2){
int temp = o1.value1;
o1.value1 = o2.value2;
o2.value2 = temp;
}


int main(){

int i , j;
cout<<"Enter Two Value: ";
cin>>i>>j;

N1 obj;
obj.setvalue(i);

N2 obj2;
obj2.setvalue(j);

cout<<"Values before Swapping "<<endl;
obj.display();
obj2.display();

swap(obj, obj2);

cout<<"\n\nValues After Swapping "<<endl;
obj.display();
obj2.display();

return 0;
}
