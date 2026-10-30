
#include <stdio.h>
#include <string.h>

void grok_response(const char *question) {

    printf("\n=== AI Assistant ===\n");

    if (strstr(question, "hello") != NULL) {
        printf("Hello! How can I help you?\n");
    }
    else if (strstr(question, "AI") != NULL) {
        printf("AI means Artificial Intelligence.\n");
    }
    else {
        printf("I am learning to understand your questions.\n");
    }
}

int main() {

    char question[256];

    printf("Enter your question: ");

    fgets(question, sizeof(question), stdin);

    grok_response(question);

    return 0;
}
