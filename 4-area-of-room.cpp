#include<iostream>

using namespace std;

int main()
{
    int width {0};
    int length {0};

    cout<<"Enter the width of the room ";
    cin>>width;
    cout<<"Enter the length of the room ";
    cin>>length;

    cout<<"Area of the room is "<<width*length<<" square feet";
    return 0;
}