#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int a[5]={45,76,23,87,444};
  sort(a,a+5);
  for(int i =0;i<5;i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
