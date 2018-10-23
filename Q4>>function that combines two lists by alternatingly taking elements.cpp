// Q4 C++
#include <iostream>
#include <string>

#include <list>


using namespace std;

int main()
{
    
   char x[5]={'a','b','c','d','e'};
   char y[5]={'1','2','3','4','5'};
   char xy[10];
   
  
   int i=0;
   int j=2;
   while(i<10){
   xy[i+i]=x[i];
   xy[(j-1)+i]=y[i];
   cout << xy[i];
   i++;
   j++;
   }
   
   
   
}
