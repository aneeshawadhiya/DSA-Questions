
/*
Given an array of N integers arr[] where each element represents the max number of steps that can 
be made forward from that element. 
Find the minimum number of jumps to reach the end of the array 
(starting from the first element). If an element is 0, 
then you cannot move through that element.
*/




#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


#define s(x)                        cin>>x
#define forall(i,a,b)               for(int i=a;i<b;i++)


int min_jump(int arr[],int size){

       //Base Case
    if(size<=1){
        cout<<"Cannot jump."<<endl;
    }else if(arr[0] == 0)
        return -1;

    // Max place where we can reach.
    int maxReach = arr[0];
    //Current Jumps we did
    int jump = 1;
    //Steps we can take now as initially we can take steps equal to maxReach
    int step = arr[0];

    //Start moving from position one.

    forall(i,1,size){
        //If we reach the end of the array
        if(i==size-1)
            return jump;
        //as we complete a step
        step--;

        //Update the maxReach
        maxReach = max(maxReach,i+arr[i]);

        //Check if there is no step left
        if(step==0){
            //If there is no step left then we have to make a jump
            jump++;
            if(maxReach <=1)
                return -1;

            step = maxReach - i;
        }

    }
    //we will never reach here
    return -1;

        

}

int main(){
    int n;
    cout<<"Elements : ";
    s(n);
    int arr[n];

    forall(i,0,n){
        cout<<"#"<<i+1<<" : ";
        s(arr[i]);
    }

    cout<<min_jump(arr,n);

}