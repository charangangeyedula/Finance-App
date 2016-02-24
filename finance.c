#include<stdio.h>
float ci(float ,float ,float,float );
main()
{
float p,r,i,p1,cii,y;
i=0.0;
printf("enter the money given\n");
scanf("%f",&p);
printf("enter the interest rate\n");
scanf("%f",&r);
printf("enter the num of years\n");
scanf("%f",&y);
p1=ci(p,r,i,y);
cii=p1-p;
printf("total compund interest is %d\n",p1);
}
float ci(float p,float r,float i,float y)
{
while(i<y)
{
p=p+p*r;
i++;
return ci(p,r,i,y);
}
return p;
}
