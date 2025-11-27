#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));
    
    s->id = 101;
    s->marks = 85.5;
    
    printf("ID: %d\n", s->id);
    printf("Marks: %.1f\n", s->marks);
    
    free(s);
    return 0;
}
