#include<iostream>
using namespace std;
int main()
{
  long int n,r=0,sum =0;
 cin>>n;
sum = n;
  while( n !=0)
  {
     r=r*10;
     r=r+n%10;
     n=n/10;

  }
  if(sum == r)
  {
      cout<<"The Palindrome number is "<<sum<<endl;
  }
  else{

    cout<<"It is not a Palindrome number";
  }
