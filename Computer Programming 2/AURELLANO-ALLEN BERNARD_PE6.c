//Allen Bernard R. Aurellano BSCS - 1A

#include <stdio.h>

void updateValues(float *f, int *i, char *c);

int main()
{
    float LotionPrice = 199.99;
    int LuckyNumber = 19;
    char FirstLetterOfCrush = 'Z';

    float *ptrLotionPrice;
    int *ptrLuckyNumber;
    char *ptrFirstLetterOfCrush;

    ptrLotionPrice = &LotionPrice;
    ptrLuckyNumber = &LuckyNumber;
    ptrFirstLetterOfCrush = &FirstLetterOfCrush;

    printf("Before update:\n");
    printf("-----------------------------------------------------------------\n");
    printf("Variable Name      | Data Type | Memory Address   | Stored Value\n");
    printf("-----------------------------------------------------------------\n");

    printf("LotionPrice        | float     | %p | %.2f\n", (void*)&LotionPrice, LotionPrice);
    printf("LuckyNumber        | int       | %p | %d\n", (void*)&LuckyNumber, LuckyNumber);
    printf("FirstLetterOfCrush | char      | %p | %c\n", (void*)&FirstLetterOfCrush, FirstLetterOfCrush);

    printf("\nPointer Variables:\n");
    printf("---------------------------------------------------------------\n");
    printf("Pointer Name         | Points to Address | Own Memory Address\n");
    printf("---------------------------------------------------------------\n");

    printf("ptrLotionPrice       | %p  | %p\n", (void*)ptrLotionPrice, (void*)&ptrLotionPrice);
    printf("ptrLuckyNumber       | %p  | %p\n", (void*)ptrLuckyNumber, (void*)&ptrLuckyNumber);
    printf("ptrFirstLetterOfCrush| %p  | %p\n", (void*)ptrFirstLetterOfCrush, (void*)&ptrFirstLetterOfCrush);

    updateValues(ptrLotionPrice, ptrLuckyNumber, ptrFirstLetterOfCrush);

    printf("\nAfter update:\n");
    printf("-----------------------------------------------------------------\n");
    printf("Variable Name      | Data Type |  Memory Address  | Stored Value\n");
    printf("-----------------------------------------------------------------\n");

    printf("LotionPrice        | float     | %p | %.2f\n", (void*)&LotionPrice, LotionPrice);
    printf("LuckyNumber        | int       | %p | %d\n", (void*)&LuckyNumber, LuckyNumber);
    printf("FirstLetterOfCrush | char      | %p | %c\n", (void*)&FirstLetterOfCrush, FirstLetterOfCrush);

    printf("\nPointer Variables:\n");
    printf("---------------------------------------------------------------\n");
    printf("Pointer Name         | Points to Address | Own Memory Address\n");
    printf("---------------------------------------------------------------\n");

    printf("ptrLotionPrice       | %p  | %p\n", (void*)ptrLotionPrice, (void*)&ptrLotionPrice);
    printf("ptrLuckyNumber       | %p  | %p\n", (void*)ptrLuckyNumber, (void*)&ptrLuckyNumber);
    printf("ptrFirstLetterOfCrush| %p  | %p\n", (void*)ptrFirstLetterOfCrush, (void*)&ptrFirstLetterOfCrush);

    return 0;
}

void updateValues(float *f, int *i, char *c)
{
    printf("\nEnter new values:\n");

    printf("New LotionPrice: ");
    scanf("%f", f);

    printf("New LuckyNumber: ");
    scanf("%d", i);

    printf("New FirstLetterOfCrush: ");
    scanf(" %c", c);
}