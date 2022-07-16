#include "print.h"
#include "lib/checks.h"
void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOUR_YELLOW, PRINT_COLOUR_BLACK);
    print_str("Hello, world!\n");
    StartChecker();
    CountTest();
    RAMTest();
    PRINT_WARNING("Hyper OS is still in the dev stage and may be unstable\n");
    PRINT_FAIL("Test Fail\n");
    print_str("Booting... booted!");
    print_str("\n\nWELCOME TO HYPEROS!\n============================");
}
