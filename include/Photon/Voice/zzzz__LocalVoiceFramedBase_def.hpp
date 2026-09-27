#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceFramedBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoiceFramedBase)
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
struct VoiceInfo;
}
// Forward declare root types
namespace Photon::Voice {
class LocalVoiceFramedBase;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LocalVoiceFramedBase*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LocalVoiceFramedBase*, "Photon.Voice", "LocalVoiceFramedBase");
// Dependencies Photon.Voice.LocalVoice
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LocalVoiceFramedBase
class CORDL_TYPE LocalVoiceFramedBase : public ::Photon::Voice::LocalVoice {
public:
// Declarations
 __declspec(property(get=get_FrameSize, put=set_FrameSize)) int32_t  FrameSize;

/// @brief Field <FrameSize>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__FrameSize_k__BackingField, put=__cordl_internal_set__FrameSize_k__BackingField)) int32_t  _FrameSize_k__BackingField;

static inline ::Photon::Voice::LocalVoiceFramedBase* New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize) ;

constexpr int32_t const& __cordl_internal_get__FrameSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FrameSize_k__BackingField() ;

constexpr void __cordl_internal_set__FrameSize_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xa753eac, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize) ;

/// [CompilerGenerated]
/// @brief Method get_FrameSize, addr 0xa753e9c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FrameSize() ;

/// [CompilerGenerated]
/// @brief Method set_FrameSize, addr 0xa753ea4, size 0x8, virtual false, abstract: false, final false
inline void set_FrameSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceFramedBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceFramedBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceFramedBase(LocalVoiceFramedBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceFramedBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceFramedBase(LocalVoiceFramedBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28487};

/// [CompilerGenerated]
/// @brief Field <FrameSize>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____FrameSize_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::LocalVoiceFramedBase, ____FrameSize_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::LocalVoiceFramedBase) == 0xc0, "Size mismatch!");

} // namespace end def Photon::Voice
