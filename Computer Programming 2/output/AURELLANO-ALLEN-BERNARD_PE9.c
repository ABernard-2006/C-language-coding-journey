#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[50];
    int age;
    char party[50];
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

struct Node* createNode(char name[], int age, char party[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    strcpy(newNode->name, name);
    newNode->age = age;
    strcpy(newNode->party, party);
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void insertEnd(char name[], int age, char party[]) {
    struct Node* newNode = createNode(name, age, party);

    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertFront(char name[], int age, char party[]) {
    struct Node* newNode = createNode(name, age, party);

    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertPosition(int pos, char name[], int age, char party[]) {
    if (pos <= 1) {
        insertFront(name, age, party);
        return;
    }
    struct Node* temp = head;
    int i = 1;

    while (temp != NULL && i < pos - 1) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL || temp->next == NULL) {
        insertEnd(name, age, party);
        return;
    }
    struct Node* newNode = createNode(name, age, party);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteFront() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
        head->prev = NULL;
    }
    free(temp);
}

void deleteEnd() {
    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = tail;
    if (head == tail) {
        head = tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }

    free(temp);
}

void deletePosition(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (pos == 1) {
        deleteFront();
        return;
    }

    struct Node* temp = head;
    int i = 1;

    while (temp != NULL && i < pos) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    if (temp == tail) {
        deleteEnd();
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    free(temp);
}

void displayForward() {
    struct Node* temp = head;
    int count = 1;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("\nCandidates Forward:\n");

    while (temp != NULL) {
        printf("%d. %s, %d, %s\n", count++, temp->name, temp->age, temp->party);
        temp = temp->next;
    }
}

void displayBackward() {
    struct Node* temp = tail;
    int count = 1;

    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("\nCandidates Backward:\n");

    while (temp != NULL) {
        printf("%d. %s, %d, %s\n", count++, temp->name, temp->age, temp->party);
        temp = temp->prev;
    }
}

void loadFile() {
    FILE* fp = fopen("record.txt", "r");

    if (fp == NULL) {
        printf("record.txt not found.\n");
        return;
    }

    char name[50], party[50];
    int age;

    while (fscanf(fp, " %49[^,],%d,%49[^\n]", name, &age, party) == 3) {
        insertEnd(name, age, party);
    }

    fclose(fp);
}

void freeList() {
    struct Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int choice, pos, age;
    char name[50], party[50];

    loadFile();

    do {
        printf("\nMENU\n");
        printf("1. Insert a candidate at the front\n");
        printf("2. Insert a candidate at the end\n");
        printf("3. Insert a candidate at a specified position\n");
        printf("4. Delete the candidate at the front\n");
        printf("5. Delete the candidate at the end\n");
        printf("6. Delete a candidate at a specified position\n");
        printf("7. Traverse the list forward\n");
        printf("8. Traverse the list backward\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");
        getchar();

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;

                printf("Enter Age: ");
                scanf("%d", &age);
                getchar();

                printf("Enter Party: ");
                fgets(party, 50, stdin);
                party[strcspn(party, "\n")] = 0;

                insertFront(name, age, party);
                displayForward();
                break;

            case 2:
                printf("Enter Name: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;

                printf("Enter Age: ");
                scanf("%d", &age);
                getchar();

                printf("Enter Party: ");
                fgets(party, 50, stdin);
                party[strcspn(party, "\n")] = 0;

                insertEnd(name, age, party);
                displayForward();
                break;

            case 3:
                printf("Enter Position: ");
                scanf("%d", &pos);
                getchar();

                printf("Enter Name: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;

                printf("Enter Age: ");
                scanf("%d", &age);
                getchar();

                printf("Enter Party: ");
                fgets(party, 50, stdin);
                party[strcspn(party, "\n")] = 0;

                insertPosition(pos, name, age, party);
                displayForward();
                break;

            case 4:
                deleteFront();
                displayForward();
                break;

            case 5:
                deleteEnd();
                displayForward();
                break;

            case 6:
                printf("Enter Position: ");
                scanf("%d", &pos);

                deletePosition(pos);
                displayForward();
                break;

            case 7:
                displayForward();
                break;

            case 8:
                displayBackward();
                break;

            case 9:
                freeList();
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 9);

    return 0;
}