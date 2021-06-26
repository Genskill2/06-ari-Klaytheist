#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

string ari(string s)
{
    string grade_level[] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth Grade", "College Student", "Professor"};
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
    if(ARI > 14)
        return "Professor";
    return grade_level[(int)(ARI-1)];
}
