#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoice)
namespace Photon::Voice {
struct FrameFlags;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class IServiceable;
}
namespace Photon::Voice {
class SpacingProfile;
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
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
class LocalVoice;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LocalVoice*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LocalVoice*, "Photon.Voice", "LocalVoice");
// Dependencies Photon.Voice.VoiceInfo, System.ArraySegment`1<T>, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LocalVoice
class CORDL_TYPE LocalVoice : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DebugEchoMode, put=set_DebugEchoMode)) bool  DebugEchoMode;

 __declspec(property(get=get_Encrypt, put=set_Encrypt)) bool  Encrypt;

 __declspec(property(get=get_EvNumber)) uint8_t  EvNumber;

 __declspec(property(get=get_FramesSent, put=set_FramesSent)) int32_t  FramesSent;

 __declspec(property(get=get_FramesSentBytes, put=set_FramesSentBytes)) int32_t  FramesSentBytes;

/// @brief [Obsolete("Use InterestGroup.")]
 __declspec(property(get=get_Group, put=set_Group)) uint8_t  Group;

 __declspec(property(get=get_Info)) ::Photon::Voice::VoiceInfo  Info;

 __declspec(property(get=get_InterestGroup, put=set_InterestGroup)) uint8_t  InterestGroup;

 __declspec(property(get=get_IsCurrentlyTransmitting)) bool  IsCurrentlyTransmitting;

 __declspec(property(get=get_LocalUserServiceable, put=set_LocalUserServiceable)) ::Photon::Voice::IServiceable*  LocalUserServiceable;

 __declspec(property(get=get_LogPrefix)) ::StringW  LogPrefix;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Reliable, put=set_Reliable)) bool  Reliable;

 __declspec(property(get=get_SendSpacingProfileDump)) ::StringW  SendSpacingProfileDump;

 __declspec(property(get=get_SendSpacingProfileMax)) int32_t  SendSpacingProfileMax;

 __declspec(property(get=get_TransmitEnabled, put=set_TransmitEnabled)) bool  TransmitEnabled;

/// @brief Field <Encrypt>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__Encrypt_k__BackingField, put=__cordl_internal_set__Encrypt_k__BackingField)) bool  _Encrypt_k__BackingField;

/// @brief Field <FramesSentBytes>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesSentBytes_k__BackingField, put=__cordl_internal_set__FramesSentBytes_k__BackingField)) int32_t  _FramesSentBytes_k__BackingField;

/// @brief Field <FramesSent>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesSent_k__BackingField, put=__cordl_internal_set__FramesSent_k__BackingField)) int32_t  _FramesSent_k__BackingField;

/// @brief Field <InterestGroup>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__InterestGroup_k__BackingField, put=__cordl_internal_set__InterestGroup_k__BackingField)) uint8_t  _InterestGroup_k__BackingField;

/// @brief Field <LocalUserServiceable>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalUserServiceable_k__BackingField, put=__cordl_internal_set__LocalUserServiceable_k__BackingField)) ::Photon::Voice::IServiceable*  _LocalUserServiceable_k__BackingField;

/// @brief Field <Reliable>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Reliable_k__BackingField, put=__cordl_internal_set__Reliable_k__BackingField)) bool  _Reliable_k__BackingField;

 __declspec(property(get=get_ID)) uint8_t  _cordl_ID;

/// @brief Field channelId, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_channelId, put=__cordl_internal_set_channelId)) int32_t  channelId;

/// @brief Field configFrame, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_configFrame, put=__cordl_internal_set_configFrame)) ::System::ArraySegment_1<uint8_t>  configFrame;

/// @brief Field debugEchoMode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugEchoMode, put=__cordl_internal_set_debugEchoMode)) bool  debugEchoMode;

/// @brief Field disposeLock, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_disposeLock, put=__cordl_internal_set_disposeLock)) ::System::Object*  disposeLock;

/// @brief Field disposed, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field encoder, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoder, put=__cordl_internal_set_encoder)) ::Photon::Voice::IEncoder*  encoder;

/// @brief Field evNumber, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_evNumber, put=__cordl_internal_set_evNumber)) uint8_t  evNumber;

