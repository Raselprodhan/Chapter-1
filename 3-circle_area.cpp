#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double r,area,pi;
    cout<<"Enter a  number "<<endl;
    cin>>r;
    pi = acos(-1.);
    area = pi*r*r;
    cout<<"The circle area is "<<area<<endl;
    return 0;
}
