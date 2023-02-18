#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Gets the size of the grid
    int n = get_size();

    // Prints the grid
    print_grid(n);

}

// Gets the size of the grid.
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8); // Rejects any input that is not an integer between 1 and 8
    return n;
}

void print_grid(int size)
{
    // Variables
    int n = size;
    int k = n - 1;

    // i is equal to the height of the stairs, where j is equal to the char of the characters
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // If i + j is more than the size - 1, print a space. If not, print '#'
            if (i + j < k)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        // Make a new line
        printf("\n");
    }
}
