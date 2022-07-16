#include "print.h"

void PRINT_OKAY(const char* __message)
{
    print_set_color(PRINT_COLOUR_LIGHT_GRAY, PRINT_COLOUR_BLACK);
    print_str("[  ");
    print_set_color(PRINT_COLOUR_GREEN, PRINT_COLOUR_BLACK);
    print_str("OK");
    print_set_color(PRINT_COLOUR_LIGHT_GRAY, PRINT_COLOUR_BLACK);
    print_str("  ] ");
    print_str((char*)__message);
    print_str("\n");
}

void PRINT_FAIL(const char* __message)
{
    print_set_color(PRINT_COLOUR_LIGHT_GRAY, PRINT_COLOUR_BLACK);
    print_str("[");
    print_set_color(PRINT_COLOUR_RED, PRINT_COLOUR_BLACK);
    print_str("FAIL");
    print_set_color(PRINT_COLOUR_LIGHT_GRAY, PRINT_COLOUR_BLACK);
    print_str("] ");
    print_str((char*)__message);
    print_str("\n");
}

void PRINT_WARNING(const char* __message)
{
    print_set_color(PRINT_COLOUR_LIGHT_GRAY, PRINT_COLOUR_BLACK);
    print_str("[");
    print_set_color(PRINT_COLOUR_MAGENTA, PRINT_COLOUR_BLACK);
    print_str("   WARN   ");
    print_set_color(PRINT_COLOUR_LIGHT_GRAY, PRINT_COLOUR_BLACK);
    print_str("] ");
    print_str((char*)__message);
    print_str("\n");
}