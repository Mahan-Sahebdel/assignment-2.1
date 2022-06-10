//Constructing 2D Array
#include<iostream>
using namespace std;

class matrix{
int **p;
int d1, d2;

public:
matrix(int x, int y){
d1=x;
d2=y;
p=new int*[d1];
for(int i=0; i<d1; i++){
p[i]=new int[d2];
}
}

void setvalue(int i , int j, int value){
p[i][j]=value;
}

int getvalue(int i , int j){
return p[i][j];
}

int display(int i , int j)
{
return p[i][j];
}
};

int main(){
int m, n;
int i , j, value;
cout<<"What is the size of Matrix? ";
cin>>m>>n;

matrix A(m,n);

cout<<"\n\n Enter matrix elements \n";
for(i=0; i<m; i++)
for(j=0; j<n; j++){
cin>>value;
A.setvalue(i,j,value);
}
cout<<"\n\n MATRIX\n";
for(i=0; i<m; i++){
for(j=0; j<n; j++){
cout<<A.getvalue(i,j)<<"\t";
}
cout<<"\n";
}

cout<<"\n\nValue in position [1][2] : "<<A.display(1,2);

return 0;

}
