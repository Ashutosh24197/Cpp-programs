#include <iostream>
#include<vector>

using namespace std;





      

int main()
{
   vector<int> grades {67,38,73};
  for(int i=0;i<3;i++){
        if(grades[i]>=38){
          int j=0;
          while(grades[i]%5!=0){
              grades[i]+=1;;
              j++;
          }
          if(j>=3)
             grades[i]-=j;
      }
      }
    

   
   for(int i=0;i<3;i++)
       cout<<grades[i]<<endl;

    return 0;
}

