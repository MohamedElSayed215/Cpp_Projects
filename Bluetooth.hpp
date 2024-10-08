#ifndef __BLUETOOTH__H__
#define __BLUETOOTH__H__
#include <iostream>
using namespace std ; 
void Display_Bluetooth_Status();
void Turn_on_Bluetooth();
void Turn_off_Bluetooth();
void Connect_Bluetooth_Device() ;
extern void (*Bluetooth_Services[4])();
#endif  //!__BLUETOOTH__H__


