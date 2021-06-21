#include<stdio.h>
#include<stdlib.h>

typedef unsigned short int counter;

int main(){
    int limit = 0;
    char* input_name = (char*)malloc(100 * sizeof(char));
    int* input_age = (int*)malloc(sizeof(int));
    
    scanf("%d", input_age);
    scanf("%s", input_name);
    
    for (counter i = 0; i < limit; i++);

    printf("%s\n%d\n", input_name, *input_age);
    return 0;
}