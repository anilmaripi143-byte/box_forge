#include <stdio.h>
#include "cli.h"

int main(int argc, char *argv[])
{
    if (argc < 3) {
        fprintf(stderr, "Usage: %s run <command> [args...]\n", argv[0]);
        return 1;
    }

    if (cli_run(argc, argv) != 0) {
        return 1;
    }

    return 0;
}
