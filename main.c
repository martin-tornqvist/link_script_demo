#include <stdio.h>

#include <string.h>

int __attribute__((section(".my_section"))) foo_in_my_section = 45;

extern char addr_of_my_section;
extern char size_of_my_section;

const char* const addr_value  = &addr_of_my_section;

const size_t size_value = (size_t)(&size_of_my_section);

int main()
{ 
    printf("Address of my_section   : %p\n", addr_value);
    printf("Size of my section      : %d\n", (int)size_value);

    printf("Foo before memset       : %d\n", foo_in_my_section);

    memset((void*)addr_value, 0, size_value);

    printf("Foo after memset        : %d\n", foo_in_my_section);

    printf("Done!\n");
}
