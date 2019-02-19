// For loop example
// Author Mark Clifford

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum = 0LL;  // stores sum of integers
    unsigned int count = 0;        // number of integers to be summed

    printf("\nEnter the number of integers to be summed: ");
    scanf(" %u", &count);

    // sum integers from 1 to count
    for(unsigned int i = 1; i <= count; sum += i++)

    printf("\nTotal of the first %u numbers is %u\n", count, sum);


    return 0;
}
