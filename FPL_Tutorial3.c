#include<stdio.h>
int main (){
    int n,Remain,Reverse=0,Original;
    printf("Enter Your Number");
    scanf("%d",&n);
    Original=n;
    while (n !=0){
        Remain= n%10;
        Reverse = Reverse*10 + Remain;
        n= n/10;
    }
Original=Reverse;
printf("Reverse of Entered Integer is: %d",Original);
return 0;
}
