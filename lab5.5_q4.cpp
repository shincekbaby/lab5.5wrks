//include the library functions and start with the main
#include<iostream>
using namespace std;
int main()
{/*print space no in decreasing numbers like 4 3 2 1 0 and no of stars to be printed remains constant */
 int i,j; 
 for(i=5;i>0;i--)
  {for(j=i;j>0;j--)
    {cout<<" ";}
   for(j=5;j>0;j--)
   { cout<<"*";}
    cout<<"\n";
   }
return 0;
}
