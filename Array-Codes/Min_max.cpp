
//Find the maximum and minimum element in an array


#include<iostream>

using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getminmax(int arr[],int size){
    struct Pair minmax;

    if(size==1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }

    if(arr[0]<arr[1]){
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    else{
        minmax.max = arr[0];
        minmax.min = arr[1];
    }

    for(int i = 2 ;i < size ;i++){
        if(arr[i]>minmax.max)
            minmax.max = arr[i];
        else if (arr[i]<minmax.min)
            minmax.min = arr[i];
    }
    return minmax;
}

int print_string(int arr[],int size){
   for(int j = 0 ; j<size;j++)
      cout<<arr[j]<<"  "; 
    cout<<endl;
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

   print_string(arr,n);

   struct Pair minmax = getminmax(arr,n);

   cout<<"Max Value : "<<minmax.max<<endl;
   cout<<"Min Value : "<<minmax.min<<endl;

   return 0;
   
};