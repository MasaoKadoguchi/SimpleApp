#include <stdio.h>
#include "..\APP_A\SimpleApp.h"

void APP_B_MAIN()
{
    printf("Called APP_B_MAIN()\n");

    APP_A_SUB();

    DLV_A_MAIN();
}