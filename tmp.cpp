// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    printf("Enter size of the array\n");
    scanf("%d", &n);
    int *arr = (int *) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    arr = (int*) realloc(arr,n*2*sizeof(int));
    printf("Address of arr %d , Address of arr2 %d\n",arr,arr2);
    for (int i = 0; i < n*2; i++) {
        printf("%d ", arr2[i]);
    }
}