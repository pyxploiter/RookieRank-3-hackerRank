#include <iostream>
#include <vector>
#include <stddef.h>
#include <string>
using namespace std;

int r = -1, c = -1;
void findTheBug(string grid[], int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (grid[i].substr(j, 1) == "X"){
				c = j;
				r = i;
			}
		}
	}
}

int main() {
	string* grid = NULL;
	int n;
	cin >> n;
	grid = new string[n];
	for (int i = 0; i<n; i++) {
		cin >> grid[i];   // Initialize all elements to zero.
	}
	// Return an array containing [r, c]
	findTheBug(grid, n);
	
	cout << r << "," << c;
	
	cout << endl;

	return 0;
}

