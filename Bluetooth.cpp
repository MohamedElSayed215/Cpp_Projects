#include "Bluetooth.hpp"
void Display_Bluetooth_Status()
{
    string command = "hcitool dev";

    system(command.c_str());

    cout << "Bluetooth status:\n";
} 
void Turn_on_Bluetooth()
{
    string command = "hcitool dev | grep -q \"hci0\" || hcitool dev -B";

    system(command.c_str());

    cout << "Bluetooth turned on.\n";
}
void Turn_off_Bluetooth()
{
    std::string command = "hcitool dev | grep -q \"hci0\" && hcitool dev -D";

    system(command.c_str());

    cout << "Bluetooth turned off.\n";
}
void Connect_Bluetooth_Device() 
{
    std::string command = "hcitool scan";

    system(command.c_str());

    std::string deviceAddress;
    // Assuming you've found the desired device's address (e.g., "00:11:22:33:44:55")
    std::cout<<"Select the address which you want to connect .. " ; 
    std::cin>>deviceAddress ;  
    

    command = "rfcomm connect hci0 " + deviceAddress + " 1";

    system(command.c_str());

    cout << "Connected to Bluetooth device.\n";
} 


void (*Bluetooth_Services[4])()= 
    {
            &Display_Bluetooth_Status,
            &Turn_on_Bluetooth,
            &Turn_off_Bluetooth,
            &Connect_Bluetooth_Device
    } ; 
