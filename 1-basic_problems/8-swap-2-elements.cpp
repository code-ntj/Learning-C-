#include<iostream>

using namespace std;

int main()
{
  
    cout<<"Enter the value of a"<<endl;
    int a;
    
    cin>>a;
    
    cout<<"Enter the value of b"<<endl;
    int b;
    cin>>b;
    
    cout<<"now value of a and b will be swapped"<<endl;
    
    int temp;
    
    // with the help of temperary varriable
    // temp=a;
    // a=b;
    // b=temp;
    
    // without the extra varriable
    
    // a=a+b;
    // b=a-b;
    // a=a-b;
    
    // with xor
    // a=a^b;
    // b=a^b;
    // a=a^b;
   
    // using swap function
    
    swap(a,b);
   
    cout<<"new value of a is "<<a<<endl;
    cout<<"new value of b is "<<b;
    
    return 0;
  
}