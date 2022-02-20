#include<iostream>

using namespace std;

int length(char input[])
{
    int count=0;
    for(int i=0; input[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char my_name[50];
    cout<<"Enter your name: ";
    cin>>my_name;
    cout<<my_name<<endl;
    cout<<"Lenght of your name is : ";
    cout<<length(my_name);
    
    return 0;
}
