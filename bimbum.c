#include <stdio.h>
int main(){
for (int i = 0; i < 100; i++)
{
    if(i % 3 == 0 && i % 5 != 0)
    printf("%d - bim\n", i);
    else if(i % 5 == 0 && i % 3 != 0)
    printf("%d - bum\n", i);
    else if(i % 5 == 0 && i % 3 == 0)
    printf("%d - bimbum\n", i);
    else ("%d\n",i);
}
return 0;
}