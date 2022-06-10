#include <iostream>
using namespace std;
class Student {
int Id;
string Name;

public:
Student getdata(int n, string s){
Student obj;
obj.Id = n;
obj.Name = s;
return obj;
}

void display(Student obj){
cout<<"Name: "<<obj.Name<<endl;
cout<<"Id: "<<obj.Id<<endl;
}
};
int main() {
Student s;
s = s.getdata(1001, "Ishaan");
s.display(s);
return 0;
}
