//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

#include<iostream>
using namespace std;


int find_array(int arr[],int size){

    int max_till_now = 0, max_ending_here = 0;
    for(int i=0;i<size;i++){
        	max_ending_here = max_ending_here + arr[i];
            if(max_ending_here<=max_till_now){
                max_ending_here =0;
                max_till_now = 0;
            }
            else
                max_till_now = max_ending_here;
    }
    cout<<"\nLargest sum contiguous Subarray is : "<<max_till_now;
    
}

int main(){

    int n;
    cout<<"Enter the no of Elements in Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"> ";
        cin>>arr[i];
    }

    find_array(arr,n);

    return 0;
}