#pragma once
// IWYU pragma private; include "GlobalNamespace/EnclosedSpaceVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnclosedSpaceVolume)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class EnclosedSpaceVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnclosedSpaceVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnclosedSpaceVolume*, "", "EnclosedSpaceVolume");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnclosedSpaceVolume
class CORDL_TYPE EnclosedSpaceVolume : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field audioSourceInside, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourceInside, put=__cordl_internal_set_audioSourceInside)) ::UnityW<::UnityEngine::AudioSource>  audioSourceInside;

/// @brief Field audioSourceOutside, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourceOutside, put=__cordl_internal_set_audioSourceOutside)) ::UnityW<::UnityEngine::AudioSource>  audioSourceOutside;

/// @brief Field loudVolume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudVolume, put=__cordl_internal_set_loudVolume)) float_t  loudVolume;

/// @brief Field quietVolume, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_quietVolume, put=__cordl_internal_set_quietVolume)) float_t  quietVolume;

/// @brief Method Awake, addr 0x58035cc, size 0x38, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::EnclosedSpaceVolume* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5803604, size 0xd4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x58036d8, size 0xd4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSourceInside() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSourceInside() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSourceOutside() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSourceOutside() ;

constexpr float_t const& __cordl_internal_get_loudVolume() const;

constexpr float_t& __cordl_internal_get_loudVolume() ;

constexpr float_t const& __cordl_internal_get_quietVolume() const;

constexpr float_t& __cordl_internal_get_quietVolume() ;

constexpr void __cordl_internal_set_audioSourceInside(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioSourceOutside(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loudVolume(float_t  value) ;

constexpr void __cordl_internal_set_quietVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x58037ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnclosedSpaceVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnclosedSpaceVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnclosedSpaceVolume(EnclosedSpaceVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnclosedSpaceVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnclosedSpaceVolume(EnclosedSpaceVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1687};

/// @brief Field audioSourceInside, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSourceInside;

/// @brief Field audioSourceOutside, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSourceOutside;

/// @brief Field loudVolume, offset: 0x30, size: 0x4, def value: None
 float_t  ___loudVolume;

/// @brief Field quietVolume, offset: 0x34, size: 0x4, def value: None
 float_t  ___quietVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnclosedSpaceVolume, ___audioSourceInside) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnclosedSpaceVolume, ___audioSourceOutside) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnclosedSpaceVolume, ___loudVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnclosedSpaceVolume, ___quietVolume) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnclosedSpaceVolume) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
