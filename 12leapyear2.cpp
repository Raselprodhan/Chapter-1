#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a;
  cin>>a;
  if( a %400==0)
  {
      cout<<"leap year"<<endl;
  }
  else if(a % 100 == 0)
  {
      cout<<"not leap year"<<endl;
  }
  else if( a % 4 == 0)
  {
      cout<<"leap year"<<endl;
  }
  else
  {
      cout<<"not leap year"<<endl;
  }

    return 0;
}
