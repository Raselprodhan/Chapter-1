#include <iostream>
using namespace std;

  int grade(int marks)
  {
    if(marks >=80)
    {
      return 5;
    }
    else if(marks >=60)
    {
      return 4;
    }
    else if(marks >=50)
    {
      return 3;
    }
    else if(marks >=40)
    {
      return 2;
    }
    else if(marks >=33)
    {
      return 1;
    }
    else
    return 0;
    cout<<grade<<endl;
  }
  int main()
  {
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<"The grade is = "<<grade(n)<<endl;
    return 0;

  }
