#include "header.hpp"
#include <math.h>
#include <string.h>
#include <iostream>

int main()
{
    std::string text = enterText();
    
    int letters = countLetters(text); // count letters in text
    int words = countWords(text); // count words in text
    int sentences = countSentences(text); // count sentences in text
    
    double lettersDoubleConversion = intToDoubleConversion(letters);
    double wordsDoubleConversion = intToDoubleConversion(words);
    double sentencesDoubleConversion = intToDoubleConversion(sentences);
    
    double L = avgLettersPer100Words(lettersDoubleConversion, wordsDoubleConversion);
    double S = avgSentencesPer100Words(sentencesDoubleConversion, wordsDoubleConversion);
    
    int gradeLevel = calculateGradeLevel(L, S);
    
    printGradeLevel(gradeLevel);
}
