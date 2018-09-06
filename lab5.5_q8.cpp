//include the library files and start the main
#include<iostream>
using namespace std;
int main()
{int i=1,j;
//there are 5 lines so 5 times run the main loop
 while(i<=5)
{//print required no of stars in increasing order
 for(j=0;j<i;j++)
 cout<<"*";cout<<"\n";
 i++;
}
return 0;
}
