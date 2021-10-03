/*    1     1
       2   2 
        3 3  
         4       //PATTERN
        5 5  
       6   6 
      7     7    */


//C program
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=7;i++) //outer loop for number of rows(changing lines)
{
for(j=1;j<=7;j++) //inner loop for number of columns(printing digits)
{
if((j==i)||(j==8-i))
printf("%d",i);
else
printf(" ");
}
printf("\n");
}
return 0;
}
