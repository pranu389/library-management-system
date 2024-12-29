#include <stdio.h>
#define MAX 100

struct Book { int id; char title[50], author[50]; } library[MAX]; 
int count = 0;

int main() {
    int choice; 
    while (1) {
        printf("1.Add 2.Display 3.Exit: "); 
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Title: "); scanf(" %[^\n]", library[count].title);
            printf("Author: "); scanf(" %[^\n]", library[count].author);
            library[count].id = ++count; 
            printf("Added ID: %d\n", count);
        } else if (choice == 2) 
            for (int i = 0; i < count; i++) 
                printf("ID:%d Title:%s Author:%s\n", library[i].id, library[i].title, library[i].author);
        else if (choice == 3) break; 
        else printf("Invalid!\n");
    }
    return 0;
}
