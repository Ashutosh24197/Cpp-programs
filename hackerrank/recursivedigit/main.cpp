#include<bits/stdc++.h>

using namespace std;

int digitSum(int n){
    if(n/10==0)
      return n;
    else{
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        cout<<sum<<endl;
        return digitSum(sum);
    }
}
// Complete the superDigit function below.
int superDigit(string n, int k) {
int sum=0;
for(auto i:n){
    int temp=i-'0';
    sum+=temp;
}
cout<<sum<<endl;
return digitSum(sum*k);
}

int main(){
    string s="148";
    int k=3;
   cout<<superDigit(s,k); 
  return 0;  
}