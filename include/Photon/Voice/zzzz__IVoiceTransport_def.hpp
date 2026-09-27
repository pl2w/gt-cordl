#pragma once
// IWYU pragma private; include "Photon/Voice/IVoiceTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IVoiceTransport)
namespace Photon::Voice {
struct FrameFlags;
}
namespace Photon::Voice {
class LocalVoice;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Photon::Voice {
class IVoiceTransport;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IVoiceTransport*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IVoiceTransport*, "Photon.Voice", "IVoiceTransport");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IVoiceTransport
class CORDL_TYPE IVoiceTransport {
public:
// Declarations
/// @brief Method ChannelIdStr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW ChannelIdStr(int32_t  channelId) ;

/// @brief Method IsChannelJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsChannelJoined(int32_t  channelId) ;

/// @brief Method PlayerIdStr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW PlayerIdStr(int32_t  playerId) ;

/// @brief Method SendFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SendFrame(::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags, uint8_t  evNumber, uint8_t  voiceId, int32_t  channelId, int32_t  targetPlayerId, bool  reliable, ::Photon::Voice::LocalVoice*  localVoice) ;

/// @brief Method SendVoiceRemove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SendVoiceRemove(::Photon::Voice::LocalVoice*  voice, int32_t  channelId, int32_t  targetPlayerId) ;

/// @brief Method SendVoicesInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SendVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voices, int32_t  channelId, int32_t  targetPlayerId) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceTransport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceTransport(IVoiceTransport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28452};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
