ENTRY(Reset_Handler)

/* default stack sizes.

These are used by the startup in order to allocate stacks for the different modes.
*/

__Stack_Size = 1024 ;

PROVIDE ( _Stack_Size = __Stack_Size ) ;

__Stack_Init = _estack  - __Stack_Size ;

/*"PROVIDE" allows to easily override these values from an object file or the commmand line.*/
PROVIDE ( _Stack_Init = __Stack_Init ) ;

/*
There will be a link error if there is not this amount of RAM free at the end.
*/
_Minimum_Stack_Size = 0x100 ;



/* higher address of the user mode stack (end of 128K RAM on AHB bus)*/
_estack = 0x20020000;

    PROVIDE ( end = _ebss );
    PROVIDE ( _end = _ebss );

