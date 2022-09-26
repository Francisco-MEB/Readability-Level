#include "header.hpp"
#include <math.h>
#include <string.h>
#include <iostream>

std::string enterText()
{
    std::cout << "Enter passage from a text in order to classify in terms of grade level.\n\n";
    std::cout << "Text: ";
    std::string textInput{};
    std::getline(std::cin >> std::ws, textInput);
    
    return textInput;
}

int countLetters(std::string text)
{
    int numberOfLetters{};
    for (int i = 0; i < text.length(); i++)
    {
        int asciiEquivalent = static_cast<int>(text[i]);
        if (asciiEquivalent < 65 || asciiEquivalent > 122)
        {
            continue;
        }
        numberOfLetters++;
    }
    
    return numberOfLetters;
}

int countWords(std::string text)
{
    int numberOfWords{};
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            numberOfWords++;
        }
    }
    
    numberOfWords++; // no space after final punctuation
    
    return numberOfWords;
}

int countSentences(std::string text)
{
    int numberOfSentences{};
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            numberOfSentences++;
        }
    }
    
    return numberOfSentences;
}

double intToDoubleConversion(int initiallyInt)
{
    double nowDouble = static_cast<double>(initiallyInt);
    
    return nowDouble;
}

double avgLettersPer100Words(double letters, double words)
{
    double avgLetters = letters * 100 / words;
    
    return avgLetters;
}

double avgSentencesPer100Words(double sentences, double words)
{
    double avgSentences = sentences * 100 / words;
    
    return avgSentences;
}

int calculateGradeLevel(double lettersPer100Words, double sentencesPer100Words)
{
    double index = 0.0588 * lettersPer100Words - 0.296 * sentencesPer100Words - 15.8;
    int roundedIndex = round(index);
    
    return roundedIndex;
}

void printGradeLevel(int gradeLevel)
{
    if (gradeLevel < 1)
    {
        std::cout << "\nBefore Grade 1\n";
    }
    else if (gradeLevel >= 16)
    {
        std::cout << "\nGrade 16+\n";
    }
    else
    {
        std::cout << "\nGrade " << gradeLevel << '\n';
    }
}

