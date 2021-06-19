#include<stdio.h>

int main(){

    int input, num, temp;
    scanf("%d", &input);
    temp = input;

    while(input){
        num += (temp % 10);
        temp /= 10;
    }

    if (input == num)
        printf("Is palindrome.\n");
    else
        printf("Isn't palindrome.\n");

    return 0;
}