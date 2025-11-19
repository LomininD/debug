#include <stdio.h>
#include "debug.h"

int main()
{
    initialize_log("html_log.html", "TEXT LOG");

    printf_both("prints both\n");
    printf_debug_msg("prints debug message\n");
    printf_log_only("prints log only\n");

    printf_log_err("prints txt error text\n");
    printf_log_bold("prints txt bold text\n", NULL);
    printf_log_warn("prints txt warning text\n");
    printf_log_note("prints txt note\n", NULL);
    printf_log_abortion("prints txt abortion\n", NULL);

    end_debugging();

    return 0;
}
