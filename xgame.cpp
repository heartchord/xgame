#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main()
{
    xzero::PKG_InterlockedListHead pHead = xzero::KG_InterlockedList::Initialize();

    for (auto i = 0; i < 10; i++)
    {
        xzero::PKG_InterlockedListNode pNode = new xzero::KG_InterlockedListNode();
        xzero::KG_InterlockedList::KG_PushNode(pHead, pNode);
    }
    
    printf("%d, %d\n", pHead->m_nLength, pHead->m_nOpTimes);

    for (auto i = 0; i < 5; i++)
    {
        auto p = xzero::KG_InterlockedList::KG_PopNode(pHead);
        delete p;
    }

    printf("%d, %d\n", pHead->m_nLength, pHead->m_nOpTimes);

    for (auto i = 0; i < 5; i++)
    {
        auto p = xzero::KG_InterlockedList::KG_PopNode(pHead);
        delete p;
    }

    printf("%d, %d\n", pHead->m_nLength, pHead->m_nOpTimes);

    return 0;
}

