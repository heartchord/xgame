#include <stdio.h>
#include <stdlib.h>

#include "xzero.h"
#include "xbuff.h"
#include "xnet.h"

int main()
{
    xnet::KG_SocketStream s;
    printf("%d\n", sizeof(s));
    printf("%d\n", sizeof(SOCKADDR_IN));
    return 0;
}
