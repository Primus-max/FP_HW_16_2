#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H

struct CharCounts {
    unsigned int letters = 0;
    unsigned int digits = 0;
    unsigned int others = 0;
};

// Функция удаляет из строки символ с заданным номером.
void deleteCharacterAtIndex(char str[], int index);

// Функция удаляет из строки все вхождения заданного символа.
void deleteSymbol(char str[], char sym);

// Функция вставляет указанный символ в указанную позицию
void insertCharToPos(char* str, char sym, int pos);

// Функция заменяет все указанные символы на указанный
void replaceAllSymbols(char* str, char src, char ptr);

// Функция считает количество вхождений указанного символа
int countingRepeatedChar(char* str, char sym);

CharCounts countCharacters(const char* str);

#endif 
