#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
//Function of calculating factorial.
int fact(int n){
    if(n==1)
       return 1;
    else
        return n*fact(n-1);
}

void calculate_the_maximum(int n, int k) {
     int range=fact(n-1),count=0;
     int and[range],or[range],xor[range];
     int max_and=0,max_or=0,max_xor=0;

     for(int i=1;i<n;i++){
       for(int j=i+1;j<=n;j++){
           and[count]=i&j;
           or[count]=i|j;
           xor[count]=i^j;
           count++;
       }
     }
    // max_and=and[0];
    // max_or=or[0];
    // max_xor=xor[0];
    for(int i=0;i<range;i++){
        if(and[i]>max_and && and[i]<k)
          max_and=and[i];
        if(or[i]>max_or && or[i]<k)
           max_or=or[i];
        if(xor[i]>max_xor && xor[i]<k)
            max_xor=xor[i];

    }
    printf("%d\n",max_and);
    printf("%d\n",max_or);
    printf("%d",max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
