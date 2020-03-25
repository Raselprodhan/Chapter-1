#include <iostream>
#include<cstring>
using namespace std;
int main()
{
  int a[7];
  memset(a,0,sizeof(a));
  for(int i = 0;i<7;i++)
    cout<<a[i]<<"\t";

    cout<<endl;

    //inisialize 1
    memset(a,-1,sizeof(a));
    for(int i = 0;i<7;i++)
    cout<<a[i]<<"\t";

  return 0;
}
