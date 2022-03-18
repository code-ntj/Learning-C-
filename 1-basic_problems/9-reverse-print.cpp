#include<iostream>

using namespace std;

int main()
{
  
   cout<<"Enter the number of elements in array";
   int array_size;
   cin>>array_size;
   
   int my_array[array_size] {};
   
   cout<<"Enter the elements in array";
   for(int i=0; i<array_size; i++)
   {
       cin>>my_array[i];
       cout<<endl;
   }
   
   cout<<"here is array in reverse order"<<endl;
   for(int i=array_size-1; i>=0; i--)
   {
       cout<<my_array[i]<<endl;
   }
   
   return 0;
}