#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H

// Функция заменяет в строке все вхождения слова
char* ReplaceWord(char* str, const char* oldWord, const char* newWord);

// Функция считает размер новой памяти для строки
size_t CalcSizeNewStr(char* str, const char* oldWord, const char* newWord);

// Функция делает каждое слово с заглавной буквы
void capitalizeSentences(char* str);

// Функция подсчёта букв в тексте
void countLetters(char* str);

// Функция печати подсчитанных символов
void printCounts(const int counts[]);

// Функция подсчёта цифры
int countDigits(const char* str);
#endif 
