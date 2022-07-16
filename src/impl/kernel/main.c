#include "print.h"
#include "lib/checks.h"
void kernel_main() {
    print_clear();
    StartChecker();
    CountTest();
    RAMTest();
    print_clear(); // Comment out this line to show check output
    print_str("WELCOME TO HYPEROS!\n============================");
    
}
