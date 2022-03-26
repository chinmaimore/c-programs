#include<stdio.h>
int main()
{
  int a,b;
  float result;
  char op;
  printf("enter values of a and b:");
  scanf("%d%d",&a,&b);
  printf("enter operator:");
  scanf(" %char",&op);
  if(op=='+')
{
  result=a+b;
  printf("sum of two no=%f\n",result);
}
  else if (op=='-')
{
  result=a-b;
  printf("diff of two no=%f\n",result);
}
  else if (op=='*')
{
  result=a*b;
  printf("product=%f\n",result);
}
  else if (op=='/')
{
  result=a/b;
  printf("after division quotient=%f\n",result);
}
  else if (op=='%')
{
  if(b==0)
{
  printf("division not possible\n");
  return 1;
}
else{
  result=a%b;
  printf("remainder=%f\n",result);
}
}
  else
{
  printf("its a invalid operator\n");
}
  return 0;
}
