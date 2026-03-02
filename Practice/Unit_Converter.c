#include <stdio.h>

/* 
1. Kilometers to Miles
2. Celsius to Fahrenheit
3. Hours to Minutes
4. Exit 
*/

int main ()
{
    float mm, mmtocm, mmtodecim, mmtom, mmtodecam, mmtohm, mmtokm, cm, cmtomm, cmtodecim, cmtom, cmtodecam, cmtohm, cmtokm, dm, dmtomm, dmtocm, dmtom, dmtodecam, dmtohm, dmtokm, m, mtomm, mtocm, mtodecim, mtodecam, mtohm, mtokm, Dm, Dmtomm, Dmtocm, Dmtodecim, Dmtom, Dmtohm, Dmtokm, hm, hmtomm, hmtocm, hmtodecim, hmtodecam, hmtom, hmtokm, km, kmtomm, kmtocm, kmtodecim, kmtodecam, kmtohm, kmtom;
    int opp, lengthunit, metric, metconvto;

    printf("1. Length\n2. Area\n3. Speed\n4. Weight\n5. Temperature\n6. Power\n7. Pressure\n8. Volume\n9. Currency\n");
    printf("\nEnter the number of category you want to convert: ");
    scanf("%d", &opp);

    switch(opp)
    {
        case 1:
        printf("\n\n1. Metric Units\n2. Imperial Units\n3. Chinese Units");
        printf("\n\nEnter the number of Category Unit you want to convert: ");
        scanf("%d", &lengthunit);
            switch(lengthunit)
            {
            case 1:
            printf("\n\n1. Millimeter\n2. Centimeter\n3. Decimeter\n4. Meter\n5. Decameter\n6. Hectometer\n7. Kilometer\n");
            printf("\n\nEnter the number corresponding to the unit you want to convert: ");
            scanf("%d", &metric);
                switch(metric)
                {
                    case 1:
                    printf("\n\n1. Centimeter\n2. Decimeter\n3. Meter\n4. Decameter\n5. Hectometer\n6. Kilometer\n");
                    printf("\n\nEnter the number corresponding to the unit you want Millimeter to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Millimeter: ");
                            scanf("%f", &mm);
                            mmtocm = mm/10;
                            printf("%.2f centimeter", mmtocm);
                            break;
                            case 2:
                            printf("Enter Millimeter: ");
                            scanf("%f", &mm);
                            mmtodecim = mm/100;
                            printf("%lf decimeter", mmtodecim);
                            break;
                            case 3:
                            printf("Enter Millimeter: ");
                            scanf("%f", &mm);
                            mmtom = mm/1000;
                            printf("%lf meter", mmtom);
                            break;
                            case 4:
                            printf("Enter Millimeter: ");
                            scanf("%f", &mm);
                            mmtodecam = mm/10000;
                            printf("%lf decameter", mmtodecam);
                            break;
                            case 5:
                            printf("Enter Millimeter: ");
                            scanf("%f", &mm);
                            mmtohm = mm/100000;
                            printf("%lf hectometer", mmtohm);
                            break;
                            case 6:
                            printf("Enter Millimeter: ");
                            scanf("%f", &mm);
                            mmtokm = mm/1000000;
                            printf("%lf kilometer", mmtokm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                    case 2:
                    printf("\n\n1. Millimeter\n2. Decimeter\n3. Meter\n4. Decameter\n5. Hectometer\n6. Kilometer\n");
                    printf("\n\nEnter the number corresponding to the unit you want Centimeter to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Centimeter: ");
                            scanf("%f", &cm);
                            cmtomm = cm*10;
                            printf("%lf millimeter", cmtomm);
                            break;
                            case 2:
                            printf("Enter Centimeter: ");
                            scanf("%f", &cm);
                            cmtodecim = cm/10;
                            printf("%lf decimeter", cmtodecim);
                            break;
                            case 3:
                            printf("Enter Centimeter: ");
                            scanf("%f", &cm);
                            cmtom = cm/100;
                            printf("%lf meter", cmtom);
                            break;
                            case 4:
                            printf("Enter Centimeter: ");
                            scanf("%f", &cm);
                            cmtodecam = cm/1000;
                            printf("%lf decameter", cmtodecam);
                            break;
                            case 5:
                            printf("Enter Centimeter: ");
                            scanf("%f", &cm);
                            cmtohm = cm/10000;
                            printf("%lf hectometer", cmtohm);
                            break;
                            case 6:
                            printf("Enter Centimeter: ");
                            scanf("%f", &cm);
                            cmtokm = cm/100000;
                            printf("%lf kilometer", cmtokm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                    case 3:
                    printf("\n\n1. Millimeter\n2. Centimeter\n3. Meter\n4. Decameter\n5. Hectometer\n6. Kilometer\n");
                    printf("\n\nEnter the number corresponding to the unit you want Decimeter to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Decimeter: ");
                            scanf("%f", &dm);
                            dmtomm = dm*100;
                            printf("%lf millimeter", dmtomm);
                            break;
                            case 2:
                            printf("Enter Decimeter: ");
                            scanf("%f", &dm);
                            dmtocm = dm*10;
                            printf("%lf centimeter", dmtocm);
                            break;
                            case 3:
                            printf("Enter Decimeter: ");
                            scanf("%f", &dm);
                            dmtom = dm/10;
                            printf("%lf meter", dmtom);
                            break;
                            case 4:
                            printf("Enter Decimeter: ");
                            scanf("%f", &dm);
                            dmtodecam = dm/100;
                            printf("%lf decameter", dmtodecam);
                            break;
                            case 5:
                            printf("Enter Deciimeter: ");
                            scanf("%f", &dm);
                            dmtohm = dm/1000;
                            printf("%lf hectometer", dmtohm);
                            break;
                            case 6:
                            printf("Enter Deciimeter: ");
                            scanf("%f", &dm);
                            dmtokm = dm/10000;
                            printf("%lf kilometer", dmtokm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                    case 4:
                    printf("\n\n1. Millimeter\n2. Centimeter\n3. Decimter\n4. Decameter\n5. Hectometer\n6. Kilometer\n");
                    printf("\n\nEnter the number corresponding to the unit you want Meter to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Meter: ");
                            scanf("%f", &m);
                            mtomm = m*1000;
                            printf("lf millimeter", mtomm);
                            break;
                            case 2:
                            printf("Enter Meter: ");
                            scanf("%f", &m);
                            mtocm = m*100;
                            printf("%lf centimeter", mtocm);
                            break;
                            case 3:
                            printf("Enter Meter: ");
                            scanf("%f", &m);
                            mtodecim = m*10;
                            printf("%lf decimeter", mtodecim);
                            break;
                            case 4:
                            printf("Enter Meter: ");
                            scanf("%f", &m);
                            mtodecam = m/10;
                            printf("%lf decameter", mtodecam);
                            break;
                            case 5:
                            printf("Enter Meter: ");
                            scanf("%f", &m);
                            mtohm = m/100;
                            printf("%lf hectometer", mtohm);
                            break;
                            case 6:
                            printf("Enter Meter: ");
                            scanf("%f", &m);
                            mtokm = m/1000;
                            printf("%lf kilometer", mtokm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                    case 5:
                    printf("\n\n1. Millimeter\n2. Centimeter\n3. Decimter\n4. Meter\n5. Hectometer\n6. Kilometer\n");
                    printf("\n\nEnter the number corresponding to the unit you want Decameter to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Decameter: ");
                            scanf("%f", &Dm);
                            Dmtomm = Dm*10000;
                            printf("%lf millimeter", Dmtomm);
                            break;
                            case 2:
                            printf("Enter Decameter: ");
                            scanf("%f", &Dm);
                            Dmtocm = Dm*1000;
                            printf("%lf centimeter", Dmtocm);
                            break;
                            case 3:
                            printf("Enter Decameter: ");
                            scanf("%f", &Dm);
                            Dmtodecim = Dm*100;
                            printf("%lf decimeter", Dmtodecim);
                            break;
                            case 4:
                            printf("Enter Decameter: ");
                            scanf("%f", &Dm);
                            Dmtom = m*10;
                            printf("%lf meter", Dmtom);
                            break;
                            case 5:
                            printf("Enter Decameter: ");
                            scanf("%f", &Dm);
                            Dmtohm = Dm/10;
                            printf("%lf hectometer", Dmtohm);
                            break;
                            case 6:
                            printf("Enter Decameter: ");
                            scanf("%f", &Dm);
                            Dmtokm = Dm/100;
                            printf("%lf kilometer", Dmtokm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                    case 6:
                    printf("\n\n1. Millimeter\n2. Centimeter\n3. Decimter\n4. Meter\n5. Decameter\n6. Kilometer\n");
                    printf("\n\nEnter the number corresponding to the unit you want Hectometer to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Hectometer: ");
                            scanf("%f", &hm);
                            hmtomm = hm*100000;
                            printf("%lf millimeter", hmtomm);
                            break;
                            case 2:
                            printf("Enter Hectometer: ");
                            scanf("%f", &hm);
                            hmtocm = hm*10000;
                            printf("%lf centimeter", hmtocm);
                            break;
                            case 3:
                            printf("Enter Hectometer: ");
                            scanf("%f", &hm);
                            hmtodecim = hm*1000;
                            printf("%lf decimeter", hmtodecim);
                            break;
                            case 4:
                            printf("Enter Hectometer: ");
                            scanf("%f", &hm);
                            hmtom = hm*100;
                            printf("%lf meter", hmtom);
                            break;
                            case 5:
                            printf("Enter Hectometer: ");
                            scanf("%f", &hm);
                            hmtodecam = hm*10;
                            printf("%lf decameter", hmtodecam);
                            break;
                            case 6:
                            printf("Enter Hectometer: ");
                            scanf("%f", &hm);
                            hmtokm = hm/10;
                            printf("%lf kilometer", hmtokm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                    case 7:
                    printf("\n\n1. Millimeter\n2. Centimeter\n3. Decimter\n4. Meter\n5. Decameter\n6. Decameter\n");
                    printf("\n\nEnter the number corresponding to the unit you want Kilometer to convert to: ");
                    scanf("%d", &metconvto);
                        switch(metconvto)
                        {
                            case 1:
                            printf("Enter Kilometer: ");
                            scanf("%f", &km);
                            kmtomm = km*1000000;
                            printf("%lf millimeter", kmtomm);
                            break;
                            case 2:
                            printf("Enter Kilometer: ");
                            scanf("%f", &km);
                            kmtocm = km*100000;
                            printf("%lf centimeter", kmtocm);
                            break;
                            case 3:
                            printf("Enter Kilometer: ");
                            scanf("%f", &km);
                            kmtodecim = km*10000;
                            printf("%lf decimeter", kmtodecim);
                            break;
                            case 4:
                            printf("Enter Kilometer: ");
                            scanf("%f", &km);
                            kmtom = km*1000;
                            printf("%lf meter", kmtom);
                            break;
                            case 5:
                            printf("Enter Kilometer: ");
                            scanf("%f", &km);
                            kmtodecam = km*100;
                            printf("%lf decameter", kmtodecam);
                            break;
                            case 6:
                            printf("Enter Kilometer: ");
                            scanf("%f", &km);
                            kmtohm = km*10;
                            printf("%lf hectometer", kmtohm);
                            break;
                            default:
                            printf("Invalid");
                            break;
                        }
                    break;
                }
            break;
            case 2:
            // Imperial Unit
            break;
            case 3:
            // Chinese Unit
            break;
            default:
            printf("Invalid");
            break;
            }
        break;
        case 2:
        //Area
        break;
        case 3:
        // Speed
        break;
        case 4:
        // weight
        break;
        case 5:
        //Temperature
        break;
        case 6:
        // Power
        break;
        case 7:
        // Pressure
        break;
        case 8:
        // Volume
        break;
        case 9:
        // Currency
        break;
        default:
        printf("Invalid");
        break;
    }


    return 0;
}