/*

Given an array arr[] denoting heights of N towers and a positive integer K, 
you have to modify the height of each tower either by increasing or decreasing them by K only once. 
After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest 
and longest towers after you have modified each tower.


*/



#include<bits/stdc++.h>
using namespace std;

#define s(x)                        cin>>x
#define forall(i,a,b)               for(int i=a;i<b;i++)



int main(){

    int n,k;
    int max_h=0,min_h=0,ans=0,count=0;
    cout<<"Enter the number of Buildings : ";
    s(n);
    int arr[n];
    cout<<"Enter the value of K : ";
    s(k);

    cout<<"Value of Buildings - \n";
    forall(i,0,n){
        cout<<"#"<<i+1<<" : ";
        s(arr[i]);
    }

    vector<pair <int,int> > pair_vec;
    vector<int> visited_vec(n, 0);
    int left=0, right=0;


    forall(i,0,n){
        if(arr[i]>=k){
            pair_vec.push_back(make_pair(arr[i]-k,i));
            pair_vec.push_back(make_pair(arr[i]+k,i));
        }else{
            pair_vec.push_back(make_pair(arr[i]+k,i));
        }
    }


    cout<<"______________________________________________\nAll Possible heights of Buildings \n";

    forall(i,0,pair_vec.size()){
        cout<<"#"<<i+1<<": ("<<pair_vec[i].first<<","<<pair_vec[i].second<<")"<<endl;;
    }


    sort(pair_vec.begin(),pair_vec.end());

    cout<<"______________________________________________\nSorted Vector \n";

    forall(i,0,pair_vec.size()){
        cout<<"#"<<i+1<<": ("<<pair_vec[i].first<<","<<pair_vec[i].second<<")"<<endl;
    }

    cout<<"______________________________________________\n";

    //Traversing through the vector and checking the visited building 


    while(count<n && right<pair_vec.size()){
        if(visited_vec[pair_vec[right].second] == 0)
            count++;
        visited_vec[pair_vec[right].second]++;
        right++;
    }

    ans = pair_vec[right-1].first - pair_vec[left].first;


    while(right<pair_vec.size()){
        if(visited_vec[left]>1){
            visited_vec[left]--;
        }else if(visited_vec[left]==1){
            visited_vec[left]--;
            count--;
        }
        left++;
        while(count<n && right<pair_vec.size()){
            if(visited_vec[pair_vec[right].second] == 0)
                count++;
            visited_vec[pair_vec[right].second]++;
            right++;
        }
        if(count==n)
            ans = pair_vec[right-1].first - pair_vec[left].first;
        else
            break;
    }
    

    cout<<"Minimum height between buildings can be : ( "<<ans<<" )"<<endl;

    cout<<"______________________________________________\n";


}
    