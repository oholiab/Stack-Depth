#include <stdio.h>

int doself(int n);

int main(int argc, char** argv){
	doself(3);
	doself(4);
	return 0;
}

int doself1(int n){
	if(n==0) return 1;
	return doself1(n-1);
}

int doself(int n){
	printf("Calling doself with recursion of %d\n", n);
	return doself1(n);
}
