#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
void toh(int s, int d, int n){
int t=6-s-d;
    if (n==1){
      printf("Moving disc from %d to %d\n",s,d);
    }
    else{
          toh(s,t,n-1);
          toh(s,d,1);
          toh(t,d,n-1);
    }
}
void main(){
int s,d,n;
printf("Welcome to Tower of hanoi");
printf("Enter the number of disc you want:");
scanf("%d",n);
printf("Enter the source you want:");
scanf("%d",s);
printf("Enter the destination you want:");
scanf("%d",d);
toh (s,d,n);
printf("Thank You..:))");

}
