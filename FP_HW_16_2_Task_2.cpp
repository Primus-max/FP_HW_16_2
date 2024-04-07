#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

using namespace std;

void capitalizeSentences(char* str) {
    bool makeUpper = true; 

    for (size_t i = 0; i < strlen(str); ++i) {
        if (str[i] >= '�' && str[i] <= '�') {
            makeUpper = false;
            continue;
        }

        if (makeUpper && str[i] >= '�' && str[i] <= '�') {
            str[i] -= ('�' - '�'); 
            makeUpper = false;
        }

        if ((str[i] == '.' || str[i] == '!' || str[i] == '?') && i + 1 < strlen(str)) {
            if (str[i + 1] != ' ') {
                makeUpper = true; 
            }
        }
    }
}
