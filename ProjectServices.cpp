#include "ProjectServices.hpp"
void (*DisplayService[2][8])()=
{   
    // WIFI 
    {&Display_WIFI_Status,&Display_WIFI_Status,&Turn_off_WIFI,&Connect_to_WIFI_Network,&Remove_Saved_WIFI_Network,&Modify_Saved_WIFI_Network,&Search_Network},
    {&Display_Bluetooth_Status,&Turn_on_Bluetooth,&Turn_off_Bluetooth,&Connect_Bluetooth_Device}
} ;

