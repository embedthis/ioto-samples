/*
    link-agent-main/sample.c - Sample linking with the Ioto agent library and using the Ioto main()

    This sample provides its own main().
 */

/********************************** Includes **********************************/

#include "ioto.h"

/************************************* Code ***********************************/
/*
    Start processing. This runs in a fiber.
*/
PUBLIC int ioStart(void)
{
    //  This will block while initializing. Other fibers continue to run.
    //  Because we don't have a ioto.json5, no services will be started.
    ioInit(0);

    rInfo("sample", "Hello World\n");

    //  Exit the sample
    rStop();
    return 0;
}

/*
    Copyright (c) Embedthis Software. All Rights Reserved.
    This is proprietary software and requires a commercial license from the author.
 */
