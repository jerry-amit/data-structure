#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3];//,i,j;
int i,j;
clrscr();
for(i=0;i<=2;i++)
  {
for(j=0;j<=2;j++)
    {
 printf("Enter the value :");
  scanf("%d",&a[i][j]);
  }
    }
 printf("the Entered array is :\n");
for(i=0;i<=2;i++)
  {
for(j=0;j<=2;j++)
    {
  printf("%d",a[i][j]);
  }
  printf("\n");
    }

 getch();
}