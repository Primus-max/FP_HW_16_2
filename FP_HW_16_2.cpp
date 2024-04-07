﻿#include "func_headers.h"
#include "message_utils.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    char someText[] = "Свет светит, свет проникает в темноту. "
        "Темнота спокойна, темнота медленно окутывает все вокруг. "
        "Воздух чист, воздух полон аромата цветов. "
        "Цветы расцветают, цветы пахнут, цветы красивы. "
        "Листья шуршат, листья покрывают землю. "
        "Земля теплая, земля плодородна. "
        "Плоды спелые, плоды сочные, плоды сладкие. "
        "Жизнь прекрасна, жизнь удивительна, жизнь полна сюрпризов.";


    
        
    cout <<"Есть некоторый текст: \n" << someText << endl;

    char oldWord[30]{};
    char newWord[30]{};

    Info("Введите слово которое надо заменить в тексте и слово на которое надо заменить");
    cin >> oldWord >> newWord;
   char* newSentence =  ReplaceWord(someText, oldWord, newWord);
   cout << newSentence;
    
}
