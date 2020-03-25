#include <iostream>
using namespace std;

class student
{
  char name[20];
  int n;
public:
  void getdata(void);
  void display(void);
};
void student ::getdata(void)
{
  cout<<"Enter name:"<<endl;
  cin>>name;
  cout<<"Enter age:"<<endl;
  cin>>n;
}
void student ::display(void)
{
  cout << "Name :"<<name<<endl;
  cout << "age :"<<n<<endl;
}
int main()
{
  student p;
  p.getdata();
  p.display();

  return 0;
}
