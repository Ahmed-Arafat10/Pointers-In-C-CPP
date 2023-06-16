// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>
using namespace std;

// 1-D Array
void Fun1_1(int A[]) {}

void Fun1_2(int *A) {}

// 2-D Array
void Fun2_1(int B[][2]) {}

void Fun2_2(int (*p)[2]) {}

// 3-D Array
void Fun3_1(int C[][2][2]) {}

void Fun3_2(int (*p)[2][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                //cout<<p[i][j][k]<<" ";
                cout << *(*((*p + i) + j) + k) << " ";
            }
            cout << "\t";
        }
        puts("");
    }
}

// Wrong Syntax
// void Fun3_2(int ***C) {}

int main() {

    int C[3][2][2] = {{{2, 5}, {7,  9}},
                      {{3, 4}, {6,  1}},
                      {{0, 8}, {11, 13}}};

    int (*p)[2][2] = C;
    Fun3_2(C);
}