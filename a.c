#include<stdio.h>

/*求使得1+1/2+1/3+...........+1/n>15的最小n值*/

int main()

{
int n;

float sum = 0;

for (n=1; sum<1.5; n++)

{

sum+=1.0/n;
printf("sum=%f\n,n=%d\n",sum,n);
}

printf("n=%d\n",n);

return 0;

}


