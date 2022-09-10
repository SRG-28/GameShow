#include <iostream>
#include<stdlib.h>
using namespace std;
int main(void) {
	int C, A, V;
	A = 100;
	cin >> C; 
	while(C--){
		cin >> V;
		int num = 1 + rand() % ((-1000) - 1000);
		A = A + num;
	}
	cout << A << endl; 
	return 0;
}

