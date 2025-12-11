using namespace vex;

extern brain Brain;
extern controller Controller;

extern motor leftF;
extern motor leftM;
extern motor leftB;

extern motor rightF;
extern motor rightM;
extern motor rightB;

extern motor intakeF;
extern motor intakeB;

extern digital_out matchload;
extern digital_out descore;


//Add your devices below, and don't forget to do the same in robot-config.cpp:



void vexcodeInit(void);
void update_robot();
