#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets you name
    string first = get_string("What's your first name? ");

    // Says hello
    printf("Hello, %s\n", first);
}
