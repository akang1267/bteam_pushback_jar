#include "vex.h"
#include "robot-config.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

bool descore_state = false;
bool matchload_state = false;

void toggle_matchload(){
    matchload_state = !matchload_state;
    matchload.set(matchload_state);
}

void toggle_descore(){
    descore_state = !descore_state;
    descore.set(descore_state);
}

void update_robot(){

    intakeF.setVelocity(600, rpm);
    intakeB.setVelocity(600, rpm);

    intakeF.stop();
    intakeB.stop();

    Controller.ButtonL1.pressed(toggle_descore);
    Controller.ButtonX.pressed(toggle_matchload);

    if (Controller.ButtonR1.pressing()){
        intakeF.spin(forward);
    }

    if (Controller.ButtonR2.pressing()){
        intakeF.spin(forward);
        intakeB.spin(forward);
    }
    if (Controller.ButtonL2.pressing()){
        intakeF.spin(reverse);
        intakeB.spin(reverse);
    }

}