
#include <stdio.h>
// CODE BY LUCKY

struct App {
    char name[50];
    int downloads;
    float rating;
    char developer[50];
};

int main() {
    struct App app[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for App %d:\n", i + 1);
        printf("App Name: ");
        scanf(" %s", &app[i].name);
        printf("Download Count: ");
        scanf("%d", &app[i].downloads);
        printf("Rating: ");
        scanf("%f", &app[i].rating);
        printf("Developer: ");
        scanf("%s", &app[i].developer);
    }


    if (app[0].rating > app[1].rating && app[0].rating > app[2].rating &&
        app[0].rating > app[3].rating && app[0].rating > app[4].rating) {
        printf("\nHighest rated app is: %s\n", app[0].name);
    } else if (app[1].rating > app[2].rating && app[1].rating > app[3].rating &&
               app[1].rating > app[4].rating) {
        printf("\nHighest rated app is: %s\n", app[1].name);
    } else if (app[2].rating > app[3].rating && app[2].rating > app[4].rating) {
        printf("\nHighest rated app is: %s\n", app[2].name);
    } else if (app[3].rating > app[4].rating) {
        printf("\nHighest rated app is: %s\n", app[3].name);
    } else {
        printf("\nHighest rated app is: %s\n", app[4].name);
    }

    return 0;
}
