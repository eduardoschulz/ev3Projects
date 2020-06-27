#include <stdio.h>

#include "ev3.h"
#include "ev3_port.h"
#include "ev3_tacho.h"


int main(){
uint8_t sn;
ev3_init();
ev3_tacho_init();
if ( ev3_search_tacho( LEGO_EV3_L_MOTOR, &sn, 0 )) {
    set_tacho_stop_action_inx( sn, TACHO_BRAKE );
    set_tacho_speed_sp( sn, 500 );
    set_tacho_time_sp( sn, 5000 );
    set_tacho_ramp_up_sp( sn, 2000 );
    set_tacho_ramp_down_sp( sn, 2000 );
    set_tacho_command( sn, "run_timed" );
}
ev3_uninit();

}