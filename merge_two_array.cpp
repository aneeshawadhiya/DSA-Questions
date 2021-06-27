// Merge two sorted arrays in O(1) space
#include <bits/stdc++.h>
using namespace std;

//-------------Brute Approch-------------
// In this funtion we have used basic approch 
// Steps:
// 1. Create newArray[] of size m+n (size of (a) & (b)).
// 2. Copy all the elements of a[] & b[] to newArray[].
// 3. Sort the newArray[].
// 4. Start filling back a[] & b[]
// 5. Hence we will get both as sorted array

int mergeArray(int *a, int *b, int m, int n)
{
    int totalSize = m + n;
    
    int newArray[totalSize];
    int j = 0;
    for (int i = 0; i < totalSize; i++)
    {
        // (i < m) ? newArray[i] = a[i] : newArray[i] = b[i];
        if(i<m)
            newArray[i] = a[i];
        else if(i<totalSize){
             newArray[i] = b[j];
             j++;
        }
    }

    cout<<"\n-------------Brute Approch-------------"<<endl;

    cout<<"Total size of new array is : "<<totalSize;
    //Printing the MergedArray
    cout<<"\nNew Array : ";
    for (int i = 0; i < totalSize; i++)
    {
        cout<<newArray[i]<<"  ";
    }

    sort(newArray,newArray+totalSize);

    cout<<"\nSorted New Array : ";
    for (int i = 0; i < totalSize; i++)
    { 
        cout<<newArray[i]<<"  ";
    }

    j = 0;
    for (int i = 0; i < totalSize; i++)
    {
        if(i<m)
           a[i] = newArray[i] ;
        else if(i<totalSize){
            b[j] = newArray[i] ;
            j++;
        }
    }

    //Printing Both arrays after sorting
    cout<<endl;
    cout<<"Both array after Sorting : ";
    j=0;
    cout<<endl;
    cout<<"[A] : ";
    for (int i = 0; i < m; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"[B] : ";
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    
    
    

}


//-------------Better Approch-------------
// In this funtion we have used Better approch to sort arrays
// Rule : This approch is based on the fact that both the array will be sorted . 
// Steps:
// 1. Traverse through array A[]
// 2. Check for condition if(A[i]>B[j]), where j=0 (first index of array B[])
// 3. Swap (A[i],B[j]) if condition falls true. 
// 4. Sort the B[] after every swap
// 5. Repeat for other element in A[].

int sort_array(int* a,int* b,int m,int n){
    int j=0;
    for (int i = 0; i < m; i++)
    {
        if(a[i]>b[j])
            swap(a[i],b[j]);
        
        sort(b,b+n);
    }
    cout<<"\n-------------Better Approch-------------"<<endl;
    cout<<"[A] : ";
    for (int i = 0; i < m; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"[B] : ";
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    
}



int main()
{
    int a[5] = {1, 4, 7, 8, 10};
    int b[3] = {2, 3, 9};

    //Using Brute Approch
    mergeArray(a,b,5,3);

    //Using Better Approch
    sort_array(a,b,5,3);

    return 0;
}