#include "ArcadeDriveWithJoystick.h"
#include "Robot.h"

ArcadeDriveWithJoystick::ArcadeDriveWithJoystick() :
			frc::Command("ArcadeDriveWithJoystick") {
				Requires(Robot::drivetrain);
}

void ArcadeDriveWithJoystick::Execute() {
	Robot::drivetrain->Drive(Robot::oi->GetJoystick());
}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDriveWithJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArcadeDriveWithJoystick::End() {

}


