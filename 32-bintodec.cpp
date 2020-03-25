#include <iostream>
using namespace std;
int main()
{
  int n,bin=0,i=1;
  cout<<"Enter a decimal numbner :"<<endl;
  cin>>n;
  while( n !=0)
  {
    bin=bin+(n%2)*i;
    n=n/2;
    i=i*10;
  }
  cout<<"The binary is :"<<bin<<endl;
  return 0;
}
