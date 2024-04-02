#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>


char* ReplaceWord(char* str, const char* oldWord, const char* newWord) {
    size_t oldWordLength = strlen(oldWord);
    size_t newWordLength = strlen(newWord);

    size_t newStrSize = CalcSizeNewStr(str, oldWord, newWord) + 1;
    char* newStr = new char[newStrSize] {};
    
    char* ptr = str;
    while ((ptr = strstr(ptr, oldWord)) != nullptr) {
        // Для цикла надо каждый раз копировать с текущего конца, поэтому newStr + strlen(newStr)
        strncpy_s(newStr + strlen(newStr), newStrSize - strlen(newStr), str, ptr - str);
        // Добавляем новое слово
        strcat_s(newStr, newStrSize, newWord);
        // Перемещаем ptr на следующую позицию после найденного слова
        ptr += oldWordLength;
        // Перемещаем str на следующую позицию после найденного слова
        str = ptr;
    }

    // Добавляем оставшуюся часть строки str
    strcat_s(newStr, newStrSize, str);

    return newStr; // Возвращаем модифицированную строку
}


size_t CalcSizeNewStr(char* str, const char* oldWord, const char* newWord) {

	size_t oldWordLength = strlen(oldWord);
	size_t newWordLength = strlen(newWord);
	size_t strLength = strlen(str);
	rsize_t countNewWord = 0;

	char* ptr = str;
	while ((ptr = strstr(ptr, oldWord)) != nullptr) {
		++ptr;
		++countNewWord;
	};

	return strLength + countNewWord * (newWordLength - oldWordLength);
}