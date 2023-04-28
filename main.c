#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int a = 0, b = 0;

        /* ========================= */
        /*                      %d CASES                 */
        /* ========================= */
        printf("======================\n");
        printf("****** d CASES ******\n");
        printf("======================\n");
        a = printf("Expected output:    %d\n", 1134001);
        b = _printfn("Current output:     %d\n", 1134001);
        printf("Expected length:    %d\n", a);
        printf("Current length:     %d\n", b);
        a = printf("Expected output:    %d\n", -4567);
        b = _printfn("Current output:     %d\n", -4567);
        printf("Expected length:    %d\n", a);
        printf("Current length:     %d\n", b);
        a = printf("Expected output:    %d\n", 0);
        b = _printfn("Current output:     %d\n", 0);
        printf("Expected length:    %d\n", a);
        printf("Current length:     %d\n", b);
        a = printf("Expected output:    %d\n", INT_MAX);
        b = _printfn("Current output:     %d\n", INT_MAX);
        printf("Expected length:    %d\n", a);
        printf("Current length:     %d\n", b);
        a = printf("Expected output:    %d\n", INT_MIN);
        b = _printfn("Current output:     %d\n", INT_MIN);
        printf("Expected length:    %d\n", a);
        printf("Current length:     %d\n", b);

        /* ========================= */
        /*                      %i CASES                 */
        /* ========================= */
        printf("======================\n");
        printf("****** i CASES ******\n");
        printf("======================\n");
        a = printf("Expected output:    %i\n", 237482);
        b = _printfn("Current output:     %i\n", 237482);
        printf("Expected length:    %i\n", a);
        printf("Current length:     %i\n", b);
        a = printf("Expected output:    %i\n", -328472);
        b = _printfn("Current output:     %i\n", -328472);
        printf("Expected length:    %i\n", a);
        printf("Current length:     %i\n", b);
        a = printf("Expected output:    %i\n", 0);
        b = _printfn("Current output:     %i\n", 0);
        printf("Expected length:    %i\n", a);
        printf("Current length:     %i\n", b);
        a = printf("Expected output:    %i\n", INT_MAX);
        b = _printfn("Current output:     %i\n", INT_MAX);
        printf("Expected length:    %i\n", a);
        printf("Current length:     %i\n", b);
        a = printf("Expected output:    %i\n", INT_MIN);
        b = _printfn("Current output:     %i\n", INT_MIN);
        printf("Expected length:    %i\n", a);
        printf("Current length:     %i\n", b);
        return (0);
}
