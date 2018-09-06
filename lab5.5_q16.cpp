//include the library functions and start with the main
#include<iostream>
using namespace std;
int main()
{int i=1,j;
//run the main loop 5 times
 while(i<=5)
 {//print the no of spaces required in decreasing order
	for(j=0;j<(5-i);j++)
	 cout<<" ";
  //print the required no of stars	
	for(j=((2*i)-1);j>0;j--)
	 cout<<"*";
	
  cout<<"\n";
  i++;
 }
return 0;
}
