#include<iostream>

using namespace std;

 int lcm(int* a,int a_count){
    int max=0,flag=1,temp_max;
    for(int i=0;i<a_count;i++)
      if(max<a[i])
          max=a[i];
    temp_max=max;
    while(flag){
         for(int i=0;i<a_count;i++){
             if(temp_max%a[i]!=0)
               break;
            if(i==a_count-1)
              flag=0;
         }
        if(flag)
          temp_max+=max; 
    }
    return temp_max;
}
int main()
{
  int a[10]={100,99,98,97,96,95,94,93,92,91};
  cout<<lcm(a,10);

}