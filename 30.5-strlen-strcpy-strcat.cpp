#include <iostream>
#include<cstring>
using namespace std;
int main()
{
  char c1[90]="Adit, sagor k instagram dekhaiya khrp banaitese.";
  char c2[90]="Tanshed, ami asob dekhi na but lastnight akto deksilm";
  cout<<"First string length "<<strlen(c1)<<endl <<"Second string length "<<strlen(c2)<<endl;
 //strcmp
 cout<<"strcmp "<<strcmp(c2,c1)<<endl;
 //strcat
 cout<<"strcat "<<strcat(c1,c2)<<endl;
 //strcpy
 cout<<"strcpy "<<strcpy(c1,c2);
  return 0;
}
