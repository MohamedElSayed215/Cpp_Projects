#include "WIFI.hpp"
 std::string SSID ; 
 std::string Password ; 
 std::string NewPassword ; 
void Display_WIFI_Status()
{

    std::string command = "netstat -i";
    std::string output;

    system(command.c_str());
        
    std::string wifiInterface = "Wi-Fi"; 
    bool wifiConnected = false;

    
    if (wifiConnected) {
        std::cout << "Wi-Fi is connected.\n";
    } else {
        std::cout << "Wi-Fi is not connected.\n";
    }


}
void Turn_on_WIFI()
{
    std::string command =std::format( "iwconfig wlan0 essid \"{}\" key \"{}\"",SSID,Password);

    system(command.c_str());

    std::cout << "Wi-Fi turned on.\n";
}
void Turn_off_WIFI()
{
    std::string command = "ifconfig wlan0 down";

    system(command.c_str());
    
    cout << "Wi-Fi turned off.\n";
}
void Connect_to_WIFI_Network()
{
    std::string command = std::format("iwconfig wlan0 essid \"{}\" key \"{}\"",SSID,Password);

    system(command.c_str());

    std::cout << "Connected to Wi-Fi.\n";
}
void Remove_Saved_WIFI_Network()
{
    std::string command = "nmcli connection delete MyOldWifi";

    system(command.c_str());

    std::cout << "Saved Wi-Fi network \"MyOldWifi\" deleted.\n";
}
void Modify_Saved_WIFI_Network()
{   
    std::string command =std::format( "nmcli connection modify YourSSID connection.secret \"{}\"",NewPassword);

    system(command.c_str());

    std::cout << "Saved Wi-Fi network modified.\n";
}
void Search_Network()
{
    std::string command = "nmcli device wifi list";

    system(command.c_str());

    cout << "Wi-Fi networks found:\n";
}
 void (*WIFI_Services[7])()=
 {
     &Display_WIFI_Status,
     &Turn_on_WIFI,
     &Turn_off_WIFI,
     &Connect_to_WIFI_Network,
     &Remove_Saved_WIFI_Network,
     &Modify_Saved_WIFI_Network,
     &Search_Network
 } ; 
 
