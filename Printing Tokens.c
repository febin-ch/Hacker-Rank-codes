//easyyy
#include <stdio.h>
int main() {
    char word[100];
    while (scanf("%s", word) != EOF) {
        printf("%s\n", word);
    }
    return 0;
}

//fgets
#include <stdio.h>

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", sentence[i]);
         }
    }
    return 0;
}

