#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/PhotonVoiceCreatedParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhotonVoiceCreatedParams)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
class LocalVoice;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class PhotonVoiceCreatedParams;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::PhotonVoiceCreatedParams*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::PhotonVoiceCreatedParams*, "Photon.Voice.Unity", "PhotonVoiceCreatedParams");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.PhotonVoiceCreatedParams
class CORDL_TYPE PhotonVoiceCreatedParams : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AudioDesc, put=set_AudioDesc)) ::Photon::Voice::IAudioDesc*  AudioDesc;

 __declspec(property(get=get_Voice, put=set_Voice)) ::Photon::Voice::LocalVoice*  Voice;

/// @brief Field <AudioDesc>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioDesc_k__BackingField, put=__cordl_internal_set__AudioDesc_k__BackingField)) ::Photon::Voice::IAudioDesc*  _AudioDesc_k__BackingField;

/// @brief Field <Voice>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Voice_k__BackingField, put=__cordl_internal_set__Voice_k__BackingField)) ::Photon::Voice::LocalVoice*  _Voice_k__BackingField;

static inline ::Photon::Voice::Unity::PhotonVoiceCreatedParams* New_ctor() ;

constexpr ::Photon::Voice::IAudioDesc* const& __cordl_internal_get__AudioDesc_k__BackingField() const;

constexpr ::Photon::Voice::IAudioDesc*& __cordl_internal_get__AudioDesc_k__BackingField() ;

constexpr ::Photon::Voice::LocalVoice* const& __cordl_internal_get__Voice_k__BackingField() const;

constexpr ::Photon::Voice::LocalVoice*& __cordl_internal_get__Voice_k__BackingField() ;

constexpr void __cordl_internal_set__AudioDesc_k__BackingField(::Photon::Voice::IAudioDesc*  value) ;

constexpr void __cordl_internal_set__Voice_k__BackingField(::Photon::Voice::LocalVoice*  value) ;

/// @brief Method .ctor, addr 0xa75a97c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AudioDesc, addr 0xa75a96c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::IAudioDesc* get_AudioDesc() ;

/// [CompilerGenerated]
/// @brief Method get_Voice, addr 0xa75a95c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* get_Voice() ;

/// [CompilerGenerated]
/// @brief Method set_AudioDesc, addr 0xa75a974, size 0x8, virtual false, abstract: false, final false
inline void set_AudioDesc(::Photon::Voice::IAudioDesc*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Voice, addr 0xa75a964, size 0x8, virtual false, abstract: false, final false
inline void set_Voice(::Photon::Voice::LocalVoice*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonVoiceCreatedParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceCreatedParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonVoiceCreatedParams(PhotonVoiceCreatedParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceCreatedParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonVoiceCreatedParams(PhotonVoiceCreatedParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28513};

/// [CompilerGenerated]
/// @brief Field <Voice>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::LocalVoice*  ____Voice_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioDesc>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::IAudioDesc*  ____AudioDesc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::PhotonVoiceCreatedParams, ____Voice_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::PhotonVoiceCreatedParams, ____AudioDesc_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::PhotonVoiceCreatedParams) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
