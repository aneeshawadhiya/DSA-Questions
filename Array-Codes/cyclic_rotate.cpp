/*
Given an array, rotate the array by one position in clock-wise direction.
*/


#include<iostream>
using namespace std;

int rotate_array(int arr[],int size){
    
    int i,temp = arr[size-1];
    for(i=size-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}


int print_val(int arr[],int size){
    for(int j=0;j<size;j++){
        cout<<arr[j]<<"  ";
    }
}

int main(){
    int n;
    cout<<"Enter no of Elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Given Array : ";
    print_val(arr,n);

    rotate_array(arr,n);
    cout<<"\nRotated Array : ";

    print_val(arr,n);


}