#include <iostream>
using namespace std;
#include <windows.h>
#include <ctime>
int main() {
	srand(time(NULL));

	int a;
	int b;
	while (1) {
		a = rand() % -1000000 + -10000;
		b = rand() % -1000 + -1000000000000000;
		Beep(a, b);



	}
	
	
	}

















