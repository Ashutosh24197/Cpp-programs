#include<bits/stdc++.h>

using namespace std;

int squares(int a, int b) {
int i=1;
int ans=0;
while(i*i<a)i++;
while(i*i<=b){i++;ans++;}
return ans;
}
int main(){
    cout<<squares(17,24);
  return 0;  
}