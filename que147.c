#include <stdio.h>

struct Emp {
    int id;
    float sal;
};

int main() {
    struct Emp e = {101, 25000};
     
    FILE *f = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, f);
    fclose(f);
     
    f = fopen("emp.dat", "rb");
    struct Emp e2;
    fread(&e2, sizeof(e2), 1, f);
    fclose(f);
    
    printf("ID: %d, Sal: %.0f\n", e2.id, e2.sal);
    return 0;
}
