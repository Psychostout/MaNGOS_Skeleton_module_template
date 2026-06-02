#include "MyFeature.h"
#include "Server/WorldSession.h"
#include "Chat.h"

MyFeature::MyFeature()
{
    // In mangos-cata-server, you register with ScriptMgr
    ScriptMgr::Instance().AddScript(this);
    sLog.outInfo("MyFeature: Module loaded and registered.");
}

MyFeature::~MyFeature()
{
}

void MyFeature::OnChatMessage(Player* player, uint32 msgType, std::string left, std::string right)
{
    if (right == "hello")
    {
        player->SendChatMessage("Hello from MyFeature skeleton module!");
    }
}
