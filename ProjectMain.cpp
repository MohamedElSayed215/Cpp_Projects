
#include "ProjectServices.hpp"
int	main(int argc, char **argv)
{
    std::cout<<"Control Program ! " <<std::endl ; 
    std::cout<<"-----------------" <<std::endl ; 

    signed int Primary_Choice = -1 ;
    signed int Secondary_Choice = -1 ; 
    while(1) 
    {   
            std::cout<<" 1. WIFI Control " <<std::endl ; 
            std::cout<<" 2. Bluetooth Control  " <<std::endl ; 
            std::cout<<" 3. Exit " <<std::endl ;
            std::cout<<"Enter your choice : .." <<std::endl ;
            std::cin>>Primary_Choice ; 
            --Primary_Choice  ;  
        switch (Primary_Choice) 
        {   
            case 0 : 
                while (1) 
                {
                    std::cout<<" WIFI Control Program ! " <<std::endl ; 
                    std::cout<<"-----------------" <<std::endl ;
                    std::cout<<" 1. Display WIFI Status " <<std::endl ; 
                    std::cout<<" 2. Turn on WIFI   " <<std::endl ; 
                    std::cout<<" 3. Turn off WIFI " <<std::endl ;
                    std::cout<<" 4. Connect to WIFI Network " <<std::endl ;
                    std::cout<<" 5. Remove a Saved WIFI Network " <<std::endl ;
                    std::cout<<" 6. Modify a Saved WIFI Network " <<std::endl ;
                    std::cout<<" 7. Search for a Network " <<std::endl ;
                    std::cout<<" 8. Back to main menu  " <<std::endl ;
                    std::cout<<"Enter your choice : .." <<std::endl ;
                    std::cin>>Secondary_Choice ;
                    --Secondary_Choice ; 
                    if (Secondary_Choice == 7)
                    {
                        break ; 
                    }               
                    DisplayService[Primary_Choice][Secondary_Choice]() ;
                    sleep(2) ; 
                     
                }
                break;
            case 1 : 
                while (1) 
                    {
                        std::cout<<" Bluetooth Control Program ! " <<std::endl ; 
                        std::cout<<"-----------------" <<std::endl ;
                        std::cout<<" 1. Display Bluetooth Status " <<std::endl ; 
                        std::cout<<" 2. Turn on Bluetooth   " <<std::endl ; 
                        std::cout<<" 3. Turn off Bluetooth " <<std::endl ;
                        std::cout<<" 4. Connect to Bluetooth Device " <<std::endl ;
                        std::cout<<" 5. Back to main menu  " <<std::endl ;
                        std::cout<<"Enter your choice : .." <<std::endl ;
                        std::cin>>Secondary_Choice ; 
                        -- Secondary_Choice ;
                        if (Secondary_Choice == 4)
                        {
                            break ; 
                        }
                        DisplayService[Primary_Choice][Secondary_Choice]() ;
                        sleep(2) ;      
                    } 
                    break;
            case 2 : 
                std::cout<< "Thanks for your usage my Program .. " <<std::endl ;
                break;        
        }
        break  ;
    }



    
    return 0;
}
