#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  double x1,x2,y1,y2,a,b,z;
  cin>>x1>>x2>>y1>>y2;
  a=x2-x1;
  b=y2-y1;
  z=sqrt(a*a+b*b);
   cout<<z<<endl;

    return 0;
}
