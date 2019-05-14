#include <stdio.h>
#include "..\..\APP\APP_A\SimpleApp.h"

void MDL_A_MAIN()
{
    printf("Called MDL_A_MAIN()\n");

    DLV_A_MAIN();
}

void MDL_A_SUB()
{
    printf("Called MDL_A_SUB()\n");
}