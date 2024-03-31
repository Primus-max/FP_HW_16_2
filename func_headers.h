#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H

struct CharCounts {
    unsigned int letters = 0;
    unsigned int digits = 0;
    unsigned int others = 0;
};

// ������� ������� �� ������ ������ � �������� �������.
void deleteCharacterAtIndex(char str[], int index);

// ������� ������� �� ������ ��� ��������� ��������� �������.
void deleteSymbol(char str[], char sym);

// ������� ��������� ��������� ������ � ��������� �������
void insertCharToPos(char* str, char sym, int pos);

// ������� �������� ��� ��������� ������� �� ���������
void replaceAllSymbols(char* str, char src, char ptr);

// ������� ������� ���������� ��������� ���������� �������
int countingRepeatedChar(char* str, char sym);

CharCounts countCharacters(const char* str);

#endif 
