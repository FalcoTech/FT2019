// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef _ROBOT_H
#define _ROBOT_H

#include "frc/WPILib.h"
#include "frc/commands/Command.h"
#include "frc/livewindow/LiveWindow.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/AutonomousCommand.h"
#include "Subsystems/Arm.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Lift.h"
#include "Subsystems/Lights.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"

class Robot : public frc::TimedRobot {
public:
	frc::Command* autonomousCommand = nullptr;
	static std::unique_ptr<OI> oi;
	frc::LiveWindow *lw = frc::LiveWindow::GetInstance();
	frc::SendableChooser<frc::Command*> chooser;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<Chassis> chassis;
	static std::shared_ptr<Lift> lift;
	static std::shared_ptr<Lights> lights;
	static std::shared_ptr<Intake> intake;
	static std::shared_ptr<Arm> arm;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
};
#endif