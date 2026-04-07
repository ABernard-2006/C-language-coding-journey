//Allen Bernard R. Aurellano BSCS - 1A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Student {
    char name[50];
    int id;
    int age;
    char gender;
};

int readStudents(const char *filename, struct Student students[]) {
    FILE *fp = fopen(filename, "r");
    int n, i;

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    fscanf(fp, "%d", &n);

    for (i = 0; i < n; i++) {
        fscanf(fp, "%s %d %d %c",
               students[i].name,
               &students[i].id,
               &students[i].age,
               &students[i].gender);
    }

    fclose(fp);
    return n;
}

void sortStudents(struct Student arr[], int n) {
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i].age > arr[j].age) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void groupAndSave(struct Student students[], int n, const char *outFile) {
    struct Student males[MAX], females[MAX];
    int m = 0, f = 0, i;

    for (i = 0; i < n; i++) {
        if (students[i].gender == 'M')
            males[m++] = students[i];
        else if (students[i].gender == 'F')
            females[f++] = students[i];
    }

    int j;
    struct Student temp;
    for (i = 0; i < m - 1; i++) {
        for (j = i + 1; j < m; j++) {
            if (strcmp(males[i].name, males[j].name) > 0) {
                temp = males[i];
                males[i] = males[j];
                males[j] = temp;
            }
        }
    }

    for (i = 0; i < f - 1; i++) {
        for (j = i + 1; j < f; j++) {
            if (strcmp(females[i].name, females[j].name) > 0) {
                temp = females[i];
                females[i] = females[j];
                females[j] = temp;
            }
        }
    }

    FILE *fp = fopen(outFile, "w");
    if (fp == NULL) {
        printf("Error writing file.\n");
        return;
    }

    printf("NAME       ID#   AGE\n");
    printf("-------------------------\n");

    fprintf(fp, "NAME       ID#   AGE\n");
    fprintf(fp, "-------------------------\n");

    printf("MALE:\n");
    fprintf(fp, "MALE:\n");

    for (i = 0; i < m; i++) {
        printf("%-10s %02d    %d\n",
               males[i].name,
               males[i].id,
               males[i].age);

        fprintf(fp, "%-10s %02d    %d\n",
                males[i].name,
                males[i].id,
                males[i].age);
    }
    printf("\nFEMALE:\n");
    fprintf(fp, "\nFEMALE:\n");

    for (i = 0; i < f; i++) {
        printf("%-10s %02d    %d\n",
               females[i].name,
               females[i].id,
               females[i].age);

        fprintf(fp, "%-10s %02d    %d\n",
                females[i].name,
                females[i].id,
                females[i].age);
    }
    fclose(fp);
}

int main(int argc, char *argv[]) {
    struct Student students[MAX];
    int count;

    if (argc < 3) {
        printf("Usage: %s <inputfile> <outputfile>\n", argv[0]);
        return 1;
    }
    count = readStudents(argv[1], students);

    if (count == 0) {
        printf("No data read.\n");
        return 1;
    }
    groupAndSave(students, count, argv[2]);

    return 0;
}