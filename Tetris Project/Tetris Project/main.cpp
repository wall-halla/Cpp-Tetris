#include "Well.h"
#include "Tetrimino.h"
#include <iostream>

void copyArray();

int main() {

	copyArray();


	return 0;
}


void createAndPrintTetriminos(){
	Tetrimino I(0);
	I.printTetrimino();
	std::cout << "\n";
	Tetrimino O(1);
	O.printTetrimino();
	std::cout << "\n";
	Tetrimino T(2);
	T.printTetrimino();
	std::cout << "\n";
	Tetrimino S(3);
	S.printTetrimino();
	std::cout << "\n";
	Tetrimino Z(4);
	Z.printTetrimino();
	std::cout << "\n";
	Tetrimino J(5);
	J.printTetrimino();
	std::cout << "\n";
	Tetrimino L(6);
	L.printTetrimino();
	std::cout << "\n";
}

void copyArray() {
	Tetrimino t(0);
	bool array[4][4];
	bool* a = t.getTetriminoArray(array);
	std::cout << &array[0][0];
	//std::cout << array[0][1];
	//std::cout << array[0][2];
	//std::cout << array[0][3];
}