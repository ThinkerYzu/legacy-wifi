/* -*- mode: c; c-basic-offset: 4; -*- */
#include <stdio.h>
#include <hardware_legacy/wifi.h>

void
print_help(const char *pgname) {
    fprintf(stderr, "Usage: %s <load|unload>\n", pgname);
}

int
main(int argc, const char *argv[]) {
    int r = -1;
    const char *action;
    
    if(argc != 2) {
	print_help(argv[0]);
	return 2;
    }
    
    action = argv[1];
    if(strcmp(action, "load") == 0)
	r = wifi_load_driver();
    else if(strcmp(action, "unload") == 0)
	r = wifi_unload_driver();
    else
	print_help(argv[0]);
    
    return r == 0? 0: 1;
}
