//============================================================================
// Name        : hello-world-eclipse.cpp
// Author      : napobear
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#define LBREAK 5
#define WIDTH  3
#define ENDLOOP 99

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	for (int i = 0; i <= ENDLOOP; ++i) {
		cout << setw(WIDTH) << i;
		if(i % LBREAK == LBREAK-1) {
			cout << endl;
		}
	}
	return 0;
}
