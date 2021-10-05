//Swap Funtion without using third variable. with use of pointer.

#include <stdio.h>

// with pointer, without 3rd variable
void swap(int *a,int *b){
    printf("start:%d,%d\n",*a,*b);
     *a+=*b ; 
    *b=*a-*b;
    *a-=*b;
    printf("swapped:%d,%d\n",*a,*b);
        printf("\n");
}


int main()
{
//     int a = 1,b =2;
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before Swapping: a=%d, b=%d\n",a,b);
  
    printf("After swapping-with pointer usage\n");
  
    swap(&a,&b);
    return 0;
}