/// @brief Field eventTimestamps, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventTimestamps, put=__cordl_internal_set_eventTimestamps)) ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  eventTimestamps;

/// @brief Field id, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) uint8_t  id;

/// @brief Field info, offset 0x30, size 0x30 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::Photon::Voice::VoiceInfo  info;

/// @brief Field lastTransmitTime, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTransmitTime, put=__cordl_internal_set_lastTransmitTime)) int32_t  lastTransmitTime;

/// @brief Field sendSpacingProfile, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendSpacingProfile, put=__cordl_internal_set_sendSpacingProfile)) ::Photon::Voice::SpacingProfile*  sendSpacingProfile;

 __declspec(property(get=get_shortName)) ::StringW  shortName;

/// @brief Field transmitEnabled, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_transmitEnabled, put=__cordl_internal_set_transmitEnabled)) bool  transmitEnabled;

/// @brief Field voiceClient, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceClient, put=__cordl_internal_set_voiceClient)) ::Photon::Voice::VoiceClient*  voiceClient;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa74a548, size 0xb8, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::LocalVoice* New_ctor() ;

static inline ::Photon::Voice::LocalVoice* New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId) ;

/// @brief Method RemoveSelf, addr 0xa74a268, size 0x14, virtual false, abstract: false, final false
inline void RemoveSelf() ;

/// @brief Method SendSpacingProfileStart, addr 0xa749128, size 0x14, virtual false, abstract: false, final false
inline void SendSpacingProfileStart() ;

constexpr bool const& __cordl_internal_get__Encrypt_k__BackingField() const;

constexpr bool& __cordl_internal_get__Encrypt_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FramesSentBytes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FramesSentBytes_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FramesSent_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FramesSent_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__InterestGroup_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__InterestGroup_k__BackingField() ;

constexpr ::Photon::Voice::IServiceable* const& __cordl_internal_get__LocalUserServiceable_k__BackingField() const;

constexpr ::Photon::Voice::IServiceable*& __cordl_internal_get__LocalUserServiceable_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Reliable_k__BackingField() const;

constexpr bool& __cordl_internal_get__Reliable_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_channelId() const;

constexpr int32_t& __cordl_internal_get_channelId() ;

constexpr ::System::ArraySegment_1<uint8_t> const& __cordl_internal_get_configFrame() const;

constexpr ::System::ArraySegment_1<uint8_t>& __cordl_internal_get_configFrame() ;

constexpr bool const& __cordl_internal_get_debugEchoMode() const;

constexpr bool& __cordl_internal_get_debugEchoMode() ;

constexpr ::System::Object* const& __cordl_internal_get_disposeLock() const;

constexpr ::System::Object*& __cordl_internal_get_disposeLock() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::Photon::Voice::IEncoder* const& __cordl_internal_get_encoder() const;

constexpr ::Photon::Voice::IEncoder*& __cordl_internal_get_encoder() ;

constexpr uint8_t const& __cordl_internal_get_evNumber() const;

constexpr uint8_t& __cordl_internal_get_evNumber() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>* const& __cordl_internal_get_eventTimestamps() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*& __cordl_internal_get_eventTimestamps() ;

constexpr uint8_t const& __cordl_internal_get_id() const;

constexpr uint8_t& __cordl_internal_get_id() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get_info() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get_info() ;

constexpr int32_t const& __cordl_internal_get_lastTransmitTime() const;

constexpr int32_t& __cordl_internal_get_lastTransmitTime() ;

constexpr ::Photon::Voice::SpacingProfile* const& __cordl_internal_get_sendSpacingProfile() const;

constexpr ::Photon::Voice::SpacingProfile*& __cordl_internal_get_sendSpacingProfile() ;

constexpr bool const& __cordl_internal_get_transmitEnabled() const;

constexpr bool& __cordl_internal_get_transmitEnabled() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get_voiceClient() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get_voiceClient() ;

constexpr void __cordl_internal_set__Encrypt_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__FramesSentBytes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FramesSent_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__InterestGroup_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__LocalUserServiceable_k__BackingField(::Photon::Voice::IServiceable*  value) ;

