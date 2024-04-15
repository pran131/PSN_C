#include <stdio.h>
#include <string.h> // Include this header for strcmp

int main() {
    char str[] = "yes";
    char str2[] = "yes";

    printf("Please select the subjects that you have passed\n");
    printf("Have you passed math: ");
    scanf("%s", &str);
    printf("Have you passed science: ");
    scanf("%s", &str2);

    if (strcmp(str, "yes") == 0 && strcmp(str2, "yes") == 0) {
        printf("Congratulations! You have passed both exams, and you win INR 15000.\n");
    } else if (strcmp(str, "yes") == 0 || strcmp(str2, "yes") == 0) {
        printf("Congratulations ! You have passed one subject and you win INR 7500");
    } else {
        printf("Oops! You haven't passed both exams.\n");
    }

    return 0;
}