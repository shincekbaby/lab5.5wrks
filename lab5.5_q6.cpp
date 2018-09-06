//include the library files and start the main
#include<iostream>
using namespace std;
int main()
{int i,j;
 //run loop 5 times
 for(i=0;i<5;i++)
 {//print required no of spaces
   for(j=0;j<i;j++)
  cout<<" ";
  //print the constant no of stars
  for(j=0;j<5;j++)
   cout<<"*";
  cout<<"\n";
 }
return 0;
}
