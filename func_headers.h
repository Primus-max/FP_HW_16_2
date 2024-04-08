#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H

// ������� �������� � ������ ��� ��������� �����
char* ReplaceWord(char* str, const char* oldWord, const char* newWord);

// ������� ������� ������ ����� ������ ��� ������
size_t CalcSizeNewStr(char* str, const char* oldWord, const char* newWord);

// ������� ������ ������ ����� � ��������� �����
void capitalizeSentences(char* str);

// ������� �������� ���� � ������
void countLetters(char* str);

// ������� ������ ������������ ��������
void printCounts(const int counts[]);

// ������� �������� �����
int countDigits(const char* str);
#endif 
