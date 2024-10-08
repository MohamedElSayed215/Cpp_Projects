#include "WIFI.hpp"
void Display_WIFI_Status()
{

   cout<<__FUNCTION__<<endl ;
}
void Turn_on_WIFI()
{
    cout<<__FUNCTION__<<endl ;
}
void Turn_off_WIFI()
{
    cout<<__FUNCTION__<<endl ;
}
void Connect_to_WIFI_Network()
{
    cout<<__FUNCTION__<<endl ;
}
void Remove_Saved_WIFI_Network()
{
    cout<<__FUNCTION__<<endl ;
}
void Modify_Saved_WIFI_Network()
{   
    cout<<__FUNCTION__<<endl ;
}
void Search_Network()
{
    cout<<__FUNCTION__<<endl ;
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
 
