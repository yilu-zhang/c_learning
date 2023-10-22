#include "chapter_4.h"

void chapter4Sec5ConditionalOperation()
{
    int a , b ,c;
    a=7;
    b=9;
    c=a>b ? a : b;
    printf("chapter4Sec5ConditionalOperation result: %d",c);
}

void chapter4Run()
{
    chapter4Sec5ConditionalOperation();
}