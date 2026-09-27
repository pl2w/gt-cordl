#pragma once
// IWYU pragma private; include "Photon/Voice/RemoteVoiceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteVoiceInfo)
namespace Photon::Voice {
struct VoiceInfo;
}
// Forward declare root types
namespace Photon::Voice {
class RemoteVoiceInfo;
}
// Write type traits
MARK_REF_T(::Photon::Voice::RemoteVoiceInfo*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::RemoteVoiceInfo*, "Photon.Voice", "RemoteVoiceInfo");
// Dependencies Photon.Voice.VoiceInfo, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.RemoteVoiceInfo
class CORDL_TYPE RemoteVoiceInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ChannelId, put=set_ChannelId)) int32_t  ChannelId;

 __declspec(property(get=get_Info, put=set_Info)) ::Photon::Voice::VoiceInfo  Info;

 __declspec(property(get=get_PlayerId, put=set_PlayerId)) int32_t  PlayerId;

 __declspec(property(get=get_VoiceId, put=set_VoiceId)) uint8_t  VoiceId;

/// @brief Field <ChannelId>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ChannelId_k__BackingField, put=__cordl_internal_set__ChannelId_k__BackingField)) int32_t  _ChannelId_k__BackingField;

/// @brief Field <Info>k__BackingField, offset 0x10, size 0x30 
 __declspec(property(get=__cordl_internal_get__Info_k__BackingField, put=__cordl_internal_set__Info_k__BackingField)) ::Photon::Voice::VoiceInfo  _Info_k__BackingField;

/// @brief Field <PlayerId>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlayerId_k__BackingField, put=__cordl_internal_set__PlayerId_k__BackingField)) int32_t  _PlayerId_k__BackingField;

/// @brief Field <VoiceId>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__VoiceId_k__BackingField, put=__cordl_internal_set__VoiceId_k__BackingField)) uint8_t  _VoiceId_k__BackingField;

static inline ::Photon::Voice::RemoteVoiceInfo* New_ctor(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info) ;

constexpr int32_t const& __cordl_internal_get__ChannelId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ChannelId_k__BackingField() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get__Info_k__BackingField() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get__Info_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlayerId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlayerId_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__VoiceId_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__VoiceId_k__BackingField() ;

constexpr void __cordl_internal_set__ChannelId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Info_k__BackingField(::Photon::Voice::VoiceInfo  value) ;

constexpr void __cordl_internal_set__PlayerId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__VoiceId_k__BackingField(uint8_t  value) ;

/// @brief Method .ctor, addr 0xa752e48, size 0x58, virtual false, abstract: false, final false
inline void _ctor(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info) ;

/// [CompilerGenerated]
/// @brief Method get_ChannelId, addr 0xa7540d4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ChannelId() ;

/// [CompilerGenerated]
/// @brief Method get_Info, addr 0xa75409c, size 0x14, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceInfo get_Info() ;

/// [CompilerGenerated]
/// @brief Method get_PlayerId, addr 0xa7540e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayerId() ;

/// [CompilerGenerated]
/// @brief Method get_VoiceId, addr 0xa7540f4, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_VoiceId() ;

/// [CompilerGenerated]
/// @brief Method set_ChannelId, addr 0xa7540dc, size 0x8, virtual false, abstract: false, final false
inline void set_ChannelId(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Info, addr 0xa7540b0, size 0x24, virtual false, abstract: false, final false
inline void set_Info(::Photon::Voice::VoiceInfo  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayerId, addr 0xa7540ec, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerId(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_VoiceId, addr 0xa7540fc, size 0x8, virtual false, abstract: false, final false
inline void set_VoiceId(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteVoiceInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoiceInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteVoiceInfo(RemoteVoiceInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoiceInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteVoiceInfo(RemoteVoiceInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28490};

/// [CompilerGenerated]
/// @brief Field <Info>k__BackingField, offset: 0x10, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ____Info_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChannelId>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____ChannelId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlayerId>k__BackingField, offset: 0x44, size: 0x4, def value: None
 int32_t  ____PlayerId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoiceId>k__BackingField, offset: 0x48, size: 0x1, def value: None
 uint8_t  ____VoiceId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::RemoteVoiceInfo, ____Info_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceInfo, ____ChannelId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceInfo, ____PlayerId_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceInfo, ____VoiceId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::RemoteVoiceInfo) == 0x50, "Size mismatch!");

} // namespace end def Photon::Voice
