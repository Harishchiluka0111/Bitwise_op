#include <stdio.h>
int main()
{
    int data = 2;
    data = ((data & 0xAAAAAAAA)>>1 | (data & 0x55555555)<<1);
    printf("%d",data);
    return 0;
}
