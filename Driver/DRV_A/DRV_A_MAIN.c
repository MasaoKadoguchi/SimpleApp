#include <stdio.h>
#include "..\..\APP\APP_A\SimpleApp.h"

void DLV_A_MAIN()
{
    g_iStatus ++;
    printf("Called DLV_A_MAIN()%d\n", g_iStatus);

    MDL_A_SUB();
    APP_A_SUB();
}