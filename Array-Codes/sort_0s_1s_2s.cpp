// Sort an array of 0’s 1’s 2’s without using extra space or sorting algo

#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

// Here we will try to sort the array to get the output
int sorting(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        //If element is 0
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        //If element is 1
        case 1:
            mid++;
            break;

        //If element is 2
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// In this method we'll be counting the number of elements and then fill the element into arr
// according to our count.
int count(int arr[], int size)
{
    int zeroes = 0;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zeroes++;
        else if (arr[i] == 1)
            ones++;
        else if (arr[i] == 2)
            twos++;
    }
    for (int i = 0; i < size; i++)
    {
        if (i < zeroes)
            arr[i] = 0;
        else if (i < (zeroes + ones))
            arr[i] = 1;
        else if (i < (zeroes + ones + twos))
            arr[i] = 2;
    }
    cout << "New Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int main()
{
    int arr[20] = {0, 1, 1, 2, 2, 0, 2, 0, 2, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1};
    //count(arr,20);
    sorting(arr, 20);
    return 0;
}