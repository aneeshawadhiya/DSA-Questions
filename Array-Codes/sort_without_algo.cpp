//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo



#include<iostream>
using namespace std;

int print_arr(int arr[],int size){
    for(int i = 0 ; i<size;i++)
        cout<<arr[i]<<" ";
}

int sort_without_algo(int arr[],int size){
    int sorted_arr[size];
    for(int i=0;i<3;i++){
        for(int j=0;j<size;j++){
            if(arr[j]==i){
                sorted_arr[j] = arr[j];
            }
            else{
                continue;
            }
            cout<<sorted_arr[j]<<" ";
                
        }
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

   cout<<"Given Array  :  ";
   print_arr(arr,n);
   cout<<"\nStarted Sorting without an algorithm......\nPlease wait.... \nSorted without algorithm.\nSorted Array : ";
   sort_without_algo(arr,n);

}