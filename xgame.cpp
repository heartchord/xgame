#include <stdio.h>
#include <stdlib.h>

#include "pattern.h"

class A
{
    //KG_SINGLETON_DECLARE(A);

public:
    int a;
};

int main()
{
    A &r = KG_SINGLETON_REF(A);
    r.a = 1;

    A *p = KG_SINGLETON_PTR(A);
    printf("%d", p->a);

    return 0;
}

