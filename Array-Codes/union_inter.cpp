//Find the Union and Intersection of the two sorted arrays.




#include<iostream>
using namespace std; 


int find_union(int arr1[],int arr2[],int size){
    int i=0,j=0;
    cout<<"Union of both :  ";
    while(i<size && j<size){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<"  ";
            i++;
        }
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<"  ";
            j++;
        }
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<"  ";
            i++;
            j++;
        }
        else
        {
             cout<<arr1[i]<<" ";
              cout<<arr2[j]<<" ";
        }
    }
}


int find_inter(int arr1[],int arr2[],int size){
    int i=0,j=0;
    cout<<"\nIntersection of both :  ";
    while(i<size && j<size){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}


int main()
{
    int n;

    cout<<"Enter no of Elements in Array : ";
    cin>>n;
    int arr1[n],arr2[n];

    // Taking input in Arr-1
   cout<<"Enter First sorted Array :  ";
   for(int i = 0 ; i < n ; i++){
      cout<<"> ";
      cin>>arr1[i];
   }

    // Taking input in Arr-2
   cout<<"Enter Second sorted Array :  ";
   for(int i = 0 ; i < n ; i++){
      cout<<"> ";
      cin>>arr2[i];
   }

    find_union(arr1,arr2,n);
    find_inter(arr1,arr2,n);

 
};