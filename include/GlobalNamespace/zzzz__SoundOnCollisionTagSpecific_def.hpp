#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundOnCollisionTagSpecific.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoundOnCollisionTagSpecific)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundOnCollisionTagSpecific;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundOnCollisionTagSpecific*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundOnCollisionTagSpecific*, "", "SoundOnCollisionTagSpecific");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundOnCollisionTagSpecific
class CORDL_TYPE SoundOnCollisionTagSpecific : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collisionSounds, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionSounds, put=__cordl_internal_set_collisionSounds)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  collisionSounds;

/// @brief Field nextSound, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSound, put=__cordl_internal_set_nextSound)) float_t  nextSound;

/// @brief Field noiseCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseCooldown, put=__cordl_internal_set_noiseCooldown)) float_t  noiseCooldown;

/// @brief Field tagName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagName, put=__cordl_internal_set_tagName)) ::StringW  tagName;

static inline ::GlobalNamespace::SoundOnCollisionTagSpecific* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x56ad880, size 0xbc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_collisionSounds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_collisionSounds() ;

constexpr float_t const& __cordl_internal_get_nextSound() const;

constexpr float_t& __cordl_internal_get_nextSound() ;

constexpr float_t const& __cordl_internal_get_noiseCooldown() const;

constexpr float_t& __cordl_internal_get_noiseCooldown() ;

constexpr ::StringW const& __cordl_internal_get_tagName() const;

constexpr ::StringW& __cordl_internal_get_tagName() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collisionSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_nextSound(float_t  value) ;

constexpr void __cordl_internal_set_noiseCooldown(float_t  value) ;

constexpr void __cordl_internal_set_tagName(::StringW  value) ;

/// @brief Method .ctor, addr 0x56ad93c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundOnCollisionTagSpecific() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundOnCollisionTagSpecific", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundOnCollisionTagSpecific(SoundOnCollisionTagSpecific && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundOnCollisionTagSpecific", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundOnCollisionTagSpecific(SoundOnCollisionTagSpecific const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{928};

/// @brief Field tagName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___tagName;

/// @brief Field noiseCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___noiseCooldown;

/// @brief Field nextSound, offset: 0x2c, size: 0x4, def value: None
 float_t  ___nextSound;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field collisionSounds, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___collisionSounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundOnCollisionTagSpecific, ___tagName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundOnCollisionTagSpecific, ___noiseCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundOnCollisionTagSpecific, ___nextSound) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundOnCollisionTagSpecific, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundOnCollisionTagSpecific, ___collisionSounds) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundOnCollisionTagSpecific) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
