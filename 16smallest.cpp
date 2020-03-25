#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c)
    {
       cout<<"the smallest number is:"<<a<<endl;

    }
    else if(b<a && b<c)
    {
        cout<<"the smallest number is:"<<b<<endl;
    }
    else
        cout<<"the smallest number is:"<<c;



    return 0;
}