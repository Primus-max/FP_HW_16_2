#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

using namespace std;

int countDigits(const char* str) {
    int digits = 0;
    for (size_t i = 0; i < strlen(str); ++i) {
        unsigned char c = static_cast<unsigned char>(str[i]);
        if (isdigit(c)) digits++;
    }
    return digits;
}
