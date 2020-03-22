#include <bits/stdc++.h>

using namespace std;

long int maximum(long int arr[],long int n){
    long int max;
    max=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}

int main(){
    long int n;
    cin>>n;
    long int arr[n];
    for(long int i=0;i<n;i++ )
      cin>>arr[i];

    long int max,result=0;
    max=maximum(arr,n);
    cout<<max;
    for(long int i=0;i<n;i++)
      if(arr[i]==max)
         result++;


    cout<<result;
    return 0;
}