#pragma once
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
void Initialize(char arr[ROWS][COLS], int row, int col, int x);
void print(char arr[ROWS][COLS], int row, int col); 
void Bury(char arr[ROWS][COLS], int row, int col);
void sweap(char arr1[ROWS][COLS],char arr2[ROWS][COLS]);
char cbb(char arr1[ROWS][COLS], int x, int y);
int cbb2(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int x, int y,int a);
