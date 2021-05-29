/*
An array contains both positive and negative numbers in random order. 
Rearrange the array elements so that all negative numbers appear before all positive numbers.
*/

#include<iostream>
using namespace std;

int move_negative(int arr[],int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i] < 0)
            if(i!=j){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                j++;
            }
    }
    cout<<"Resultant Array : ";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

}

int main(){
    int n;
    cout<<"Enter number of elements you want :  ";
   cin>>n;
   int arr[n];

   for(int i = 0 ; i < n ; i++){
      cout<<"Enter Elements "<<i+1<<": ";
      cin>>arr[i];
   }

    move_negative(arr,n);
   

}