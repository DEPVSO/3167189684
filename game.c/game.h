#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3


//ÉùÃ÷
void board(char arr[ROW][COL], int row, int col);
void ass__board(char arr[ROW][COL], int row, int col);
void player(char arr[ROW][COL], int row, int col);
void complexer(char arr[ROW][COL], int row, int col);
char iswin(char arr[ROW][COL],int row, int col);
int isqu(char arr[ROW][COL], int row, int col);