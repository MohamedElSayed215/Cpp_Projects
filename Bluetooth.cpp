#include "Bluetooth.hpp"
void Display_Bluetooth_Status()
{
    cout<<__FUNCTION__<<endl ;
} 
void Turn_on_Bluetooth()
{
     cout<<__FUNCTION__<<endl ;
}
void Turn_off_Bluetooth()
{
     cout<<__FUNCTION__<<endl ;
}
void Connect_Bluetooth_Device() 
{
     cout<<__FUNCTION__<<endl ;
} 


void (*Bluetooth_Services[4])()= 
    {
            &Display_Bluetooth_Status,
            &Turn_on_Bluetooth,
            &Turn_off_Bluetooth,
            &Connect_Bluetooth_Device
    } ; 
