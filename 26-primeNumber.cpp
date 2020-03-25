#include <iostream>
using namespace std;
int main(){
  int n, fac=0;
  cout<<"Enter a number"<<endl;
  cin>>n;
  for(int i = 2; i <= n/2; i++){
    if(n % i == 0)
      fac++;
  }

  if(fac == 0)
    cout<<n<<" is a prime number";
  else
    cout<<n<<" is not a prime number";

  return 0;
}
