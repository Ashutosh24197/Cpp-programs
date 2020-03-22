#include <bits/stdc++.h>

using namespace std;

int minimum(int arr[]){
    int min;
    min=arr[0];
    for(int i=1;i<5;i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}

int maximum(int arr[]){
    int max;
    max=arr[0];
    for(int i=1;i<5;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
       cin>>arr[i];
    int min,max,sum=0;
    min=minimum(arr);
    max=maximum(arr);
    for(int i=0;i<5;i++)
        sum+=arr[i];
    cout<<sum-max<<" "<<sum-min;
}
