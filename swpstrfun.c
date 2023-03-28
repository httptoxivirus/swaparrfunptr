#include<stdio.h>
void swap(int a,int b) {
     int temp;
     temp = a;
     a = b;
     b = temp;
   printf("The swapped numbers are %d  %d",a,b);
}


int main() {
    int a,b;
    printf("Enter the two no. \n");
    scanf("%d %d",&a,&b);
    void (*ptr) (int , int) = &swap;
    (*ptr) (a,b);
  return 0;
 }
