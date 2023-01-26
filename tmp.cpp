// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>
using namespace std;

/// ### Character `Arrays` & `Pointers`
void MyPrintFun1(const char *c) // or char c[]
{
    c[0] = 'Z';
    while (*c != '\0') {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main() {
    char C[] = "Hello";
    MyPrintFun1(C);
}