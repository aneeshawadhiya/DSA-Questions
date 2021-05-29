/*
Given an array arr[] and a number K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
*/



#include<iostream>

using namespace std;


int selection_sort(int arr[],int size){
    int temp;
    cout<<"Sorted Array : ";
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int kth_element(int arr[],int size, int k){
    int kth_min = arr[k-1];
    int kth_max = arr[size-k];
    cout<<"\nKth_Min Element : "<<kth_min;
    cout<<"\nKth_Max Element : "<<kth_max;

}

int print_string(int arr[],int size){
   for(int j = 0 ; j<size;j++)
      cout<<arr[j]<<"  "; 
    cout<<endl;
}

int main()
{
   int n,k,kth_min = 0,kth_max=0;
   cout<<"Enter number of elements you want :  ";
   cin>>n;
   int arr[n];

   for(int i = 0 ; i < n ; i++){
      cout<<"Enter Elements "<<i+1<<": ";
      cin>>arr[i];
   }
    cout<<"Given Array :  ";
   print_string(arr,n);

   selection_sort(arr,n);

   //print_string(arr,n);
   cout<<"\nEnter the value of K to find Kth element : ";
   cin>>k;

   kth_element(arr,n,k);

   return 0;
   
};