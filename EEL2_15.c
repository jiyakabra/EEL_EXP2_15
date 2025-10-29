#include <stdio.h>

int main() {
    char position;
    int games, points, assists, rebounds;
    int i, n = 3;  // Number of players

    for (i = 0; i < n; i++) {
        printf("\nPlayer %d\n", i + 1);

        // Clear input buffer before reading a character
        getchar();
        printf("Enter position (G-Guard, F-Forward, C-Center): ");
        scanf("%c", &position);

        printf("Enter games played: ");
        scanf("%d", &games);

        if (games > 0) {
            printf("Enter points scored: ");
            scanf("%d", &points);

            if (position == 'G' || position == 'g') {
                printf("Enter assists: ");
                scanf("%d", &assists);
                printf("Avg points: %.2f\n", (float)points / games);
                printf("Avg assists: %.2f\n", (float)assists / games);
            } 
            else if (position == 'F' || position == 'f' || position == 'C' || position == 'c') {
                printf("Enter rebounds: ");
                scanf("%d", &rebounds);
                printf("Avg points: %.2f\n", (float)points / games);
                printf("Avg rebounds: %.2f\n", (float)rebounds / games);
            } 
            else {
                printf("Invalid position.\n");
            }
        } 
        else {
            printf("No games played.\n");
        }
    }

    return 0;
}


