// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Address of a %d\n", &a); //200
    printf("Address of p : %d , value of p: %d \n",p+1,*(p+1)); // 204 garbage
    char *p0;
    p0 = (char *)p;
    printf("Size of character %d\n", sizeof(char)); // 1
    printf("Address of c : %d , value of c: %d \n",p0+1,*(p0+1)); // 201 4
}
