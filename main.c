#include <stdio.h>
int main()
{
    int Num, ReversedNumber = 0, Remainder;

    printf("Enter Three Numbers : ");
    scanf("%d", &Num);

    while(Num != 0) {
        Remainder = Num % 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
        Num /= 10;
    }

    printf("Reversed Number = %d\n", ReversedNumber);
    return 0;
}
