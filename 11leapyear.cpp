#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int year;
  cin>>year;
  if(year % 400==0 || year % 100 !=0 && year % 4==0)
  {
      cout<<"leap year"<<endl;

  }
  else
    cout<<"not leap year";
    return 0;
}
