﻿/*
Розробити клас, який є абстракцією тексту +
та підтримує операції додавання рядка до тексту +
і пошук найдовшого рядка в тексті +
Створити масив об'єктів даного класу +
доповнити декілька текстів новими рядками +
визначити найкоротший із найдовших рядків заданих текстів
*/
#include "header.h"

int main()
{
    vector<Text> texts;
    getTexts(texts);
    extendTexts(texts);
    toConsole(texts);
    shortestOfLongestRows(texts);
}