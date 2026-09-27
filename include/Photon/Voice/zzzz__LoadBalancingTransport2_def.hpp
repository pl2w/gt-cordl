#pragma once
// IWYU pragma private; include "Photon/Voice/LoadBalancingTransport2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LoadBalancingTransport_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingTransport2)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace Photon::Voice {
struct FrameFlags;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
class LocalVoice;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
class LoadBalancingTransport2;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LoadBalancingTransport2*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LoadBalancingTransport2*, "Photon.Voice", "LoadBalancingTransport2");
// Dependencies Photon.Voice.LoadBalancingTransport
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LoadBalancingTransport2
class CORDL_TYPE LoadBalancingTransport2 : public ::Photon::Voice::LoadBalancingTransport {
public:
// Declarations
static inline ::Photon::Voice::LoadBalancingTransport2* New_ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol) ;

/// @brief Method SendFrame, addr 0xa7594a8, size 0x2cc, virtual true, abstract: false, final false
inline void SendFrame(::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags, uint8_t  evNumber, uint8_t  voiceId, int32_t  channelId, int32_t  targetPlayerId, bool  reliable, ::Photon::Voice::LocalVoice*  localVoice) ;

/// @brief Method .ctor, addr 0xa75946c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol) ;

/// @brief Method onEventActionVoiceClient, addr 0xa759774, size 0x80, virtual true, abstract: false, final false
inline void onEventActionVoiceClient(::ExitGames::Client::Photon::EventData*  ev) ;

/// @brief Method onVoiceFrameEvent, addr 0xa7597f4, size 0x2e0, virtual false, abstract: false, final false
inline void onVoiceFrameEvent(::System::Object*  content0, int32_t  channelId, int32_t  playerId, int32_t  localPlayerId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingTransport2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingTransport2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingTransport2(LoadBalancingTransport2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingTransport2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingTransport2(LoadBalancingTransport2 const& ) = delete;

/// @brief Field DATA_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  DATA_OFFSET{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28504};

/// @brief Size padding 0x190 - 0x198 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::LoadBalancingTransport2) == 0x190, "Size mismatch!");

} // namespace end def Photon::Voice
