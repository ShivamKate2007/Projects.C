#include <stdio.h>

int main() {
    char *questions[] = {
        "What is 3*5?",
        "What is 5+7?",
        "What is 2+2?",
        "What is 5*2?",
        "What is 1+1?"
    };
    char *options[][4] = {
        {"1. 25", "2. 65", "3. 15", "4.20"},
        {"1. 10", "2. 12", "3. 14", "4. 15"},
        {"1. 4", "2. 10", "3. 11", "4. 1"},
        {"1. 10", "2. 60", "3. 50", "4. Fitzgerald"},
        {"1. Earth", "2. Mars", "3. Jupiter", "4. Saturn"}
    };
    int correctAnswers[] = {3, 2, 1, 1, 3};
    int score = 0;
    int answer;
    int totalQuestions = sizeof(questions) / sizeof(questions[0]); 
    printf("Welcome to the Quiz!\n");
    printf("You will be asked %d multiple choice questions. Choose the correct option (1-4).\n", totalQuestions);
    for (int i = 0; i < totalQuestions; i++) {
        printf("\nQuestion %d: %s\n", i + 1, questions[i]);
    
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);
        if (answer == correctAnswers[i]) {
            printf("Correct!\n");
            score++;  // Increment score if the answer is correct
        } else {
            printf("Wrong! The correct answer is option %d.\n", correctAnswers[i]);
        }
    }
    printf("\nYour total score is: %d/%d\n", score, totalQuestions);
    return 0;
}

