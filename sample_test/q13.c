#include <stdio.h>


int main(){
    int first = 10 , second = 20;
    int third = first + second;
    {
        int third = second - first;
        printf("%d" , third);
    }
    printf("%d" , third);
}