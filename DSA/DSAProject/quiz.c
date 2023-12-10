#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Option {
    char text[100];
    struct Option *next;
};

struct Question {
    char text[200];
    struct Option *options;
    int correctOption;
};

struct Option* createOptionNode(const char *text) {
    struct Option *newOption = (struct Option*)malloc(sizeof(struct Option));
    strcpy(newOption->text, text);
    newOption->next = NULL;
    return newOption;
}

struct Question* createQuestionNode(const char *text, const char *options[], int correctOption) {
    struct Question *newQuestion = (struct Question*)malloc(sizeof(struct Question));
    strcpy(newQuestion->text, text);
    newQuestion->options = NULL;
    newQuestion->correctOption = correctOption;

    for (int i = 0; options[i] != NULL; ++i) {
        struct Option *newOption = createOptionNode(options[i]);
        newOption->next = newQuestion->options;
        newQuestion->options = newOption;
    }

    return newQuestion;
}

void displayQuestion(struct Question *question) {
    printf("%s\n", question->text);
    struct Option *currentOption = question->options;
    int optionNumber = 1;
    while (currentOption != NULL) {
        printf("%d. %s\n", optionNumber, currentOption->text);
        currentOption = currentOption->next;
        optionNumber++;
    }
}

int main() {
    struct Question *questions[3];

    const char *options1[] = {"Option 1", "Option 2", "Option 3", "Option 4", NULL};
    questions[0] = createQuestionNode("Question 1: What is 2 + 2?", options1, 4);

    const char *options2[] = {"Option A", "Option B", "Option C", "Option D", NULL};
    questions[1] = createQuestionNode("Question 2: Which is a vowel?", options2, 2);

    const char *options3[] = {"Option X", "Option Y", "Option Z", "Option W", NULL};
    questions[2] = createQuestionNode("Question 3: Which is a consonant?", options3, 1);

    int totalQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    for (int i = 0; i < totalQuestions; ++i) {
        displayQuestion(questions[i]);
        int userChoice;
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        if (userChoice == questions[i]->correctOption) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct option is: %d\n", questions[i]->correctOption);
        }

        printf("Your current score: %d\n", score);
    }

    printf("Quiz completed! Final score: %d/%d\n", score, totalQuestions);

    for (int i = 0; i < totalQuestions; ++i) {
        struct Option *currentOption = questions[i]->options;
        while (currentOption != NULL) {
            struct Option *temp = currentOption;
            currentOption = currentOption->next;
            free(temp);
        }
        free(questions[i]);
    }

    return 0;
}
