#include <stdio.h>
#include <string.h>

struct iden{
    char name;
    int num;
};

int main(){
    struct iden a = {"abc",73};
    struct iden b = {"abc",73};
    if(strcmp(a.name,b.name)==0, a.num == b.num){
        printf("Structures are identical");

    }
    else{
        printf("Structures are not identical");
    }
}