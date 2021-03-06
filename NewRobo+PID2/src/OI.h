#ifndef OI_H_
#define OI_H_

#include <Buttons/JoystickButton.h>
#include <XboxController.h>
#include <Joystick.h>

class OI {
public:
	OI();
	frc::XboxController* GetController();
	frc::Joystick* GetJoystick();


private:
	frc::XboxController c_1 { 0 };
	frc::Joystick xBoxControllerMap { 0 };
	frc::Joystick xBoxControllerMap2 { 1 };
	frc::Joystick joystick { 1 };
	frc::JoystickButton trigger{&xBoxControllerMap2,4};

	frc::JoystickButton buttonA {&xBoxControllerMap, 1 };

	frc::JoystickButton buttonB {&xBoxControllerMap2, 2 };
	frc::JoystickButton buttonX {&xBoxControllerMap2, 3 };

	frc::JoystickButton buttonY {&xBoxControllerMap, 4 };
	//frc::JoystickButton buttonLb {&xBoxControllerMap, 5 };
	//frc::JoystickButton buttonRb {&xBoxControllerMap, 6 };
	//frc::JoystickButton buttonY {&xBoxControllerMap, 5 };
	/*//configures snes controller
	frc::Joystick SNES { 1 };
	frc::JoystickButton sbutton1 {&SNES, 1 };
	frc::JoystickButton sbutton2 {&SNES, 2 };
	frc::JoystickButton sbutton3 {&SNES, 9 };
	frc::JoystickButton sbutton4 {&SNES, 10 };
	*/

};

#endif  // OI_H_
