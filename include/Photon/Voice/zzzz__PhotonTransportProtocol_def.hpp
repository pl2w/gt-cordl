#pragma once
// IWYU pragma private; include "Photon/Voice/PhotonTransportProtocol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransportProtocol)
namespace GlobalNamespace {
struct PhotonTransportProtocol_EventParam;
}
namespace GlobalNamespace {
struct PhotonTransportProtocol_EventSubcode;
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
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
class PhotonTransportProtocol;
}
// Write type traits
MARK_REF_T(::Photon::Voice::PhotonTransportProtocol*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::PhotonTransportProtocol*, "Photon.Voice", "PhotonTransportProtocol");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.PhotonTransportProtocol
class CORDL_TYPE PhotonTransportProtocol : public ::System::Object {
public:
// Declarations
using EventParam = ::GlobalNamespace::PhotonTransportProtocol_EventParam;

using EventSubcode = ::GlobalNamespace::PhotonTransportProtocol_EventSubcode;

/// @brief Field logger, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field voiceClient, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceClient, put=__cordl_internal_set_voiceClient)) ::Photon::Voice::VoiceClient*  voiceClient;

static inline ::Photon::Voice::PhotonTransportProtocol* New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::ILogger*  logger) ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get_voiceClient() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get_voiceClient() ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value) ;

/// @brief Method .ctor, addr 0xa7573e0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method buildFrameMessage, addr 0xa758b48, size 0x1cc, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> buildFrameMessage(uint8_t  voiceId, uint8_t  evNumber, ::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags) ;

/// @brief Method buildVoiceRemoveMessage, addr 0xa7586a0, size 0x2b0, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> buildVoiceRemoveMessage(::Photon::Voice::LocalVoice*  v) ;

/// @brief Method buildVoicesInfo, addr 0xa757b14, size 0x9f8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> buildVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voicesToSend, bool  logInfo) ;

/// @brief Method createVoiceInfoFromEventPayload, addr 0xa759d54, size 0x318, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceInfo createVoiceInfoFromEventPayload(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  h) ;

/// @brief Method onVoiceEvent, addr 0xa758e6c, size 0x460, virtual false, abstract: false, final false
inline void onVoiceEvent(::System::Object*  content0, int32_t  channelId, int32_t  playerId, bool  isLocalPlayer) ;

/// @brief Method onVoiceInfo, addr 0xa759ad4, size 0x1ec, virtual false, abstract: false, final false
inline void onVoiceInfo(int32_t  channelId, int32_t  playerId, ::System::Object*  payload) ;

/// @brief Method onVoiceRemove, addr 0xa759cc0, size 0x94, virtual false, abstract: false, final false
inline void onVoiceRemove(int32_t  channelId, int32_t  playerId, ::System::Object*  payload) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransportProtocol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransportProtocol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTransportProtocol(PhotonTransportProtocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransportProtocol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTransportProtocol(PhotonTransportProtocol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28507};

/// @brief Field voiceClient, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  ___voiceClient;

/// @brief Field logger, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::PhotonTransportProtocol, ___voiceClient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PhotonTransportProtocol, ___logger) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::PhotonTransportProtocol) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice
