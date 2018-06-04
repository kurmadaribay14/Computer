
#include <stdio.h>
#include <string.h>
#define SIZE 100 

int main()
{
    char sen[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    fgets(sen, SIZE, stdin);

    len   = strlen(sen);
    index = 0;

    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
      
        if(sen[wordStart] == ' ')
        {
           
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = sen[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

   
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = sen[i];
        index++;
    }

   
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", sen);
    printf("Reverse ordered words \n%s\n\n", reverse);

    return 0;
}

