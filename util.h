/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
Created by: Rutvik Patel
E-mail: rutvik@ualberta.ca
Personal Site: https://patel-rutvik.github.io

This program demonstrates the implementation of a basic matrix transpose and
multiplier program.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#ifndef UTIL_H_
#define UTIL_H_

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string mode;
void getMode();
void printMatrix(long int* arr, int r, int c);
void getMatrix(long int* arr, int r, int c);
void transpose();
void multiply();

#endif /*UTIL_H_*/