// header file for util.cpp
#ifndef UTIL_H_
#define UTIL_H_

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string mode;
//int arr, r, c;
void getMode();
void printMatrix(long int* arr, int r, int c);
void getMatrix(long int* arr, int r, int c);
void transpose();
void multiply();
#endif /*UTIL_H_*/