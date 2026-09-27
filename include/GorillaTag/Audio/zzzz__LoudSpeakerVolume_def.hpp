#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoudSpeakerVolume)
namespace GorillaTag::Audio {
class LoudSpeakerTrigger;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Audio {
class LoudSpeakerVolume;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::LoudSpeakerVolume*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::LoudSpeakerVolume*, "GorillaTag.Audio", "LoudSpeakerVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.LoudSpeakerVolume
class CORDL_TYPE LoudSpeakerVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _trigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__trigger, put=__cordl_internal_set__trigger)) ::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger>  _trigger;

static inline ::GorillaTag::Audio::LoudSpeakerVolume* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d54020, size 0x1c0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d541e0, size 0x198, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger> const& __cordl_internal_get__trigger() const;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger>& __cordl_internal_get__trigger() ;

constexpr void __cordl_internal_set__trigger(::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger>  value) ;

/// @brief Method .ctor, addr 0x5d54378, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoudSpeakerVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoudSpeakerVolume(LoudSpeakerVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoudSpeakerVolume(LoudSpeakerVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4796};

/// [SerializeField]
/// @brief Field _trigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger>  ____trigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerVolume, ____trigger) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::LoudSpeakerVolume) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Audio
