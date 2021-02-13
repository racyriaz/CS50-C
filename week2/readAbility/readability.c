#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int wordCounter(string text);
int letterCounter(string text);
int sentenceCounter(string text);

int main(void)
{
    // taking input
    string text = get_string("Text: ");
    // getting word count
    int w_count = wordCounter(text);
    // getting letter count
    int letters = letterCounter(text);
    // getting sentence count
    int s_count = sentenceCounter(text);

    // calculating the average counts per 100
    float L = (float) letters * 100 / w_count ;
    float S = (float) s_count * 100 / w_count;

    // rounding the index value after applying the Coleman-Liau formula
    int index = round(0.0588 * L - 0.296 * S - 15.8) ;

    // printing the grade score
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %d\n", index);
    }
    else
    {
        printf("Grade 16+\n");
    }

}

int wordCounter(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text) ; i < n ; i++)
    {
        if isspace(text[i])
        {
            count++;
        }
    }
    return ++count;
}
int letterCounter(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text) ; i < n ; i++)
    {
        if isalnum(text[i])
        {
            count++;
        }
    }
    return count;
}
int sentenceCounter(string text)
{
    int count = 0 ;
    for (int i = 0, n = strlen(text) ; i < n ; i++)
    {
        if (text[i] == '.' || (text[i]) == '?' || text[i] == '!' || text[i] == '\n')
        {
            count++;
        }
    }
    return count;
}