#ifndef _WIFI_HPP_
#define _WIFI_HPP_

#include <sstream>
#include <string>
#include <iostream>
#include <format>
using namespace std;
void Display_WIFI_Status();
void Turn_on_WIFI();
void Turn_off_WIFI();
void Connect_to_WIFI_Network();
void Remove_Saved_WIFI_Network();
void Modify_Saved_WIFI_Network();
void Search_Network();
extern void (*WIFI_Services[7])();
extern std::string SSID ; 
extern std::string Password ; 
extern std::string NewPassword ; 


#endif 