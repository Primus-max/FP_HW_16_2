#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>


char* ReplaceWord(char* str, const char* oldWord, const char* newWord) {
    size_t oldWordLength = strlen(oldWord);
    size_t newWordLength = strlen(newWord);

    char* ptr = str;
    while ((ptr = strstr(ptr, oldWord)) != nullptr) {
        if (*(ptr + oldWordLength) == ' ' || 
            *(ptr + oldWordLength) == '\0' || 
            *(ptr + oldWordLength) == ',' || 
            *(ptr + oldWordLength) == '.') { // Определяю завершение слова
            size_t remainingChars = strlen(ptr + oldWordLength) + 1; // Количество символов после найденного слова
            memmove(ptr + newWordLength, ptr + oldWordLength, remainingChars); // Перемещаем оставшуюся часть строки на новое место
            memcpy(ptr, newWord, newWordLength); // Копируем новое слово вместо найденного
            ptr += newWordLength; // Перемещаем указатель к концу нового слова
        }
        else {
            ptr += oldWordLength; // Пропускаем найденное слово и переходим к следующему символу
        }
    }

    return str; // Возвращаем модифицированную строку
}