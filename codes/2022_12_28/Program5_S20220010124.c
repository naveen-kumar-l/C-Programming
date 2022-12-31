#include <stdio.h>
#include <string.h>

void main()
{
    char bs[25], ss[5];
    int len_bs, len_ss, repeate = 0, not_found;
    while (1)
    {
        printf("\nEnter a string of atleast 8 characters and atmost 24 characters: ");
        scanf(" %24[^\n]c", bs);
        len_bs = strlen(bs);
        if (len_bs < 8)
        {
            printf("Sorry please enter a string that that contains at least 8 char you string contains only %d characters.\n", len_bs);
        }
        else
            break;
    }
    while (1)
    {
        printf("\nEnter a string of atleast 1 characters and atmost 4 characters: ");
        scanf(" %4[^\n]c", ss);
        len_ss = strlen(ss);
        if (len_ss < 1)
        {
            printf("Sorry please enter a string that that contains at least 1 char you string contains only %d characters.\n", len_ss);
        }
        else
            break;
    }

    for (int i = 0; i < len_bs - len_ss; i++, not_found = 0)
    {
        for (int j = 0; j < len_ss; j++)
        {
            if (bs[i + j] != ss[j])
            {
                not_found = 1;
            }
        }
        if (not_found == 0)
        {
            repeate++;
        }
    }

    printf("No of times ss is occurring as a subsequence in bs: %d\n", repeate);
}