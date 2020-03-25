#include <iostream>
using namespace std;
int main()
{
  int r[3][3]={{1,2,3},{5,6,7}};

  for(int row = 0;row<3;row++)
  {
    for(int colulmn = 0;colulmn<3;colulmn++)
    {
      cout<<r[row][colulmn];
    }
    cout<<endl;
  }

  return 0;
}
