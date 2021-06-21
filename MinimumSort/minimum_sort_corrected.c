#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* minimum(int* list, int len){
    int min = 0x7FFFFFFF;
    int* addr;
    for (int i = 0; i < len; i++){
        if (min > *(list+i)){
            addr = list+i;
            min = *(list+i);
        }
    }
    return addr;
}

void min_sort(int* list, int len){
    for (int i = 0; i < len-1; i++){
        swap(list+i, minimum(list+i, len-i));
    }
}

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
        scanf("%d", (arr+i));
    
    min_sort(arr, size);
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}