#include<iostream>

using namespace std;

int main()
{
    int a[5] {100};

    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    // cout<<a[2]<<endl;
    // cout<<a[3]<<endl;
    // cout<<a[4]<<endl;

    // for(int i=0;i<5;i++)
    // {
    //     a[i]= i;
    //     cout<<a[i]<<endl;
    // }

        // cout<<sizeof(a[0]);

        // int b[10] {21};

        // for(int j=0;j<10;j++)
        // {
        //     b[j]= j*2;
        //     cout<<b[j]<<endl;
        // }        
        
        int enter_digits[3] {};

        cout<<"Enter you favourate 3 digits"<<endl;

        for(int k=0;k<3;k++)
        {
            cin>>enter_digits[k];
            cout<<endl;
        }

        cout<<"Entered digits are:"<<endl;
        for(int l=0;l<3;l++)
        {
            cout<<enter_digits[l]<<endl;
        }
    return 0;
}