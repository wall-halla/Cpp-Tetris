#pragma once
class Well {

public: 
	Well() {
		initializeWell();
	}
	void printWell();

private: 
	static const int WELL_ROWS = 16;
	static const int WELL_COLS = 8;
	int wellArray[WELL_ROWS][WELL_COLS];
	void initializeWell();
};

