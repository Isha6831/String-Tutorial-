#include <stdio.h>
#include <string.h>

// Function prototypes
void compareStrings(char str1[], char str2[]);
void copyString(char source[], char destination[]);
void findLength(char str[]);
void concatenateStrings(char str1[], char str2[]);

int main() {
    char string1[100], string2[100];
    int choice;

    printf("Welcome to String Operations Tutorial Program!\n");
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = 0; // Remove newline character from input

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = 0; // Remove newline character from input

    do {
        printf("\nChoose an operation to learn about:\n");
        printf("1. Compare two strings\n");
        printf("2. Copy one string to another\n");
        printf("3. Find the length of a string\n");
        printf("4. Concatenate two strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline left by scanf

        switch (choice) {
            case 1:
                compareStrings(string1, string2);
                break;
            case 2:
                copyString(string1, string2);
                break;
            case 3:
                findLength(string1);
                break;
            case 4:
                concatenateStrings(string1, string2);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to compare two strings
void compareStrings(char str1[], char str2[]) {
    printf("\nComparing the two strings...\n");

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    printf("Explanation: The 'strcmp' function compares two strings. If they are equal, it returns 0.\n\n");
}

// Function to copy one string to another
void copyString(char source[], char destination[]) {
    printf("\nCopying the first string into the second...\n");

    strcpy(destination, source);
    printf("String copied! Now the second string is: %s\n", destination);

    printf("Explanation: The 'strcpy' function copies the content of one string into another. The source string remains unchanged.\n\n");
}

// Function to find the length of a string
void findLength(char str[]) {
    int length = strlen(str);

    printf("\nThe length of the string is: %d\n", length);
    printf("Explanation: The 'strlen' function counts the number of characters in the string, excluding the null terminator.\n\n");
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    printf("\nConcatenating the two strings...\n");

    strcat(str1, str2);
    printf("The concatenated string is: %s\n", str1);

    printf("Explanation: The 'strcat' function appends the second string to the first, modifying the first string to hold the result.\n\n");
}