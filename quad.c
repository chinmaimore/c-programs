#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,root1,root2,desc,reprt,imgprt;
  printf("Enter the cofficient value a,b,c:\n");
  scanf("%f%f%f",&a,&b,&c);

  if(a==0)
  {

    printf("Value of a cannot be zero\n");
    printf("please try again.\n");
    return 1;
  }

  desc=(b*b)-(4.0*a*c);

  if(desc==0)
  {
    printf("Roots are real and equal\n");
    root1=root2=(-b)/(2.0*a);
    printf("The roots are root1=root2=%f\n",root1);
  }

  else if(desc>0)
  {
    printf("Roots are real and distinct\n");
    root1=(-b+sqrt(desc))/(2.0*a);
    root2=(-b-sqrt(desc))/(2.0*a);
    printf("The roots are:\n");
    printf("root1=%f\n",root1);
    printf("root2=%f\n",root2);
  }

  else
  {
    printf("roots are imaginary\n");
    reprt=(-b)/(2.0*a);
    imgprt=(sqrt(-desc))/2.0*a;
    printf("root1=%f + i%f\n",reprt,imgprt);
    printf("root1=%f - i%f\n",reprt,imgprt);

  }

  return 0;

  }
