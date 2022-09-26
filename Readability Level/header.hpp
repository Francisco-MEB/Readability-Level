#ifndef HEADER_HPP
#define HEADER_HPP

#include <math.h>
#include <string.h>
#include <iostream>

std::string enterText();
int countLetters(std::string text);
int countWords(std::string text);
int countSentences(std::string text);
double intToDoubleConversion(int initiallyInt);
double avgLettersPer100Words(double letters, double words);
double avgSentencesPer100Words(double sentences, double words);
int calculateGradeLevel(double lettersPer100Words, double sentencesPer100Words);
void printGradeLevel(int gradeLevel);

#endif
