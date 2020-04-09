#pragma once
//define function that adds two numbers
int add(int x, int y);

//overloading parameters
int add(int x, int y, int z);

//overloading parameter type -- this is risky
bool test(bool x);

bool test(double x);

//void returns nothing
void test(void);
