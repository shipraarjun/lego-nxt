#include "NXT++.h"
 
int main()
{
    Comm::NXTComm comm;
    if(NXT::OpenBT(&comm)) //initialize the NXT and continue if it succeeds
    {
        NXT::Motor::SetForward(&comm, OUT_A, 50); //turn both motors on 50% power
        NXT::Motor::SetForward(&comm, OUT_C, 50);
        Wait(2000); //wait 2 seconds
        NXT::Motor::Stop(&comm, OUT_A, false); //stop both motors with no braking
        NXT::Motor::Stop(&comm, OUT_C, false);
        NXT::Close(&comm); //close the NXT
    }
    return 0;
}
