// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>
using namespace std;
void Double(int arr[], int sz) {
    int SZ = sizeof(arr)/sizeof(arr[0]); // 2
    printf("Size of arr %d & Size of arr[0] %d \n",sizeof(arr),sizeof(arr[0]));// 8 4
    for (int i = 0; i < sz; i++) {
        *(arr + i) = *(arr + i) * 2;
        // Or
        // arr[i] = arr[i] * 2;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; //Address 200 204 208 212 216
    int sz = sizeof(arr) / sizeof(arr[0]);
    Double(arr, sz);
    for (int i = 0; i < sz; i++) {
        printf("%d\n", *(arr + i));
    }
}
