#include <cs50.h>
#include <stdio.h>

int main(void){
    float n;
    do{
        
        n = get_float("Tap a positive number: ");
        printf("%.2f\n",n);
    }while(n >= 0);
}