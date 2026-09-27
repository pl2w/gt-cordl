#pragma once
// IWYU pragma private; include "GlobalNamespace/DampenVolumeSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DampenVolumeSpace)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class DampenVolumeSpace;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DampenVolumeSpace*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DampenVolumeSpace*, "", "DampenVolumeSpace");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DampenVolumeSpace
class CORDL_TYPE DampenVolumeSpace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field setVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_setVolume, put=__cordl_internal_set_setVolume)) float_t  setVolume;

/// @brief Method Awake, addr 0x566df08, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DampenVolumeSpace* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x566df88, size 0x124, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_setVolume() const;

constexpr float_t& __cordl_internal_get_setVolume() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_setVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x566e0ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DampenVolumeSpace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DampenVolumeSpace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DampenVolumeSpace(DampenVolumeSpace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DampenVolumeSpace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DampenVolumeSpace(DampenVolumeSpace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{789};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field setVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___setVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DampenVolumeSpace, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DampenVolumeSpace, ___setVolume) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DampenVolumeSpace) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
