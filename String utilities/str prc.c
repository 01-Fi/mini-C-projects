#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int choice, i, len, vowels;
    do {
        printf("\n\t String Utilities\n");
        printf("\t------------------\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Reverse String\n");
        printf("4. Count Vowels\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                printf("Length = %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter string: ");
                scanf("%s", str1);
                len = strlen(str1);
                for (i = 0; i < len / 2; i++) {
                    char temp = str1[i];
                    str1[i] = str1[len - i - 1];
                    str1[len - i - 1] = temp;
                }
                printf("Reversed string: %s\n", str1);
                break;
            case 4:
                printf("Enter string: ");
                scanf("%s", str1);
                vowels = 0;
                for (i = 0; str1[i] != '\0'; i++) {
                    if (str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||
                        str1[i]=='o'||str1[i]=='u'||
                        str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||
                        str1[i]=='O'||str1[i]=='U') {
                        vowels++;
                    }
                }
                printf("Vowel count = %d\n", vowels);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);
}

