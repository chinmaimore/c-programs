#include<stdio.h>

int main()
{
  float unit,total,charge;
  char name[20];

  printf("enter the name of customer:");
  fgets(name,20,stdin);

  printf("enter the used units:");
  scanf("%f",&unit);

  charge=0;

   if (unit>=1&&unit<=200)
{
  charge=0.8*unit;
}  
  else if (unit>=201&&unit<=300)
{
  charge=(0.8*200)+(0.9*(unit-200));
}
  else if(unit>=300)  
{
  charge=(0.8*200)+(0.9*100)+(1*(unit-300));
}

  total=charge+100;

  if(total>400)
{
  total=total+(0.15*total);
}

  printf("\n\nelectricity bill \n\n");
  printf("name;%s\n",name);
  printf("no of units:%.2f\n",unit);
  printf("total bill amount:%.2f\n",total);
  return 0;
}

