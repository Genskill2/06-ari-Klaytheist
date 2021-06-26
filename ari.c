#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

string ari(string s)
{
    float characters = 0, words = 0, sentences = 0, ARI;
    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(isalnum(s[i]))
            characters++;
        if(s[i] == ' ')
            words++;
        if((s[i] == '.' && s[i+1] == '\0') || (s[i] == '.' && s[i+1] == ' ') || s[i] == '!' || s[i] == '?')
            sentences++;
    }
    words++;
    ARI = ceil((4.71*(characters/words))+(0.5*(words/sentences)) - 21.43);
    if(ARI == 1)
        return "Kindergarten";
    else if(ARI == 2)
        return "First/Second Grade";
    else if(ARI == 3)
        return "Third Grade";
    else if(ARI == 4)
        return "Fourth Grade";
    else if(ARI == 5)
        return "Fifth Grade";
    else if(ARI == 6)
        return "Sixth Grade";
    else if(ARI == 7)
        return "Seventh Grade";
    else if(ARI == 8)
        return "Eighth Grade";
    else if(ARI == 9)
        return "Ninth Grade";
    else if(ARI == 10)
        return "Tenth Grade";
    else if(ARI == 11)
        return "Eleventh Grade";
    else if(ARI == 12)
        return "Twelfth Grade";
    else if(ARI == 13)
        return "College Student";
    else if(ARI >= 14)
        return "Professor";
}
