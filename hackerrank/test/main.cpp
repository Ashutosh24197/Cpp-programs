#include<bits/stdc++.h>

using namespace std;

long saveThePrisoner(long n, long m, long s) {
  if(m<n)
     return m+s-1;
long seatno=(m-(n-s+1))%n;

if(seatno==0)
  seatno=n;

  return seatno;
}

int main(){
   // string s="abc";
    cout<<saveThePrisoner(31 ,238250965 ,2);
  return 0;  
}