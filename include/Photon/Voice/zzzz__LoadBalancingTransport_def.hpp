#pragma once
// IWYU pragma private; include "Photon/Voice/LoadBalancingTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingTransport)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace Photon::Realtime {
struct ClientState;
}
namespace Photon::Voice {
struct Codec;
}
namespace Photon::Voice {
struct FrameFlags;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
class IVoiceTransport;
}
namespace Photon::Voice {
class LoadBalancingTransport___c;
}
namespace Photon::Voice {
class LocalVoice;
}
namespace Photon::Voice {
class PhotonTransportProtocol;
}
namespace Photon::Voice {
class VoiceClient;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
class LoadBalancingTransport;
}
namespace Photon::Voice {
class LoadBalancingTransport___c;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LoadBalancingTransport*);
MARK_REF_T(::Photon::Voice::LoadBalancingTransport___c*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LoadBalancingTransport*, "Photon.Voice", "LoadBalancingTransport");
DEFINE_IL2CPP_CLASS(::Photon::Voice::LoadBalancingTransport___c*, "Photon.Voice", "LoadBalancingTransport/<>c");
// Dependencies Photon.Realtime.LoadBalancingClient
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LoadBalancingTransport
class CORDL_TYPE LoadBalancingTransport : public ::Photon::Realtime::LoadBalancingClient {
public:
// Declarations
using __c = ::Photon::Voice::LoadBalancingTransport___c;

/// @brief [Obsolete("Use GlobalInterestGroup.")]
 __declspec(property(get=get_GlobalAudioGroup, put=set_GlobalAudioGroup)) uint8_t  GlobalAudioGroup;

 __declspec(property(get=get_GlobalInterestGroup, put=set_GlobalInterestGroup)) uint8_t  GlobalInterestGroup;

 __declspec(property(get=get_VoiceClient)) ::Photon::Voice::VoiceClient*  VoiceClient;

/// @brief Field protocol, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_protocol, put=__cordl_internal_set_protocol)) ::Photon::Voice::PhotonTransportProtocol*  protocol;

/// @brief Field voiceClient, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceClient, put=__cordl_internal_set_voiceClient)) ::Photon::Voice::VoiceClient*  voiceClient;

/// @brief Convert operator to "::Photon::Voice::ILogger"
constexpr operator  ::Photon::Voice::ILogger*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IVoiceTransport"
constexpr operator  ::Photon::Voice::IVoiceTransport*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [Obsolete("Use LoadBalancingPeer::OpChangeGroups().")]
/// @brief Method ChangeAudioGroups, addr 0xa757448, size 0x20, virtual true, abstract: false, final false
inline bool ChangeAudioGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd) ;

/// @brief Method ChannelIdStr, addr 0xa758d14, size 0x8, virtual true, abstract: false, final true
inline ::StringW ChannelIdStr(int32_t  channelId) ;

/// @brief Method Dispose, addr 0xa7593d4, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method IsChannelJoined, addr 0xa75717c, size 0x10, virtual true, abstract: false, final true
inline bool IsChannelJoined(int32_t  channelId) ;

/// @brief Method LogDebug, addr 0xa757074, size 0x38, virtual true, abstract: false, final true
inline void LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogError, addr 0xa756fcc, size 0x38, virtual true, abstract: false, final true
inline void LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogInfo, addr 0xa75703c, size 0x38, virtual true, abstract: false, final true
inline void LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarning, addr 0xa757004, size 0x38, virtual true, abstract: false, final true
inline void LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::Photon::Voice::LoadBalancingTransport* New_ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol) ;

/// @brief Method PlayerIdStr, addr 0xa758d1c, size 0x8, virtual true, abstract: false, final true
inline ::StringW PlayerIdStr(int32_t  playerId) ;

/// @brief Method SendFrame, addr 0xa758950, size 0x1f8, virtual true, abstract: false, final false
inline void SendFrame(::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags, uint8_t  evNumber, uint8_t  voiceId, int32_t  channelId, int32_t  targetPlayerId, bool  reliable, ::Photon::Voice::LocalVoice*  localVoice) ;

/// @brief Method SendVoiceRemove, addr 0xa75850c, size 0x194, virtual true, abstract: false, final true
inline void SendVoiceRemove(::Photon::Voice::LocalVoice*  voice, int32_t  channelId, int32_t  targetPlayerId) ;

