#include "Well.h"
#include <iostream>

void Well::initializeWell() {
	for (int row = 0; row < this->WELL_ROWS; row++) {
		for (int col = 0; col < this->WELL_COLS; col++) {
			if ( (row == 0) || (row == (WELL_ROWS - 1)) || (col == 0) || (col == (WELL_COLS - 1)) ) {
				wellArray[row][col] = 1;
			}
			else {
				wellArray[row][col] = 0;
			}
		}
	}
};

void Well::printWell() {
	for (int row = 0; row < WELL_ROWS; row++) {
		for (int col = 0; col < WELL_COLS; col++) {
			std::cout << wellArray[row][col];
		}
	std::cout << "\n";
	}
};