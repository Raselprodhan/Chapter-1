#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin>>ch;
  if('a' <= ch && ch <='z'){
  cout<<ch<<" is a small number";
}
else if('A' <= ch && ch <='Z'){
  cout<<ch<<" is a capital number";
}
else if ('0' <= ch && ch <='9')
{
  cout<<ch<<" is a number";
}
else
cout<<ch<<" is other character";

  return 0;
}
