#include <stdio.h>

int main()
{
int x,y;
for(x=1;x<10;x++)
{
for(y=1;x<=x;y++)
{
printf("^");
}
printf("\n");
}
for(x=10;x>0;x--)
{
for(y=1;x<=x;y++)
{
printf("^");
}
printf("\n");
}
return 0;
}
