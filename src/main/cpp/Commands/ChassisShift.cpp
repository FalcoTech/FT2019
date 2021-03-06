// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Commands/ChassisShift.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

ChassisShift::ChassisShift(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::chassis.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void ChassisShift::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void ChassisShift::Execute() {
    if (Robot::chassis->pneumaticStatus == true){
        Robot::chassis->shifter->Set(frc::DoubleSolenoid::Value::kForward);
        Robot::chassis->pneumaticStatus = false;

        Robot::leds->SetColor(2, LightDriveCAN::Colors::RED);
        Robot::leds->Update();
    }
    else {
        Robot::chassis->shifter->Set(frc::DoubleSolenoid::Value::kReverse);
        Robot::chassis->pneumaticStatus = true;

        Robot::leds->SetColor(2, LightDriveCAN::Colors::BLUE);
        Robot::leds->Update();
    }
}

// Make this return true when this Command no longer needs to run execute()
bool ChassisShift::IsFinished() {
    return true;
}

// Called once after isFinished returns true
void ChassisShift::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisShift::Interrupted() {

}
