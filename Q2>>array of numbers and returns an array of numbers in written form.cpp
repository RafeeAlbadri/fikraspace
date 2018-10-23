
// Q2 ,, C++
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
  std:: string num[]={"zero","one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine", "ten"};
  int j=0;
  std:: cout<<"how many digits u will inter?" << "\n";
  
  std::cin>>j;
  char no [j];
  std:: cout<<"enter the number!" << "\n";
  std::cin>>no;
int i=0 ;
 while (i<j){
 
 std:: cout<<num[(no[i]-48)];
 std:: cout<<", ";
 
 i++;
 }
  }
 
