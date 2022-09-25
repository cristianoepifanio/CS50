#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("How many steps Mario must to jump? ");
    for(int i = 0;i < x; i++){
        printf("#");
        printf("\n");
    }
    
}
