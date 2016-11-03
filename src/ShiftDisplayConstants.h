// github.com/MiguelPynto/ShiftDisplay


#ifndef constants_h
#define constants_h


// time (in milliseconds) to complete a loop, achieving persistence of vision
const int POV = 10;


// characters encoding for common cathode with LSBFIRST
const byte NUMBERS[] = {
	//ABCDEFG
	 B11111100, // 0
	 B01100000, // 1
	 B11011010, // 2
	 B11110010, // 3
	 B01100110, // 4
	 B10110110, // 5
	 B10111110, // 6
	 B11100000, // 7
	 B11111110, // 8
	 B11100110  // 9
};

const byte LETTERS[] = {
	//ABCDEFG
	 B11101110, // a
	 B00111110, // b
	 B10011100, // c
	 B01111010, // d
	 B10011110, // e
	 B10001110, // f
	 B10111100, // g
	 B01101110, // h
	 B00001100, // i
	 B01111000, // j
	 B10101110, // k
	 B00011100, // l
	 B11101100, // m
	 B00101010, // n
	 B00111010, // o
	 B11001110, // p
	 B11100110, // q
	 B10001100, // r
	 B10110110, // s
	 B00011110, // t
	 B00111000, // u
	 B01111100, // v
	 B01111110, // w
	 B01101100, // x
	 B01110110, // y
	 B11011010 // z
};

const byte MINUS = B00000010;
const byte BLANK = B00000000;
const byte POINT = B00000001;


// digit positions encoding for common anode with LSBFIRST
const byte DIGITS[] = {
	B10000000,
	B01000000,
	B00100000,
	B00010000,
	B00001000,
	B00000100,
	B00000010,
	B00000001
};


#endif
