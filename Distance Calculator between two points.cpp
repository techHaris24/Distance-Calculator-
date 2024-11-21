#include<math.h>
#include<iostream>
using namespace std;
int main()
{
float x1,x2,y1,y2,x,y,d;
cout<<"Enter value of x1"<<endl;
cin>>x1;
cout<<"Enter value of x2"<<endl;
cin>>x2;
cout<<"Enter value of y1"<<endl;
cin>>y1;
cout<<"Enter value of y2"<<endl;
cin>>y2;
x=x2-x1;
y=y2-y1;
d=(x*x)+(y*y);
cout<<"Distance between two points (x1,y1) and (x2,y2) is "<<sqrt(d);
return 0;
}
