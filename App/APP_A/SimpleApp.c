#include <stdio.h>
#include "SimpleApp.h"

void main(void)
{
    printf("SimpleApp Stared\n");
    
    g_iStatus = 0;
    
    // コンポーネントキック
    APP_A_MAIN();
}