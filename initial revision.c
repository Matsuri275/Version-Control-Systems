#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* toss_coin() {
    return rand() % 2 == 0 ? "表" : "裏";
}

int main(){
    char name[50];
    printf("コインを投げています...\n");
    srand(time(0));
    int heads_count = 0, tails_count = 0;

    for (int i = 1; i <= 3; i++) {
        char* result = toss_coin();
        printf("ラウンド%d: %s\n", i, result);
        if (result == "表") heads_count++;
        else tails_count++;
    }

    printf("表: %d, 裏: %d\n", heads_count, tails_count);
}