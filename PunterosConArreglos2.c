#include <stdio.h>
int main(int argc, char const *argv[])
{
    char vocales[5]={'a','e','i','o','u'};
    char *ptr;
    ptr=&vocales[0];
    for (char i = 0; i < 5; i++)
    {
        printf("vocales[%d] %c ",i,vocales[i]);
        printf("%c\n",*(ptr++));
    }
    
    return 0;
}
