#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;




void sort_by_area(triangle* tr, int n)
 {
     printf("#####");
   float valume[n],p,temp,temp2;
   triangle temp1;
   for(int i=0;i<n;i++)
   {
       p=(tr[i].a+tr[i].b+tr[i].c)/3;
       temp=p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);
       valume[i]=sqrt(temp);
       printf("%f\n",valume[i]);
   }
  for(int i=0;i<n-1;i++)
   for(int j=0;j<n-i-1;j++)
      {
          if(valume[j]>valume[j+1])
             temp2=valume[j];
             valume[j]=valume[j+1];
             valume[j+1]=temp2;

             temp1=tr[j];
             tr[j]=tr[j+1];
             tr[j+1]=temp1;
      }
      printf("#####");
      for(int i=0;i<n;i++)
          printf("%f\n",valume[i]);
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
    printf("#####");
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}