constexpr void __cordl_internal_set__Reliable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_channelId(int32_t  value) ;

constexpr void __cordl_internal_set_configFrame(::System::ArraySegment_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_debugEchoMode(bool  value) ;

constexpr void __cordl_internal_set_disposeLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value) ;

constexpr void __cordl_internal_set_evNumber(uint8_t  value) ;

constexpr void __cordl_internal_set_eventTimestamps(::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_id(uint8_t  value) ;

constexpr void __cordl_internal_set_info(::Photon::Voice::VoiceInfo  value) ;

constexpr void __cordl_internal_set_lastTransmitTime(int32_t  value) ;

constexpr void __cordl_internal_set_sendSpacingProfile(::Photon::Voice::SpacingProfile*  value) ;

constexpr void __cordl_internal_set_transmitEnabled(bool  value) ;

constexpr void __cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value) ;

/// @brief Method .ctor, addr 0xa749174, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa749298, size 0x31c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId) ;

/// @brief Method get_DebugEchoMode, addr 0xa748a10, size 0x8, virtual false, abstract: false, final false
inline bool get_DebugEchoMode() ;

/// [CompilerGenerated]
/// @brief Method get_Encrypt, addr 0xa7489f0, size 0x8, virtual false, abstract: false, final false
inline bool get_Encrypt() ;

/// @brief Method get_EvNumber, addr 0xa74916c, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_EvNumber() ;

/// [CompilerGenerated]
/// @brief Method get_FramesSent, addr 0xa7489c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FramesSent() ;

/// [CompilerGenerated]
/// @brief Method get_FramesSentBytes, addr 0xa7489d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FramesSentBytes() ;

/// @brief Method get_Group, addr 0xa748804, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Group() ;

/// @brief Method get_ID, addr 0xa749164, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_ID() ;

/// @brief Method get_Info, addr 0xa748824, size 0x14, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceInfo get_Info() ;

/// [CompilerGenerated]
/// @brief Method get_InterestGroup, addr 0xa748814, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_InterestGroup() ;

/// @brief Method get_IsCurrentlyTransmitting, addr 0xa748998, size 0x28, virtual false, abstract: false, final false
inline bool get_IsCurrentlyTransmitting() ;

/// [CompilerGenerated]
/// @brief Method get_LocalUserServiceable, addr 0xa748a00, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::IServiceable* get_LocalUserServiceable() ;

/// @brief Method get_LogPrefix, addr 0xa7495b4, size 0x58, virtual false, abstract: false, final false
inline ::StringW get_LogPrefix() ;

/// @brief Method get_Name, addr 0xa7497b4, size 0x1b8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Reliable, addr 0xa7489e0, size 0x8, virtual false, abstract: false, final false
inline bool get_Reliable() ;

/// @brief Method get_SendSpacingProfileDump, addr 0xa74913c, size 0x14, virtual false, abstract: false, final false
inline ::StringW get_SendSpacingProfileDump() ;

/// @brief Method get_SendSpacingProfileMax, addr 0xa749150, size 0x14, virtual false, abstract: false, final false
inline int32_t get_SendSpacingProfileMax() ;

/// @brief Method get_TransmitEnabled, addr 0xa748838, size 0x8, virtual false, abstract: false, final false
inline bool get_TransmitEnabled() ;

/// @brief Method get_shortName, addr 0xa74960c, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_shortName() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method sendConfigFrame, addr 0xa749e90, size 0x1cc, virtual false, abstract: false, final false
inline void sendConfigFrame(int32_t  targetPlayerId) ;

/// @brief Method sendFrame, addr 0xa749b00, size 0x390, virtual false, abstract: false, final false
inline void sendFrame(::System::ArraySegment_1<uint8_t>  compressed, ::Photon::Voice::FrameFlags  flags) ;

/// @brief Method sendFrame0, addr 0xa74a05c, size 0x20c, virtual false, abstract: false, final false
inline void sendFrame0(::System::ArraySegment_1<uint8_t>  compressed, ::Photon::Voice::FrameFlags  flags, int32_t  targetPlayerId, bool  reliable) ;

