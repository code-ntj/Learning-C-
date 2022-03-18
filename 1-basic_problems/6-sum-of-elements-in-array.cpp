#include<iostream>
using namespace std;

int main()
{
    cout<<"How many number of elements do you wnant to add?"<<endl;
    int array_aize;
    cin>>array_aize;
    
    int a[array_aize] {};

    cout<<"Enter the integers one by one"<<endl;

    for(int i=0;i<array_aize;i++)
    {
        cin>>a[i];
        cout<<endl;
    }

    int sum=0;
    for(int j=0;j<array_aize;j++)
    {
        sum= sum+a[j];
       
    }

    cout<<"The sum of the integers is: "<<sum;

    return 0;

}