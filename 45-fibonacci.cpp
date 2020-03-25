#include <iostream>
using namespace std;
int main()
{
  int n,a=0,b=1,c;
  cout<<"Enter a positive number:";
  cin>>n;
  for(int i = 2;i<=n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  cout<<"Factorial of "<<n<<" is "<<b<<endl;
  return 0;
}
