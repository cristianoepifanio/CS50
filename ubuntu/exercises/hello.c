#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string answer = get_string("What is you name? ");
    printf("hello, %s ", answer);
    
    float x = get_float("Digite x: ");
    float y = get_float("Digite y: ");
    printf("A soma é %f",x+y);
}