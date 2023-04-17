#include <stdio.h>

int main()
{
    int a, b, c;
    printf ("Digite o primeiro termo: ");
    scanf ("%d", &a);
    printf ("Digite o segundo termo: ");
    scanf ("%d", &b);
    
    for (int i = 3; i <= 10; i++) {
        if (i % 2 == 0) {
            c = b = a;
            printf ("Termo %d: %d\n", i, c);
        } else {
            c = b + a;
            printf ("Termo %d: %d\n", i, c);
        }
        a = b;
        b = c;
    }
    
    return 0;
}