#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   double a,b,c,s,area,x,y,z;
   cin>>a>>b>>c;
   s=(a+b+c)/2;
   x=s-a;
   y=s-b;
   z=s-c;
   area=sqrt(s*x*y*z);
   cout<<area<<endl;
    return 0;
}