/*
Reverse the array
*/


#include<iostream>

using namespace std;

int reverse_string(int arr[],int start,int end){
   while(start<end){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
}


int print_string(int arr[],int size){
   for(int j = 0 ; j<size;j++)
      cout<<arr[j]<<"  "; 
}

int main()
{
   int n;
   cout<<"Enter number of elements you want :  ";
   cin>>n;
   int arr[n];

   for(int i = 0 ; i < n ; i++){
      cout<<"Enter Elements "<<i+1<<": ";
      cin>>arr[i];
   }

   //Print Original Array 
   print_string(arr, n );
   cout<<"\n";
   //Reversing the String
   reverse_string(arr, 0 , n-1);

   //Print Reversed String 
   print_string(arr,n);

   
};