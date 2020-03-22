#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    int no[10],temp;
    scanf("%s",s);

    for(int i=0;s[i]!='\0';i++){
          temp=s[i]-'0';
          if(temp>=0 && temp<10)
             no[temp]++;
     }
    for(int i=0;i<10;i++)
      printf("%d ",no[i]);

    return 0;
}
