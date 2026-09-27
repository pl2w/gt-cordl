#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapOverrides.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__HashWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HandTapOverrides)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class HandTapOverrides;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTapOverrides*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapOverrides*, "", "HandTapOverrides");
// Dependencies GorillaTag.HashWrapper, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapOverrides
class CORDL_TYPE HandTapOverrides : public ::System::Object {
public:
// Declarations
/// @brief Field gamemodeTapPrefab, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gamemodeTapPrefab, put=__cordl_internal_set_gamemodeTapPrefab)) ::GorillaTag::HashWrapper  gamemodeTapPrefab;

/// @brief Field overrideGamemodePrefab, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideGamemodePrefab, put=__cordl_internal_set_overrideGamemodePrefab)) bool  overrideGamemodePrefab;

/// @brief Field overrideSound, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideSound, put=__cordl_internal_set_overrideSound)) bool  overrideSound;

/// @brief Field overrideSurfacePrefab, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideSurfacePrefab, put=__cordl_internal_set_overrideSurfacePrefab)) bool  overrideSurfacePrefab;

/// @brief Field surfaceTapPrefab, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceTapPrefab, put=__cordl_internal_set_surfaceTapPrefab)) ::GorillaTag::HashWrapper  surfaceTapPrefab;

/// @brief Field tapSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tapSound, put=__cordl_internal_set_tapSound)) ::UnityW<::UnityEngine::AudioClip>  tapSound;

static inline ::GlobalNamespace::HandTapOverrides* New_ctor() ;

constexpr ::GorillaTag::HashWrapper const& __cordl_internal_get_gamemodeTapPrefab() const;

constexpr ::GorillaTag::HashWrapper& __cordl_internal_get_gamemodeTapPrefab() ;

constexpr bool const& __cordl_internal_get_overrideGamemodePrefab() const;

constexpr bool& __cordl_internal_get_overrideGamemodePrefab() ;

constexpr bool const& __cordl_internal_get_overrideSound() const;

constexpr bool& __cordl_internal_get_overrideSound() ;

constexpr bool const& __cordl_internal_get_overrideSurfacePrefab() const;

constexpr bool& __cordl_internal_get_overrideSurfacePrefab() ;

constexpr ::GorillaTag::HashWrapper const& __cordl_internal_get_surfaceTapPrefab() const;

constexpr ::GorillaTag::HashWrapper& __cordl_internal_get_surfaceTapPrefab() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_tapSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_tapSound() ;

constexpr void __cordl_internal_set_gamemodeTapPrefab(::GorillaTag::HashWrapper  value) ;

constexpr void __cordl_internal_set_overrideGamemodePrefab(bool  value) ;

constexpr void __cordl_internal_set_overrideSound(bool  value) ;

constexpr void __cordl_internal_set_overrideSurfacePrefab(bool  value) ;

constexpr void __cordl_internal_set_surfaceTapPrefab(::GorillaTag::HashWrapper  value) ;

constexpr void __cordl_internal_set_tapSound(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5653214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapOverrides() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapOverrides", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapOverrides(HandTapOverrides && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapOverrides", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapOverrides(HandTapOverrides const& ) = delete;

/// @brief Field PREFAB_TOOLTIP offset 0xffffffff size 0x8
static constexpr ::ConstString  PREFAB_TOOLTIP{u"Must be in the global object pool and have a tag.\n\nPrefabs can have an FXModifier component to be adjusted after creation."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{736};

/// @brief Field overrideSurfacePrefab, offset: 0x10, size: 0x1, def value: None
 bool  ___overrideSurfacePrefab;

/// [Tooltip("Must be in the global object pool and have a tag.\n\nPrefabs can have an FXModifier component to be adjusted after creation.")]
/// @brief Field surfaceTapPrefab, offset: 0x14, size: 0x4, def value: None
 ::GorillaTag::HashWrapper  ___surfaceTapPrefab;

/// @brief Field overrideGamemodePrefab, offset: 0x18, size: 0x1, def value: None
 bool  ___overrideGamemodePrefab;

/// [Tooltip("Must be in the global object pool and have a tag.\n\nPrefabs can have an FXModifier component to be adjusted after creation.")]
/// @brief Field gamemodeTapPrefab, offset: 0x1c, size: 0x4, def value: None
 ::GorillaTag::HashWrapper  ___gamemodeTapPrefab;

/// @brief Field overrideSound, offset: 0x20, size: 0x1, def value: None
 bool  ___overrideSound;

/// @brief Field tapSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___tapSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapOverrides, ___overrideSurfacePrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapOverrides, ___surfaceTapPrefab) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapOverrides, ___overrideGamemodePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapOverrides, ___gamemodeTapPrefab) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapOverrides, ___overrideSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapOverrides, ___tapSound) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapOverrides) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
