#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];

    int temp,result=0;
    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        arr[i]=102;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==temp)
            {
                result++;
                arr[j]=102+i;
                break;
            }
        }
    }

    cout<<result;   
}