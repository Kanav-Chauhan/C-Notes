#include<stdio.h>

int main(){
    int i = 3;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *(&i));
    return 0;
}