#include<iostream>
#include<csrting>

using namespace std;

void print_all_prefixis(char str[])
{
    for(int end=0; str[end]!='\0'; end++)
    {
        for(int start=0; start<=end; start++)
        {
            cout<<str[start];
        }
        cout<<endl;
    }
}


void print_all_prefixis_inreverse(char str[])
{
    for(int end=0; str[end]!='\0'; end++)
    {
        for(int start = strlen(str); start>=end; start--)
        {
            cout<<str[start];
        }
        cout<<endl;
    }
}

int main()
{
    char str[] = "abcdefg";
    print_all_prefixis(str);
    cout<<"in reverse"<<endl;
    print_all_prefixis_inreverse(str);
    return 0;
}
