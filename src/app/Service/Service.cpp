#include "Service.h"
#include "View.h"

Service::Service(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Service::~Service()
{

}

void Service::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_1_ON;
                view -> setState(lightState);
            }
        break;
        case LIGHT_1_ON:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_2_ON;
                view -> setState(lightState);
            }
        break;
        case LIGHT_2_ON:
            if (strState == "modeButton") 
            {

                lightState = LIGHT_3_ON;
                view -> setState(lightState);
            }
        break;
        case LIGHT_3_ON:
            if (strState == "modeButton") 
            {

                lightState = LIGHT_4_ON;
                view -> setState(lightState);
            }
        break;
        case LIGHT_4_ON:
            if (strState == "modeButton") 
            {

                lightState = LIGHT_5_ON;
                view -> setState(lightState);
            }
            break;
        case LIGHT_5_ON:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_OFF;
                view -> setState(lightState);
            }
            break;
    }
}