#include<iostream>
using namespace std;
int main()
{
  int n,r=0,i=1;
  cout<<"Enter decimal number "<<endl;
  cin>>n;
  while (n !=0)
  {
   r=r+(n%2)*i;
   n=n/2;
   i*=10;
}
  cout<<"The binary number is "<<r<<endl;
  return 0;
}
