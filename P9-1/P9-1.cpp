#include <iostream>
using namespace std;


int fourDigitRandNum();

int main() {

	srand(time(NULL));
	int fourDigitNumbers[10];

	// Generation of 10 four digit numbers
	for (int i = 0; i < 10; ++i) {
		fourDigitNumbers[i] = fourDigitRandNum();
	}
	
	// Displaying all four digit numbers
	cout << "All four digit Numbers:  ";
	for (int i = 0; i < 10; i++) {
		cout << fourDigitNumbers[i] << "  ";
	}
	cout << endl;
}

//code for generation of 10 four digit numbers
int fourDigitRandNum() {
	return (rand() % 9 + 1) * 1000 + (rand() % 10) * 100 + (rand() % 10) * 10 + (rand() % 10);
}