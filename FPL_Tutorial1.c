#include<stdio.h>
int main(){
    int sum=0,i;
    int a[5];
    printf("Enter Array Elements");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }printf("sum of Array Elements is:\n");
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
