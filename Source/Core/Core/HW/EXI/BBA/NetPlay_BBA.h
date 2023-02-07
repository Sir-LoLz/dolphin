#pragma once
#include <map>
#include <mutex>
#include <optional>
#include <thread>
#include <vector>
#include <memory>


#include "Common/Event.h"
#include "Common/Flag.h"
#include "UICommon/NetPlayIndex.h"
#include "Common/Logging/Log.h"
#include "Common/Assert.h"
#include "Common/Logging/Log.h"
#include "Common/MsgHandler.h"
#include "Common/StringUtil.h"
#include "Core/HW/EXI/EXI_Device.h"
#include "Core/HW/EXI/EXI_DeviceEthernet.h"

#include "VideoCommon/OnScreenDisplay.h"

#include <SFML/Network.hpp>

#include <cstring>

#include "Core/NetPlayClient.h"


// create a buffer to store BBA packets in for NetPlayBBA. When data is placed into the BBA it will
// be placed in the vector as well. then when the frame changes the vector will be sent over the
// NetPlay session in order.
//std::vector<int> NetPlayBBABuffer;
//std::int64_t NetPlayBBABufferCurrentFrame;
//const u8* NetPlayBBAFrame = ""


namespace NetPlayBBAFrameNamespace
{
  class ProccessNetPlayBBAFrameclass
  {
  public:
    static void ProccessNetplayBBAFramefunction()
    {

      //sf::Packet spac;
      //spac << MessageID::PadMapping;
   
      OSD::AddMessage("Function Called. will forward data.", 3000);

    }
  };

}


// void OnNetPlaySendBBAPacket(sf::Packet& packet);
