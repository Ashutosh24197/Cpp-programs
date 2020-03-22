#include<bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year) {
    ostringstream str1;
    str1<<year;
   if(year%400==0 or (year%4==0 and year%100!=0)){
       return "12.09."+str1.str();
   }
   else
       return "13.09."+str1.str();

}

int main(){
    
    cout<<dayOfProgrammer(2017);
    
  return 0;  
}