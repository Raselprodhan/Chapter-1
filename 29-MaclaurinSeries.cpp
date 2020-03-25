#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  float power,ans=1,temp=1;
  cout<<"Enter the number"<<endl;
  cin>>power;
  for(int i = 1; i<4;i++)
  {
    temp=(temp*power)/i;
    ans=ans+temp;
  }
  cout<<"The sum of series "<<ans;
  return 0;
}
