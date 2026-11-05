#include <stdio.h>
#include "cli.h"
#include "process.h"

int cli_run(int argc, char *argv[])
{
    if (argc < 3) {
        fprintf(stderr, "Usage: %s run <command> [args...]\n", argv[0]);
        return 1;
    }

    if (argv[1][0] != 'r' ||
        argv[1][1] != 'u' ||
        argv[1][2] != 'n' ||
        argv[1][3] != '\0') {
        fprintf(stderr, "Unknown command: %s\n", argv[1]);
        return 1;
    }

    return process_run(&argv[2]);
}
