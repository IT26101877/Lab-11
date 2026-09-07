#include <stdio.h>
//using parallel arrays
int main() {
    char names[2][50];//we'll only take 2 students
    int ids[2];
    float scores[2];

    for (int i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);//get the names of the 2 students

        printf("Enter name: ");
        scanf("%49s", names[i]);

        printf("Enter ID: ");//get the students IDs
        scanf("%d", &ids[i]);

        printf("Enter score: ");//get their scores
        scanf("%f", &scores[i]);
    }

    printf("Student Details\n");

    for (int i = 0; i < 2; i++) {
        printf("%s (%d), Score: %.0f\n", names[i], ids[i], scores[i]);//print the details
    }

    return 0;
}