/// @brief Method SendVoicesInfo, addr 0xa75759c, size 0x578, virtual true, abstract: false, final true
inline void SendVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voices, int32_t  channelId, int32_t  targetPlayerId) ;

/// @brief Method Service, addr 0xa757424, size 0x24, virtual false, abstract: false, final false
inline void Service() ;

constexpr ::Photon::Voice::PhotonTransportProtocol* const& __cordl_internal_get_protocol() const;

constexpr ::Photon::Voice::PhotonTransportProtocol*& __cordl_internal_get_protocol() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get_voiceClient() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get_voiceClient() ;

constexpr void __cordl_internal_set_protocol(::Photon::Voice::PhotonTransportProtocol*  value) ;

constexpr void __cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value) ;

/// @brief Method .ctor, addr 0xa75718c, size 0x254, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol) ;

/// @brief Method get_GlobalAudioGroup, addr 0xa757468, size 0x18, virtual false, abstract: false, final false
inline uint8_t get_GlobalAudioGroup() ;

/// @brief Method get_GlobalInterestGroup, addr 0xa757480, size 0x18, virtual false, abstract: false, final false
inline uint8_t get_GlobalInterestGroup() ;

/// @brief Method get_VoiceClient, addr 0xa756fc4, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceClient* get_VoiceClient() ;

/// @brief Convert to "::Photon::Voice::ILogger"
constexpr ::Photon::Voice::ILogger* i___Photon__Voice__ILogger() noexcept;

/// @brief Convert to "::Photon::Voice::IVoiceTransport"
constexpr ::Photon::Voice::IVoiceTransport* i___Photon__Voice__IVoiceTransport() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method onEventActionVoiceClient, addr 0xa758d24, size 0x148, virtual true, abstract: false, final false
inline void onEventActionVoiceClient(::ExitGames::Client::Photon::EventData*  ev) ;

/// @brief Method onStateChangeVoiceClient, addr 0xa7592cc, size 0x108, virtual false, abstract: false, final false
inline void onStateChangeVoiceClient(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  state) ;

/// @brief Method photonChannelForCodec, addr 0xa7570ac, size 0xd0, virtual false, abstract: false, final false
inline uint8_t photonChannelForCodec(::Photon::Voice::Codec  c) ;

/// @brief Method set_GlobalAudioGroup, addr 0xa757498, size 0x4, virtual false, abstract: false, final false
inline void set_GlobalAudioGroup(uint8_t  value) ;

/// @brief Method set_GlobalInterestGroup, addr 0xa75749c, size 0x100, virtual false, abstract: false, final false
inline void set_GlobalInterestGroup(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingTransport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingTransport(LoadBalancingTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingTransport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingTransport(LoadBalancingTransport const& ) = delete;

/// @brief Field VOICE_CHANNEL offset 0xffffffff size 0x4
static constexpr int32_t  VOICE_CHANNEL{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28503};

/// @brief Field voiceClient, offset: 0x188, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  ___voiceClient;

/// @brief Field protocol, offset: 0x190, size: 0x8, def value: None
 ::Photon::Voice::PhotonTransportProtocol*  ___protocol;

/// @brief Size padding 0x190 - 0x198 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::LoadBalancingTransport, ___voiceClient) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LoadBalancingTransport, ___protocol) == 0x190, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::LoadBalancingTransport) == 0x190, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LoadBalancingTransport/<>c
class CORDL_TYPE LoadBalancingTransport___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Voice::LoadBalancingTransport___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>*  __9__20_0;

static inline ::Photon::Voice::LoadBalancingTransport___c* New_ctor() ;

/// @brief Method <SendVoicesInfo>b__20_0, addr 0xa759458, size 0x14, virtual false, abstract: false, final false
inline ::Photon::Voice::Codec _SendVoicesInfo_b__20_0(::Photon::Voice::LocalVoice*  v) ;

/// @brief Method .ctor, addr 0xa759450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Voice::LoadBalancingTransport___c* getStaticF___9() ;

static inline ::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::Photon::Voice::LoadBalancingTransport___c*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingTransport___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingTransport___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingTransport___c(LoadBalancingTransport___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingTransport___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingTransport___c(LoadBalancingTransport___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::LoadBalancingTransport___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
