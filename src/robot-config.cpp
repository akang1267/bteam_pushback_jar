#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

controller Controller(primary);

//The motor constructor takes motors as (port, ratio, reversed), so for example
motor leftF = motor(PORT6, ratio6_1, false);
motor leftM = motor(PORT5, ratio6_1, false);
motor leftB = motor(PORT8, ratio6_1, false);

motor rightF = motor(PORT7, ratio6_1, true);
motor rightM = motor(PORT9, ratio6_1, true);
motor rightB = motor(PORT20, ratio6_1, true);

motor intakeF = motor(PORT7, ratio6_1, true);
motor intakeB = motor(PORT8, ratio6_1, true);

digital_out descore = digital_out(Brain.ThreeWirePort.F);
digital_out matchload = digital_out(Brain.ThreeWirePort.G);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}