// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Commands/IntakeForward.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

IntakeForward::IntakeForward(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::intake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void IntakeForward::Initialize() {
    Robot::leds->SetColor(1, LightDriveCAN::Colors::GREEN, 1.0);
    Robot::leds->Update();
    Robot::intake->cargo->Set(1.0);
}

// Called repeatedly when this Command is scheduled to run
void IntakeForward::Execute() {
    
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeForward::IsFinished() {
    return !Robot::intake->breakBeam->Get(); // breakBeam is false when beam is broken
}

// Called once after isFinished returns true
void IntakeForward::End() {
    Robot::intake->cargo->Set(0.2);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeForward::Interrupted() {

}
