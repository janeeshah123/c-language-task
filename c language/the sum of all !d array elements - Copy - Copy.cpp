#include<stdio.h>
 int main() {
 	  int i,size,sum;
       int arr[size];
    printf("Enter array's size: ");
    scanf("%d", &size);
    printf("Enter array  elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
   }    
    printf("The sum of  the Array:%d\n",sum);
    return 0;
}

