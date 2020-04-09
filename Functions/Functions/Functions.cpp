//define function that adds two numbers
int add(int x, int y) {
	return x + y; //return the sum
}

//overloading parameters
int add(int x, int y, int z) {
	return add(x,y)+z; //return the sum
}

//overloading parameter type -- this is risky
bool test(bool x) {
	return x;
}
bool test(double x) {
	return x > 0; //or return x > 0
}

//void returns nothing
void test(void) {
	return;
}

