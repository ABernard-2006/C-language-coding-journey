// Allen Bernard R. Aurellano CS1A

#include <stdio.h>

int main()
{
    int N1, N2;
    float perdif;

    FILE *ifp;

    ifp = fopen("numbers.txt", "rt");

    fscanf(ifp, "%d %d", &N1, &N2);

    perdif=(N1-N2)*100/((N1+N2)/2.0);

    printf("Values read from the file: %d and %d", N1, N2);

    printf("\n\nThe percentage difference between %d and %d is %.4f%%", N1,N2, perdif);

    fclose(ifp);

    return 0;
}