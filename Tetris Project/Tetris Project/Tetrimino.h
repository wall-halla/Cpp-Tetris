#pragma once
class Tetrimino {
public:
	Tetrimino(const short id) {
		setTetriminoID(id);
		initializeTetriminoArray();
	}

	//Public Functions
	void printTetrimino();
	void setGridLocation(const int locX, const int locY);
	bool* getTetriminoArray(bool array[4][4]);
	void rotateRight();
	void rotateLeft();
	void moveDown();

private:
	//Private Variables
	static const short TETRIMINO_ROWS = 4;
	static const short TETRIMINO_COLS = 4;
	int gridX = 0;
	int gridY = 0;
	short tetriminoID;
	bool tetriminoArray[4][4] = { false };

	//Private Functions
	void setTetriminoID(const short id);
	void initializeTetriminoArray();
};