#include <stdio.h>
int main(int argc, char const *argv[])
{
    int vec[5]={2,4,6,8,10};
    int*ptr;
    ptr=&vec[0];
    //printf("\n%p",ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vec[i]);

        printf("\n%d ",*(ptr+i));
    }
    
    return 0;
}
