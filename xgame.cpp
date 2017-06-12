#include <stdio.h>
#include <stdlib.h>

#include "pattern.h"

class KG_Example// : private xzero::KG_UnConstructable
{
    KG_SINGLETON_DCL_STRICT(KG_Example)
};

int main()
{
    KG_Example &r = KG_SINGLETON_REF(KG_Example);
    KG_Example *p = KG_SINGLETON_PTR(KG_Example);
    return 0;
}

