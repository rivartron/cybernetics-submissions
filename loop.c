#include<stdio.h>
#include<stdlib.h>

typedef unsigned short int counter;

int main(){
    int limit = 0x10000;
    char* input_name = (char*)malloc(5 * sizeof(char));
    char* input_age = (int*)malloc(sizeof(int));
    
    scanf("%d", input_age);
    gets(input_name);
    
    for (counter i = 0; i < limit; i++);

    printf("%s\n%d\n", input_name, input_age);
    return 0;
}