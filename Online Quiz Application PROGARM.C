#include <stdio.h>
#include <ctype.h>

int main() {
    char answer;
    int score = 0;

    printf("===== ONLINE QUIZ APPLICATION =====\n\n");

    printf("1. Which language is used for Android development?\n");
    printf("A. Python\nB. Java\nC. C++\nD. HTML\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);

    if(answer == 'B') {
        score++;
    }

    printf("\n2. Which symbol is used for comments in C?\n");
    printf("A. //\nB. ##\nC. **\nD. $$\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);

    if(answer == 'A') {
        score++;
    }

    printf("\n===== QUIZ COMPLETED =====\n");
    printf("Your Final Score: %d/2\n", score);

    return 0;
}
