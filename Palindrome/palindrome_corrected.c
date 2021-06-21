#include<stdio.h>

int main(){

    int input, num = 0, temp;
    scanf("%d", &input);
    temp = input;

    while(temp){
        num *= 10;
        num += (temp % 10);
        temp /= 10;
    }

    if (input == num)
        printf("Is palindrome.\n");
    else
        printf("Isn't palindrome.\n");

    return 0;
}