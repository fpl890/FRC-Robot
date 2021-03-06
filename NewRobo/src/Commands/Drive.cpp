#include "Drive.h"

Drive::Drive(double yMoveValue, double xMoveValue, double rotateValue, double timeout){
	Requires(Robot::drivetrain);
	this->yMoveValue = yMoveValue;
	this->xMoveValue = xMoveValue;
	this->rotateValue = rotateValue;
	this->timeout = timeout;
}

// Called just before this Command runs the first time
void Drive::Initialize() {
	//Robot::drivetrain->Drive(moveValue, rotateValue);
	SetTimeout(timeout);
}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute() {
	Robot::drivetrain->Drive(yMoveValue, xMoveValue, rotateValue);

}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Drive::End() {
	Robot::drivetrain->Drive(0, 0, 0);
}

void Drive::Interrupted(){
	End();
}

