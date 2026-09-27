#pragma once
// IWYU pragma private; include "Photon/Voice/RemoteVoice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteVoice)
namespace Photon::Voice {
struct FrameBuffer;
}
namespace Photon::Voice {
struct RemoteVoiceOptions;
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
template<typename T>
class Queue_1;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
class RemoteVoice;
}
// Write type traits
MARK_REF_T(::Photon::Voice::RemoteVoice*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::RemoteVoice*, "Photon.Voice", "RemoteVoice");
// Dependencies Photon.Voice.FrameBuffer, Photon.Voice.RemoteVoiceOptions, Photon.Voice.VoiceInfo, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.RemoteVoice
class CORDL_TYPE RemoteVoice : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DelayFrames, put=set_DelayFrames)) int32_t  DelayFrames;

 __declspec(property(get=get_Info, put=set_Info)) ::Photon::Voice::VoiceInfo  Info;

 __declspec(property(get=get_LogPrefix, put=set_LogPrefix)) ::StringW  LogPrefix;

 __declspec(property(get=get_ReceiveSpacingProfileDump)) ::StringW  ReceiveSpacingProfileDump;

 __declspec(property(get=get_ReceiveSpacingProfileMax)) int32_t  ReceiveSpacingProfileMax;

/// @brief Field <DelayFrames>k__BackingField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__DelayFrames_k__BackingField, put=__cordl_internal_set__DelayFrames_k__BackingField)) int32_t  _DelayFrames_k__BackingField;

/// @brief Field <Info>k__BackingField, offset 0x10, size 0x30 
 __declspec(property(get=__cordl_internal_get__Info_k__BackingField, put=__cordl_internal_set__Info_k__BackingField)) ::Photon::Voice::VoiceInfo  _Info_k__BackingField;

/// @brief Field <LogPrefix>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__LogPrefix_k__BackingField, put=__cordl_internal_set__LogPrefix_k__BackingField)) ::StringW  _LogPrefix_k__BackingField;

/// @brief Field channelId, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_channelId, put=__cordl_internal_set_channelId)) int32_t  channelId;

/// @brief Field disposeLock, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_disposeLock, put=__cordl_internal_set_disposeLock)) ::System::Object*  disposeLock;

/// @brief Field disposed, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field flushingFramePosInQueue, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_flushingFramePosInQueue, put=__cordl_internal_set_flushingFramePosInQueue)) int32_t  flushingFramePosInQueue;

/// @brief Field frameQueue, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameQueue, put=__cordl_internal_set_frameQueue)) ::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>*  frameQueue;

/// @brief Field frameQueueReady, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameQueueReady, put=__cordl_internal_set_frameQueueReady)) ::System::Threading::AutoResetEvent*  frameQueueReady;

/// @brief Field lastEvNumber, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastEvNumber, put=__cordl_internal_set_lastEvNumber)) uint8_t  lastEvNumber;

/// @brief Field nullFrame, offset 0xe0, size 0x38 
 __declspec(property(get=__cordl_internal_get_nullFrame, put=__cordl_internal_set_nullFrame)) ::Photon::Voice::FrameBuffer  nullFrame;

/// @brief Field options, offset 0x40, size 0x50 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Photon::Voice::RemoteVoiceOptions  options;

/// @brief Field playerId, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) int32_t  playerId;

/// @brief Field receiveSpacingProfile, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveSpacingProfile, put=__cordl_internal_set_receiveSpacingProfile)) ::Photon::Voice::SpacingProfile*  receiveSpacingProfile;

 __declspec(property(get=get_shortName)) ::StringW  shortName;

/// @brief Field voiceClient, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceClient, put=__cordl_internal_set_voiceClient)) ::Photon::Voice::VoiceClient*  voiceClient;

/// @brief Field voiceId, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceId, put=__cordl_internal_set_voiceId)) uint8_t  voiceId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa74c01c, size 0xf0, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::RemoteVoice* New_ctor(::Photon::Voice::VoiceClient*  client, ::Photon::Voice::RemoteVoiceOptions  options, int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info, uint8_t  lastEventNumber) ;

