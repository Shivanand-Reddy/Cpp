#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter age of a user:";
  cin>>age;
  
  if(age>=18)
  {
    cout<<"\nYou are eligible to vote";
  }
  else
    cout<<"\nYou are not eligible";
return 0;    
}
