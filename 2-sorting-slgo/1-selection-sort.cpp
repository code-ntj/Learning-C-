#include<iostream>
#include<climits>

using namespace std;

void selection_sort(int a[], int n) {  
    for(int i=0; i<=n-2; i++) {
        int smallest = i;
        
        for(int j=i+1; j<=n-1; j++) {
            if(a[j] < a[smallest]) {
            smallest= j;
            }
        }
        swap(a[i] , a[smallest]);
    }
        
}

int main() {
    int array_size;
    cout<<"Enter the size of array: ";
    cin>>array_size;

    int my_array[array_size] {};

    cout<<"Enter"<<array_size<<" integers in random order"<<endl;
    for(int i=0; i<array_size; i++) {
        int integer;
        cin>>integer;
        my_array[i]= integer;
    }

    selection_sort(my_array, array_size);

    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<array_size; i++) {
        cout<<my_array[i]<<endl;
    }

    return 0;
}