#include <stdio.h>

#include "ev3.h"

#include "ev3_light.h"

int main( void )

{

    printf( "Hello, World!\n" );

    ev3_init();//funcao da biblioteca ev3

    switch ( get_light( LIT_LEFT )) {

    case LIT_GREEN:

        set_light( LIT_LEFT, LIT_RED );

        break;

    case LIT_RED:

        set_light( LIT_LEFT, LIT_AMBER );

        break;

    default:

        set_light( LIT_LEFT, LIT_GREEN );

        break;

    }

    ev3_uninit();

    return 0;

}
