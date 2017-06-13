#include <stdio.h>
#include <stdlib.h>

#include "list.h"
using namespace xzero;

int main()
{
    PKG_InterlockedListHead pHead = KG_InitializeInterlockedList();

    for (auto i = 0; i < 10; i++)
    {
        KG_PushNodeToInterlockedList(pHead, new KG_InterlockedListNode());
    }
    
    printf("%d, %d\n", pHead->m_nLength, pHead->m_nOpTimes);

    for (auto i = 0; i < 5; i++)
    {
        auto p = KG_PopNodeFromInterlockedList(pHead);
        delete p;
    }

    printf("%d, %d\n", pHead->m_nLength, pHead->m_nOpTimes);

    for (auto i = 0; i < 5; i++)
    {
        auto p = KG_PopNodeFromInterlockedList(pHead);
        delete p;
    }

    printf("%d, %d\n", pHead->m_nLength, pHead->m_nOpTimes);

    return 0;
}
