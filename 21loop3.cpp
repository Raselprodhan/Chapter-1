#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,EOF;
    //odd number
    for( int i = 1; i<=10;i++)
    {
        if(i % 2==0)
        continue;
        cout<<i<<endl;

    }
    //prints 1 to 5
    for(int i = 1; i<=10; i++)
    {
        if(i>5)
            break;
        cout<<i<<endl;
    }
   
    return 0;

}