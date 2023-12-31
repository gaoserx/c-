#include <stdio.h>
#include <string.h>
void Next(char* T, int* next)
{
    int i, j;
    i = 1;
    j = 0;
    next[1] = 0;
    while (i < strlen(T))
    {
        if (j == 0 || T[i - 1] == T[j - 1])
        {
            i++;
            j++;
            next[i] = j;
        }
        else
        {
            j = next[j];
        }
    }
}
int KMP(char* S, char* T) 
{
    int next[10];
    Next(T, next);
    int j, i;
    j = i = 1;
    while (i <= strlen(S) && j <= strlen(T))
    {
        
        if (j == 0 || S[i - 1] == T[j - 1])
        {
            j++;
            i++;
        }
        else
        {
            j = next[j];
        }
    }
    if (j > strlen(T))
    {
        return i - (int)strlen(T);
    }
    return -1;

}

int main() 
{
    int i = KMP("ababcabcacbab", "abcac");
    printf("%d", i);
    return 0;
}