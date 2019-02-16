// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef CHASSIS_H
#define CHASSIS_H
#include "frc/commands/Subsystem.h"
#include "frc/WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Chassis: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<frc::SpeedController> leftA;
	std::shared_ptr<frc::SpeedController> leftB;
	std::shared_ptr<frc::SpeedController> leftC;
	std::shared_ptr<frc::SpeedController> rightA;
	std::shared_ptr<frc::SpeedController> rightB;
	std::shared_ptr<frc::SpeedController> rightC;
	//std::shared_ptr<frc::RobotDrive> robotDrive;
	//std::shared_ptr<frc::DoubleSolenoid> shifter;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	Chassis();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	bool isReversed = false;
		std::shared_ptr<frc::SpeedControllerGroup> rightMotors;
	std::shared_ptr<frc::SpeedControllerGroup> leftMotors;

	std::shared_ptr<frc::RobotDrive> robotDrive;
	std::shared_ptr<frc::DoubleSolenoid> shifter;
};

#endif
