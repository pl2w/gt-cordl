#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/RemoteVoiceLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteVoiceLink)
namespace Photon::Voice {
template<typename T>
class FrameOut_1;
}
namespace Photon::Voice {
struct RemoteVoiceOptions;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::RemoteVoiceLink*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::RemoteVoiceLink*, "Photon.Voice.Unity", "RemoteVoiceLink");
// Dependencies Photon.Voice.VoiceInfo, System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.RemoteVoiceLink
class CORDL_TYPE RemoteVoiceLink : public ::System::Object {
public:
// Declarations
/// @brief Field ChannelId, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChannelId, put=__cordl_internal_set_ChannelId)) int32_t  ChannelId;

/// @brief Field FloatFrameDecoded, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_FloatFrameDecoded, put=__cordl_internal_set_FloatFrameDecoded)) ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  FloatFrameDecoded;

/// @brief Field Info, offset 0x10, size 0x30 
 __declspec(property(get=__cordl_internal_get_Info, put=__cordl_internal_set_Info)) ::Photon::Voice::VoiceInfo  Info;

/// @brief Field PlayerId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) int32_t  PlayerId;

/// @brief Field RemoteVoiceRemoved, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RemoteVoiceRemoved, put=__cordl_internal_set_RemoteVoiceRemoved)) ::System::Action*  RemoteVoiceRemoved;

/// @brief Field VoiceId, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_VoiceId, put=__cordl_internal_set_VoiceId)) int32_t  VoiceId;

/// @brief Field cached, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cached, put=__cordl_internal_set_cached)) ::StringW  cached;

/// @brief Convert operator to "::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>"
constexpr operator  ::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>*() noexcept;

/// @brief Method Equals, addr 0xa771d80, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::Photon::Voice::Unity::RemoteVoiceLink*  other) ;

/// @brief Method Init, addr 0xa771a50, size 0xe4, virtual false, abstract: false, final false
inline void Init(::by_ref<::Photon::Voice::RemoteVoiceOptions>  options) ;

static inline ::Photon::Voice::Unity::RemoteVoiceLink* New_ctor(::Photon::Voice::VoiceInfo  info, int32_t  playerId, int32_t  voiceId, int32_t  channelId) ;

/// @brief Method OnDecodedFrameFloatAction, addr 0xa771b50, size 0x1c, virtual false, abstract: false, final false
inline void OnDecodedFrameFloatAction(::Photon::Voice::FrameOut_1<float_t>*  floats) ;

/// @brief Method OnRemoteVoiceRemoveAction, addr 0xa771b34, size 0x1c, virtual false, abstract: false, final false
inline void OnRemoteVoiceRemoveAction() ;

/// @brief Method ToString, addr 0xa771b6c, size 0x214, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_ChannelId() const;

constexpr int32_t& __cordl_internal_get_ChannelId() ;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>* const& __cordl_internal_get_FloatFrameDecoded() const;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*& __cordl_internal_get_FloatFrameDecoded() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get_Info() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get_Info() ;

constexpr int32_t const& __cordl_internal_get_PlayerId() const;

constexpr int32_t& __cordl_internal_get_PlayerId() ;

constexpr ::System::Action* const& __cordl_internal_get_RemoteVoiceRemoved() const;

constexpr ::System::Action*& __cordl_internal_get_RemoteVoiceRemoved() ;

constexpr int32_t const& __cordl_internal_get_VoiceId() const;

constexpr int32_t& __cordl_internal_get_VoiceId() ;

constexpr ::StringW const& __cordl_internal_get_cached() const;

constexpr ::StringW& __cordl_internal_get_cached() ;

constexpr void __cordl_internal_set_ChannelId(int32_t  value) ;

constexpr void __cordl_internal_set_FloatFrameDecoded(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value) ;

constexpr void __cordl_internal_set_Info(::Photon::Voice::VoiceInfo  value) ;

constexpr void __cordl_internal_set_PlayerId(int32_t  value) ;

constexpr void __cordl_internal_set_RemoteVoiceRemoved(::System::Action*  value) ;

constexpr void __cordl_internal_set_VoiceId(int32_t  value) ;

constexpr void __cordl_internal_set_cached(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7719f4, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceInfo  info, int32_t  playerId, int32_t  voiceId, int32_t  channelId) ;

/// [CompilerGenerated]
/// @brief Method add_FloatFrameDecoded, addr 0xa77175c, size 0xb0, virtual false, abstract: false, final false
inline void add_FloatFrameDecoded(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_RemoteVoiceRemoved, addr 0xa7718bc, size 0x9c, virtual false, abstract: false, final false
inline void add_RemoteVoiceRemoved(::System::Action*  value) ;

/// @brief Convert to "::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>"
constexpr ::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>* i___System__IEquatable_1___Photon__Voice__Unity__RemoteVoiceLink__() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_FloatFrameDecoded, addr 0xa77180c, size 0xb0, virtual false, abstract: false, final false
inline void remove_FloatFrameDecoded(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_RemoteVoiceRemoved, addr 0xa771958, size 0x9c, virtual false, abstract: false, final false
inline void remove_RemoteVoiceRemoved(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteVoiceLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoiceLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteVoiceLink(RemoteVoiceLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoiceLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteVoiceLink(RemoteVoiceLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28885};

/// @brief Field Info, offset: 0x10, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ___Info;

/// @brief Field PlayerId, offset: 0x40, size: 0x4, def value: None
 int32_t  ___PlayerId;

/// @brief Field VoiceId, offset: 0x44, size: 0x4, def value: None
 int32_t  ___VoiceId;

/// @brief Field ChannelId, offset: 0x48, size: 0x4, def value: None
 int32_t  ___ChannelId;

/// [CompilerGenerated]
/// @brief Field FloatFrameDecoded, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  ___FloatFrameDecoded;

/// [CompilerGenerated]
/// @brief Field RemoteVoiceRemoved, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___RemoteVoiceRemoved;

/// @brief Field cached, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___cached;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___Info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___PlayerId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___VoiceId) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___ChannelId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___FloatFrameDecoded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___RemoteVoiceRemoved) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::RemoteVoiceLink, ___cached) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::RemoteVoiceLink) == 0x68, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
