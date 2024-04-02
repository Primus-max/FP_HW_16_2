#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>


char* ReplaceWord(char* str, const char* oldWord, const char* newWord) {
	size_t oldWordLength = strlen(oldWord);
	size_t newWordLength = strlen(newWord);

	size_t newStrSize = CalcSizeNewStr(str, oldWord, newWord) + 1;
	char* newStr = new char[newStrSize];

	char* ptr = str;
	while ((ptr = strstr(ptr, oldWord)) != nullptr) {
		if (*(ptr + oldWordLength) == ' ' ||
			*(ptr + oldWordLength) == '\0' ||
			*(ptr + oldWordLength) == ',' ||
			*(ptr + oldWordLength) == '.') { // ��������� ���������� �����
			size_t remainingChars = strlen(ptr + oldWordLength) + 1; // ���������� �������� ����� ���������� �����
			memmove(ptr + newWordLength, ptr + oldWordLength, remainingChars); // ���������� ���������� ����� ������ �� ����� �����
			memcpy(ptr, newWord, newWordLength); // �������� ����� ����� ������ ����������
			ptr += newWordLength; // ���������� ��������� � ����� ������ �����
		}
		else {
			ptr += oldWordLength; // ���������� ��������� ����� � ��������� � ���������� �������
		}
	}

	return str; // ���������� ���������������� ������
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