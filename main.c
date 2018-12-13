/*  Author: Mark Clifford
    Purpose: Challenge to make enum type Companies, 3 variables assigned this type, and *values* printed to screen
    Date: 8 Dec 2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define Enum type variable
    enum company {Google, Facebook, Xerox, Yahoo, EBay, Microsoft};
    // Initialize 3 variables
    enum company company1 = Xerox;
    enum company company2 = Google;
    enum company company3 = EBay;
    // Print the variables to screen
    printf("The value of Xerox is %d\n", company1);
    printf("The value of Google is %d\n", company2);
    printf("The value of EBay is %d\n", company3);

    return 0;
}
