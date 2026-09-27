#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Fusion/Protocol/BitStream.hpp"
#include "Fusion/Protocol/ChangeMasterClient.hpp"
#include "Fusion/Protocol/CommunicatorBase.hpp"
#include "Fusion/Protocol/Disconnect.hpp"
#include "Fusion/Protocol/DisconnectReason.hpp"
#include "Fusion/Protocol/DummyTrafficSync.hpp"
#include "Fusion/Protocol/HostMigration.hpp"
#include "Fusion/Protocol/ICommunicator.hpp"
#include "Fusion/Protocol/IMessage.hpp"
#include "Fusion/Protocol/Join.hpp"
#include "Fusion/Protocol/JoinMessageType.hpp"
#include "Fusion/Protocol/JoinRequests.hpp"
#include "Fusion/Protocol/Message.hpp"
#include "Fusion/Protocol/NetworkConfigSync.hpp"
#include "Fusion/Protocol/PeerMode.hpp"
#include "Fusion/Protocol/PlayerRefMapping.hpp"
#include "Fusion/Protocol/PluginGameMode.hpp"
#include "Fusion/Protocol/ProtocolMessageVersion.hpp"
#include "Fusion/Protocol/ProtocolSerializer.hpp"
#include "Fusion/Protocol/ReflexiveInfo.hpp"
#include "Fusion/Protocol/Snapshot.hpp"
#include "Fusion/Protocol/SnapshotType.hpp"
#include "Fusion/Protocol/Start.hpp"
#include "Fusion/Protocol/StartRequests.hpp"
#include "Fusion/Protocol/SyncType.hpp"
#ifdef __cpp_modules
                    export module Protocol;
                    #endif
                
