#include <stdio.h>

void win(){
    printf("Wait a min, you ain't suppose to be here!\n");
    printf("No flag here, but here is a cookie :)\n");

}

void name_printer(){
    char buffer[16];

    printf("Welcome to my simple name printer function:\n");
    printf("Input Name: ");
    scanf("%s", buffer);
    printf("Hi there, %s\n", buffer);

}

int main(){
    name_printer();

    return 0;
}