/// @brief Method ReceiveSpacingProfileStart, addr 0xa74ae4c, size 0x14, virtual false, abstract: false, final false
inline void ReceiveSpacingProfileStart() ;

constexpr int32_t const& __cordl_internal_get__DelayFrames_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DelayFrames_k__BackingField() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get__Info_k__BackingField() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get__Info_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LogPrefix_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LogPrefix_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_channelId() const;

constexpr int32_t& __cordl_internal_get_channelId() ;

constexpr ::System::Object* const& __cordl_internal_get_disposeLock() const;

constexpr ::System::Object*& __cordl_internal_get_disposeLock() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr int32_t const& __cordl_internal_get_flushingFramePosInQueue() const;

constexpr int32_t& __cordl_internal_get_flushingFramePosInQueue() ;

constexpr ::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>* const& __cordl_internal_get_frameQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>*& __cordl_internal_get_frameQueue() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get_frameQueueReady() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_frameQueueReady() ;

constexpr uint8_t const& __cordl_internal_get_lastEvNumber() const;

constexpr uint8_t& __cordl_internal_get_lastEvNumber() ;

constexpr ::Photon::Voice::FrameBuffer const& __cordl_internal_get_nullFrame() const;

constexpr ::Photon::Voice::FrameBuffer& __cordl_internal_get_nullFrame() ;

constexpr ::Photon::Voice::RemoteVoiceOptions const& __cordl_internal_get_options() const;

constexpr ::Photon::Voice::RemoteVoiceOptions& __cordl_internal_get_options() ;

constexpr int32_t const& __cordl_internal_get_playerId() const;

constexpr int32_t& __cordl_internal_get_playerId() ;

constexpr ::Photon::Voice::SpacingProfile* const& __cordl_internal_get_receiveSpacingProfile() const;

constexpr ::Photon::Voice::SpacingProfile*& __cordl_internal_get_receiveSpacingProfile() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get_voiceClient() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get_voiceClient() ;

constexpr uint8_t const& __cordl_internal_get_voiceId() const;

constexpr uint8_t& __cordl_internal_get_voiceId() ;

constexpr void __cordl_internal_set__DelayFrames_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Info_k__BackingField(::Photon::Voice::VoiceInfo  value) ;

constexpr void __cordl_internal_set__LogPrefix_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_channelId(int32_t  value) ;

constexpr void __cordl_internal_set_disposeLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_flushingFramePosInQueue(int32_t  value) ;

constexpr void __cordl_internal_set_frameQueue(::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>*  value) ;

