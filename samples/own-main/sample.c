/*
    own-main/sample.c - Sample using Ioto as a library and provide own main()

    This sample provides its own main().
 */

/********************************** Includes **********************************/

#include "ioto.h"

/*********************************** Forwards *********************************/

static void start(void *arg);

/************************************* Code ***********************************/

int main(int argc, char **argv)
{
    rInit(start, 0, 0);

    //  Block until instructed to exit
    rServiceEvents();

    ioTerm();
    rTerm();
    return 0;
}


/*
    Start processing. This runs in a fiber.
*/
static void start(void *arg)
{
    //  This will block while initializing. Other fibers continue to run.
    //  Because we don't have a ioto.json5, no services will be started.
    ioInit(0);

    rInfo("sample", "Hello World\n");

    //  Exit the sample
    rStop();
}

/*
    Copyright (c) Embedthis Software. All Rights Reserved.
    This is proprietary software and requires a commercial license from the author.
 */
