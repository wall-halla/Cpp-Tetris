#include "Tetrimino.h"
#include <iostream>

void Tetrimino::printTetrimino() {
	for (int row = 0; row < TETRIMINO_ROWS; row++) {
		for (int col = 0; col < TETRIMINO_COLS; col++) {
			std::cout << tetriminoArray[row][col];
		}
		std::cout << "\n";
	}
}

void Tetrimino::setTetriminoID(short id) {
	tetriminoID = id;
}

void Tetrimino::initializeTetriminoArray() {
	switch (tetriminoID) {
	case 0: //tetrimino I
		tetriminoArray[2][0] = true;
		tetriminoArray[2][1] = true;
		tetriminoArray[2][2] = true;
		tetriminoArray[2][3] = true;
		break;
	case 1: //tetrimino O
		tetriminoArray[1][1] = true;
		tetriminoArray[1][2] = true;
		tetriminoArray[2][1] = true;
		tetriminoArray[2][2] = true;
		break;
	case 2: //tetrimino T
		tetriminoArray[2][2] = true;
		tetriminoArray[3][1] = true;
		tetriminoArray[3][2] = true;
		tetriminoArray[3][3] = true;
		break;
	case 3: //tetrimino S
		tetriminoArray[2][1] = true;
		tetriminoArray[2][2] = true;
		tetriminoArray[3][0] = true;
		tetriminoArray[3][1] = true;
		break;
	case 4: //tetrimino Z
		tetriminoArray[2][1] = true;
		tetriminoArray[2][2] = true;
		tetriminoArray[3][2] = true;
		tetriminoArray[3][3] = true;
		break;
	case 5: //tetrimino J
		tetriminoArray[1][0] = true;
		tetriminoArray[2][0] = true;
		tetriminoArray[2][1] = true;
		tetriminoArray[2][2] = true;
		break;
	case 6: //tetrimino L
		tetriminoArray[1][3] = true;
		tetriminoArray[2][1] = true;
		tetriminoArray[2][2] = true;
		tetriminoArray[2][3] = true;
		break;
	}
}

void Tetrimino::rotateRight() {
	for (int row = 0; row < TETRIMINO_ROWS; row++) {
		for (int col = 0; col < TETRIMINO_COLS; col++) {

		}
	}
}

void Tetrimino::setGridLocation(const int locX, const int locY) {
	gridX = locX;
	gridY = locY;
}

bool * Tetrimino::getTetriminoArray(bool array[][4]) {
	return *tetriminoArray;
}