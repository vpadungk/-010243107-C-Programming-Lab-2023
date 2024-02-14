#include <stdio.h>
int main(void)
{
    int VAT = 2.5;
    float price=150;
    float total, total_1, total_2, total_3;

    total_1 =  price * VAT/100;
    total_2 =  price * (float)VAT/100;
    total_3 =  price * (float)(VAT/100);

    printf("VAT rate is %d percent\nPrice is %.2f Baht\nTotal VAT is %.2f Baht\t", VAT, price, total_1);

    return 0;
}
