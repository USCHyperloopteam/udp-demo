//this link where this comes from, it initializes the DHCP (gets link with wif)
//we’ll need to do something like that right after boot up
#include <EthernetInterface.h>

// the actual DHCP initialization, we’ll also need to put in the SSID and
// authentication key
init (const char *ip, const char *mask, const char *gateway)

bool is_ip_of_GCS_known = false; // plus other variables
bool continue_program = true;

while (continue_program == true) {
    if(is_ip_of_GCS_known) {
        // run Establishcomms.eth1 //object that 
        // run Read_eth0.sh //run script or embedded code that reads data from eth0 (our MCUs)and organizes that data as you need
        // run Read_eth1.sh //run script or embedded code that reads data from eth1 (our wifi link) and organizes that data as you need
        // run Read_IMU.sh //run script or embedded code that reads data from IMU and organizes it as we need for transmission to GCS or for further processing
        // run Automation_directive.sh //run script or embedded code to sample that just checks if certain commands are active and executes them on a single pass, details to be filled in later
        // run Automation_alerts.sh //this will take data we just received from our MCUs and check if anything is amiss, if so, it will call another script to see if it needs to execute an emergency stop or just send an alert to the GCS
        // run Print_eth0.sh //the arrays of data we have collected from earlier scripts bound for each MCU are combined into a single array and transmitted out of eth0 as a single file
        // run Print_eth1.sh // the arrays of data we have collected from earlier scripts bound for the GCS are combined into a single array and transmitted out of eth0 as a single file
    }

    //continue loop forever
}
