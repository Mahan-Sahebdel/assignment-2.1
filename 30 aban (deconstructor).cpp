//Destructor
#include<iostream>
using namespace std;
int count=0;
class alpha{
public:
alpha(){
count++;
cout<<"\n Number of Object Created : "<<count;
}
~alpha(){
cout<<"\n Number of Object Destroyed : "<<count;
count--;
}
};
int main(){
cout<<"\n MAIN \n";
alpha A1, A2, A3, A4;

cout<<"\n \n Block 1\n";
alpha A5;

cout<<"\n \n Block 2\n";
alpha A6;

cout<<"\n\n Again MAIN \n";

return 0;

}
