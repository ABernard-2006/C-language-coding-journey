#include <stdio.h>

int main()
{
    int maxnum, counter, num[maxnum], freqnum, freqcount;
    
    printf("Enter the number of elements: ");
    scanf("%d", &maxnum);

    printf("Enter elements: ");
    for (counter = 0; counter < maxnum; counter++)
    {
        scanf("%d", &num[counter]);
    }

    for (counter = 0; counter < maxnum; counter++)
    {
        int count = 0;
        for (int j = 0; j < maxnum; j++)
        {
            if (num[counter] == num[j])
            {
                count++;
            }
        }
        if (count > freqcount)
        {
            freqcount = count;
            freqnum = num[counter];
        }
    }
    printf("Most frequent number is: %d\n", freqnum);
    printf("Frequency: %d", freqcount);

    return 0;
}