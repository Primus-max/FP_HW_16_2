#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

using namespace std;

void countLetters(char* str) {

	int counts[256] = { 0 };

	for (size_t i = 0; i < strlen(str); ++i) {
		unsigned char c = static_cast<unsigned char>(str[i]);
		counts[c]++;
	}

	printCounts(counts);
}

void printCounts(const int counts[]) {
	Info("Количество повторяющихся символов");
	for (int i = 0; i < 256; ++i) {
		if (counts[i] > 0) {
			cout << static_cast<char>(i) << ": " << counts[i] << endl;
		}
	}
}