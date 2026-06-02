#ifndef _MY_FEATURE_H
#define _MY_FEATURE_H

#include "Script.h"

class MyFeature : public Script
{
public:
    MyFeature();
    ~MyFeature();

    // Example hook: On chat message
    void OnChatMessage(struct Player* player, uint32 msgType, std::string left, std::string right);
};

#endif // _MY_FEATURE_H
