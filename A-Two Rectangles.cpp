#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int a1=a*b;
  int a2=c*d;
  if(a1>a2)
  {
    printf("%d",a1);
  }
  else
  {
    printf("%d",a2);
    
  }
  return 0;
  
}