constexpr void __cordl_internal_set_frameQueueReady(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set_lastEvNumber(uint8_t  value) ;

constexpr void __cordl_internal_set_nullFrame(::Photon::Voice::FrameBuffer  value) ;

constexpr void __cordl_internal_set_options(::Photon::Voice::RemoteVoiceOptions  value) ;

constexpr void __cordl_internal_set_playerId(int32_t  value) ;

constexpr void __cordl_internal_set_receiveSpacingProfile(::Photon::Voice::SpacingProfile*  value) ;

constexpr void __cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set_voiceId(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__14_0, addr 0xa74c10c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__14_0() ;

/// @brief Method .ctor, addr 0xa74a8d0, size 0x3f0, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  client, ::Photon::Voice::RemoteVoiceOptions  options, int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info, uint8_t  lastEventNumber) ;

/// @brief Method byteDiff, addr 0xa74ae88, size 0xc, virtual false, abstract: false, final false
static inline uint8_t byteDiff(uint8_t  latest, uint8_t  last) ;

/// @brief Method decodeThread, addr 0xa74b948, size 0x6a8, virtual false, abstract: false, final false
inline void decodeThread() ;

/// [CompilerGenerated]
/// @brief Method get_DelayFrames, addr 0xa74a8c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DelayFrames() ;

/// [CompilerGenerated]
/// @brief Method get_Info, addr 0xa74a888, size 0x14, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceInfo get_Info() ;

/// [CompilerGenerated]
/// @brief Method get_LogPrefix, addr 0xa74ae3c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LogPrefix() ;

/// @brief Method get_ReceiveSpacingProfileDump, addr 0xa74ae60, size 0x14, virtual false, abstract: false, final false
inline ::StringW get_ReceiveSpacingProfileDump() ;

/// @brief Method get_ReceiveSpacingProfileMax, addr 0xa74ae74, size 0x14, virtual false, abstract: false, final false
inline int32_t get_ReceiveSpacingProfileMax() ;

/// @brief Method get_shortName, addr 0xa74acc0, size 0x17c, virtual false, abstract: false, final false
inline ::StringW get_shortName() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method receiveBytes, addr 0xa74ae94, size 0x61c, virtual false, abstract: false, final false
inline void receiveBytes(::by_ref<::Photon::Voice::FrameBuffer>  receivedBytes, uint8_t  evNumber) ;

/// @brief Method receiveFrame, addr 0xa74b6f0, size 0x258, virtual false, abstract: false, final false
inline void receiveFrame(::by_ref<::Photon::Voice::FrameBuffer>  frame) ;

/// @brief Method receiveNullFrames, addr 0xa74b4b0, size 0x240, virtual false, abstract: false, final false
inline void receiveNullFrames(int32_t  count) ;

/// @brief Method removeAndDispose, addr 0xa74bff0, size 0x2c, virtual false, abstract: false, final false
inline void removeAndDispose() ;

/// [CompilerGenerated]
/// @brief Method set_DelayFrames, addr 0xa74a8c8, size 0x8, virtual false, abstract: false, final false
inline void set_DelayFrames(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Info, addr 0xa74a89c, size 0x24, virtual false, abstract: false, final false
inline void set_Info(::Photon::Voice::VoiceInfo  value) ;

/// [CompilerGenerated]
/// @brief Method set_LogPrefix, addr 0xa74ae44, size 0x8, virtual false, abstract: false, final false
inline void set_LogPrefix(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteVoice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteVoice(RemoteVoice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteVoice(RemoteVoice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28439};

/// [CompilerGenerated]
/// @brief Field <Info>k__BackingField, offset: 0x10, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ____Info_k__BackingField;

/// @brief Field options, offset: 0x40, size: 0x50, def value: None
 ::Photon::Voice::RemoteVoiceOptions  ___options;

/// @brief Field channelId, offset: 0x90, size: 0x4, def value: None
 int32_t  ___channelId;

/// [CompilerGenerated]
/// @brief Field <DelayFrames>k__BackingField, offset: 0x94, size: 0x4, def value: None
 int32_t  ____DelayFrames_k__BackingField;

/// @brief Field playerId, offset: 0x98, size: 0x4, def value: None
 int32_t  ___playerId;

/// @brief Field voiceId, offset: 0x9c, size: 0x1, def value: None
 uint8_t  ___voiceId;

/// @brief Field disposed, offset: 0x9d, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field disposeLock, offset: 0xa0, size: 0x8, def value: None
 ::System::Object*  ___disposeLock;

/// [CompilerGenerated]
/// @brief Field <LogPrefix>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ____LogPrefix_k__BackingField;

/// @brief Field receiveSpacingProfile, offset: 0xb0, size: 0x8, def value: None
 ::Photon::Voice::SpacingProfile*  ___receiveSpacingProfile;

/// @brief Field lastEvNumber, offset: 0xb8, size: 0x1, def value: None
 uint8_t  ___lastEvNumber;

/// @brief Field voiceClient, offset: 0xc0, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  ___voiceClient;

/// @brief Field frameQueue, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>*  ___frameQueue;

/// @brief Field frameQueueReady, offset: 0xd0, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ___frameQueueReady;

/// @brief Field flushingFramePosInQueue, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___flushingFramePosInQueue;

/// @brief Field nullFrame, offset: 0xe0, size: 0x38, def value: None
 ::Photon::Voice::FrameBuffer  ___nullFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::RemoteVoice, ____Info_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___options) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___channelId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ____DelayFrames_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___playerId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___voiceId) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___disposed) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___disposeLock) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ____LogPrefix_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___receiveSpacingProfile) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___lastEvNumber) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___voiceClient) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___frameQueue) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___frameQueueReady) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___flushingFramePosInQueue) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoice, ___nullFrame) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::RemoteVoice) == 0x118, "Size mismatch!");

} // namespace end def Photon::Voice
