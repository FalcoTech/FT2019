// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "frc/smartdashboard/SmartDashboard.h"
#include "Commands/ArmDefault.h"
#include "Commands/ArmPositionDown.h"
#include "Commands/ArmPositionUp.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ChassisReverse.h"
#include "Commands/ChassisShift.h"
#include "Commands/ChassisTankDrive.h"
#include "Commands/DoNothing.h"
#include "Commands/IntakeBackwards.h"
#include "Commands/IntakeDefault.h"
#include "Commands/IntakeExtend.h"
#include "Commands/IntakeForward.h"
#include "Commands/IntakeHatch.h"
#include "Commands/IntakeTilt.h"
#include "Commands/LiftBackForward.h"
#include "Commands/LiftBackReverse.h"
#include "Commands/LiftDefault.h"
#include "Commands/LiftFrontForward.h"
#include "Commands/LiftFrontReverse.h"
#include "Commands/LightsDefault.h"
#include "Commands/Premade1.h"
#include "Commands/Premade2.h"
#include "Commands/Premade3.h"
#include "Commands/Premade4.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    co_Pilot.reset(new frc::Joystick(1));
    
    fightRT.reset(new frc::JoystickButton(co_Pilot.get(), 1));
    fightRT->WhileHeld(new LiftFrontForward());
    fightLT.reset(new frc::JoystickButton(co_Pilot.get(), 1));
    fightLT->WhileHeld(new IntakeBackwards());
    fightSR.reset(new frc::JoystickButton(co_Pilot.get(), 10));
    fightSR->WhenPressed(new Premade4());
    fightSL.reset(new frc::JoystickButton(co_Pilot.get(), 9));
    fightSL->WhenPressed(new Premade3());
    fightOption.reset(new frc::JoystickButton(co_Pilot.get(), 8));
    fightOption->WhenPressed(new Premade2());
    fightShare.reset(new frc::JoystickButton(co_Pilot.get(), 7));
    fightShare->WhenPressed(new Premade1());
    fightRB.reset(new frc::JoystickButton(co_Pilot.get(), 6));
    fightRB->WhileHeld(new LiftBackForward());
    fightLB.reset(new frc::JoystickButton(co_Pilot.get(), 5));
    fightLB->WhileHeld(new IntakeForward());
    fightY.reset(new frc::JoystickButton(co_Pilot.get(), 4));
    fightY->WhenPressed(new IntakeTilt());
    fightX.reset(new frc::JoystickButton(co_Pilot.get(), 3));
    fightX->WhenPressed(new IntakeExtend());
    fightB.reset(new frc::JoystickButton(co_Pilot.get(), 2));
    fightB->WhileHeld(new DoNothing());
    fightA.reset(new frc::JoystickButton(co_Pilot.get(), 1));
    fightA->WhenPressed(new IntakeHatch());
    driver.reset(new frc::Joystick(0));
    
    rStickIn.reset(new frc::JoystickButton(driver.get(), 10));
    rStickIn->WhenPressed(new ChassisShift());
    lStickIn.reset(new frc::JoystickButton(driver.get(), 9));
    lStickIn->WhenPressed(new ChassisShift());
    buttonRB.reset(new frc::JoystickButton(driver.get(), 6));
    buttonRB->WhenPressed(new ChassisReverse());
    buttonLB.reset(new frc::JoystickButton(driver.get(), 5));
    buttonLB->WhenPressed(new ChassisReverse());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("LiftDefault", new LiftDefault());
    frc::SmartDashboard::PutData("Premade4", new Premade4());
    frc::SmartDashboard::PutData("Premade3", new Premade3());
    frc::SmartDashboard::PutData("Premade2", new Premade2());
    frc::SmartDashboard::PutData("Premade1", new Premade1());
    frc::SmartDashboard::PutData("ArmPositionDown", new ArmPositionDown());
    frc::SmartDashboard::PutData("ArmPositionUp", new ArmPositionUp());
    frc::SmartDashboard::PutData("ArmDefault", new ArmDefault());
    frc::SmartDashboard::PutData("IntakeExtend", new IntakeExtend());
    frc::SmartDashboard::PutData("IntakeTilt", new IntakeTilt());
    frc::SmartDashboard::PutData("IntakeHatch", new IntakeHatch());
    frc::SmartDashboard::PutData("ChassisReverse", new ChassisReverse());
    frc::SmartDashboard::PutData("ChassisShift", new ChassisShift());
    frc::SmartDashboard::PutData("IntakeBackwards", new IntakeBackwards());
    frc::SmartDashboard::PutData("IntakeForward", new IntakeForward());
    frc::SmartDashboard::PutData("IntakeDefault", new IntakeDefault());
    frc::SmartDashboard::PutData("LightsDefault", new LightsDefault());
    frc::SmartDashboard::PutData("LiftFrontReverse", new LiftFrontReverse());
    frc::SmartDashboard::PutData("LiftFrontForward", new LiftFrontForward());
    frc::SmartDashboard::PutData("LiftBackReverse", new LiftBackReverse());
    frc::SmartDashboard::PutData("LiftBackForward", new LiftBackForward());
    frc::SmartDashboard::PutData("ChassisTankDrive", new ChassisTankDrive());
    frc::SmartDashboard::PutData("DoNothing", new DoNothing());
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getDriver() {
   return driver;
}

std::shared_ptr<frc::Joystick> OI::getCo_Pilot() {
   return co_Pilot;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
