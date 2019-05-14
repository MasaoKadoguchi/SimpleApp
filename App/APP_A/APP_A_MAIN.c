#include <stdio.h>
#include "SimpleApp.h"

void APP_A_MAIN()
{
    printf("Called APP_A_MAIN()\n");

    APP_B_MAIN();

    MDL_A_MAIN();
}

void APP_A_SUB()
{
    printf("Called APP_A_SUB()\n");
}