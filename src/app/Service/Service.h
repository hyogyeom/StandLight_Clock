#ifndef __SERVICE_H__
#define __SERVICE_H__

#include <string.h>
#include "View.h"
#include "LightState.h"

class Service
{

private:
    int lightState;  // 붗빛에 대한 상태
    View *view;


public:
    Service(View *viewer);
    ~Service();
    void updateState(std::string strState);
};

#endif