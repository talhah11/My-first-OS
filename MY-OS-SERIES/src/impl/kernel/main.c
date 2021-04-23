#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("\n\n");
    print_str("    @@@@@    ^^^^   !!!!!    $$$$$    %%%%%%\n");
	print_str("   @         ^      !        $        %\n");
	print_str("   @         ^      !        $        %\n");
	print_str("    @@@@@    ^^^^   !!!!!    $        %%%%%%\n");
	print_str("         @   ^      !        $             %\n");
	print_str("         @   ^      !        $             %\n");
	print_str("    @@@@@    ^^^^   !!!!!    $$$$$    %%%%%%\n");
}