#include <iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"enter number of elements: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of an array: ";
        cin>>arr[i];
    }
    cout<<"enter key: ";
    cin>>key;


    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        count++;
    }
    cout<<"frequency= "<<count;
    return 0;
}