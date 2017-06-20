#include <stdio.h>
#include <stdlib.h>

#include "xzero.h"
#include "xbuff.h"

unsigned int g_uMemBlockSizeArray[] =
{
    1 * 8 + 32,
    2 * 8 + 32,
    3 * 8 + 32,
    4 * 8 + 32,
    5 * 8 + 32,
    6 * 8 + 32,
    7 * 8 + 32,
    8 * 8 + 32,
    16 * 8 + 32,
    32 * 8 + 32,
    64 * 8 + 32,
    96 * 8 + 32,
    1 * 1024 + 32,
    2 * 1024 + 32,
    3 * 1024 + 32,
    4 * 1024 + 32,
    5 * 1024 + 32,
    6 * 1024 + 32,
    7 * 1024 + 32,
    8 * 1024 + 32,
    16 * 1024 + 32,
    32 * 1024 + 32,
    64 * 1024 + 32
};

const unsigned int g_uMemBlockSizeArraySize = sizeof(g_uMemBlockSizeArray) / sizeof(g_uMemBlockSizeArray[0]);
static xzero::KG_MemoryPool<g_uMemBlockSizeArraySize, g_uMemBlockSizeArray> g_MemoryPool;

void test()
{
    xbuff::SPIKG_Buffer spBuff = xbuff::KG_GetSharedBuffFromMemoryPool(&g_MemoryPool, 1024, 4);
}

int main()
{
    xzero::KG_GlobalMemLeakDetect globalMemLeakDetect;
    test();
    return 0;
}