/// @brief Method service, addr 0xa74996c, size 0x194, virtual true, abstract: false, final false
inline void service() ;

/// @brief Method set_DebugEchoMode, addr 0xa748a18, size 0x238, virtual false, abstract: false, final false
inline void set_DebugEchoMode(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Encrypt, addr 0xa7489f8, size 0x8, virtual false, abstract: false, final false
inline void set_Encrypt(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesSent, addr 0xa7489c8, size 0x8, virtual false, abstract: false, final false
inline void set_FramesSent(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesSentBytes, addr 0xa7489d8, size 0x8, virtual false, abstract: false, final false
inline void set_FramesSentBytes(int32_t  value) ;

/// @brief Method set_Group, addr 0xa74880c, size 0x8, virtual false, abstract: false, final false
inline void set_Group(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InterestGroup, addr 0xa74881c, size 0x8, virtual false, abstract: false, final false
inline void set_InterestGroup(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocalUserServiceable, addr 0xa748a08, size 0x8, virtual false, abstract: false, final false
inline void set_LocalUserServiceable(::Photon::Voice::IServiceable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Reliable, addr 0xa7489e8, size 0x8, virtual false, abstract: false, final false
inline void set_Reliable(bool  value) ;

/// @brief Method set_TransmitEnabled, addr 0xa748840, size 0x158, virtual false, abstract: false, final false
inline void set_TransmitEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoice(LocalVoice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoice(LocalVoice const& ) = delete;

/// @brief Field DATA_POOL_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  DATA_POOL_CAPACITY{static_cast<int32_t>(0x32)};

/// @brief Field NO_TRANSMIT_TIMEOUT_MS offset 0xffffffff size 0x4
static constexpr int32_t  NO_TRANSMIT_TIMEOUT_MS{static_cast<int32_t>(0x64)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28437};

/// [CompilerGenerated]
/// @brief Field <InterestGroup>k__BackingField, offset: 0x10, size: 0x1, def value: None
 uint8_t  ____InterestGroup_k__BackingField;

/// @brief Field transmitEnabled, offset: 0x11, size: 0x1, def value: None
 bool  ___transmitEnabled;

/// [CompilerGenerated]
/// @brief Field <FramesSent>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____FramesSent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FramesSentBytes>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____FramesSentBytes_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Reliable>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____Reliable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Encrypt>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____Encrypt_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LocalUserServiceable>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Photon::Voice::IServiceable*  ____LocalUserServiceable_k__BackingField;

/// @brief Field debugEchoMode, offset: 0x28, size: 0x1, def value: None
 bool  ___debugEchoMode;

/// @brief Field info, offset: 0x30, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ___info;

/// @brief Field encoder, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::IEncoder*  ___encoder;

/// @brief Field id, offset: 0x68, size: 0x1, def value: None
 uint8_t  ___id;

/// @brief Field channelId, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___channelId;

/// @brief Field evNumber, offset: 0x70, size: 0x1, def value: None
 uint8_t  ___evNumber;

/// @brief Field voiceClient, offset: 0x78, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  ___voiceClient;

/// @brief Field configFrame, offset: 0x80, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  ___configFrame;

/// @brief Field disposed, offset: 0x90, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field disposeLock, offset: 0x98, size: 0x8, def value: None
 ::System::Object*  ___disposeLock;

/// @brief Field lastTransmitTime, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___lastTransmitTime;

/// @brief Field eventTimestamps, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  ___eventTimestamps;

/// @brief Field sendSpacingProfile, offset: 0xb0, size: 0x8, def value: None
 ::Photon::Voice::SpacingProfile*  ___sendSpacingProfile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::LocalVoice, ____InterestGroup_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___transmitEnabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ____FramesSent_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ____FramesSentBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ____Reliable_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ____Encrypt_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ____LocalUserServiceable_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___debugEchoMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___info) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___encoder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___id) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___channelId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___evNumber) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___voiceClient) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___configFrame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___disposed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___disposeLock) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___lastTransmitTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___eventTimestamps) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoice, ___sendSpacingProfile) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::LocalVoice) == 0xb8, "Size mismatch!");

} // namespace end def Photon::Voice
