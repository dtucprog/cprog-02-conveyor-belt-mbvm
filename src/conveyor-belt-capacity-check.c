#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;scanf("%d",&motorCount);scanf("%d",&totalPackageWeight); if (totalPackageWeight>=motorCount*MOTOR_CAPACITY){printf("this is unsafe");}else{printf("this is a okay!");}
}
