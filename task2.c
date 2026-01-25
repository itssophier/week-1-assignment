#include <stdio.h>

int main(void)
{
    float height;          
    double bankBalance;    
    char phoneNumber[20];  

    /* enter height */
    printf("Enter your height: ");
    scanf("%f", &height);

    /* bank balance */
    printf("Enter your bank balance (KES): ");
    scanf("%lf", &bankBalance);

    /* enter phone number */
    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    /* entered detailsdisplay */
    printf("\n--- User Details ---\n");
    printf("Height: %.2f centimeters\n", height);
    printf("Bank Balance: KES %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}
