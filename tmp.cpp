// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>

using namespace std;
void PrintHello(char *c)
{
    printf("Hello %s\n",c);
}
int main() {
    void (*ptr)(char *);
    ptr = PrintHello; // ptr = &PrintHello;
    ptr("Arafat"); // (*ptr)("Arafat");
}