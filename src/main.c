#include "chapter_4.h"

int main()
{
    int chapter_id = 4;
    printf("please input chapter id: ");
    scanf("%d", &chapter_id);
    printf("chapter_id: %d\n", chapter_id);

    switch(chapter_id)
    {
        case 1:
        {
            printf("no code in chapter 1\n");
            break;
        }

        case 4:
        {
            chapter4Run();
            break;
        }

        default:
        {
            break;
        }

    }
    return 0;
}