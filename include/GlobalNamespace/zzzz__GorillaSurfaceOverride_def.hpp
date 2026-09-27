#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSurfaceOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSurfaceOverride)
// Forward declare root types
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSurfaceOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSurfaceOverride*, "", "GorillaSurfaceOverride");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSurfaceOverride
class CORDL_TYPE GorillaSurfaceOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field disablePushBackEffect, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_disablePushBackEffect, put=__cordl_internal_set_disablePushBackEffect)) bool  disablePushBackEffect;

/// @brief Field extraVelMaxMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_extraVelMaxMultiplier, put=__cordl_internal_set_extraVelMaxMultiplier)) float_t  extraVelMaxMultiplier;

/// @brief Field extraVelMultiplier, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_extraVelMultiplier, put=__cordl_internal_set_extraVelMultiplier)) float_t  extraVelMultiplier;

/// @brief Field overrideIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideIndex, put=__cordl_internal_set_overrideIndex)) int32_t  overrideIndex;

/// @brief Field sendOnTapEvent, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendOnTapEvent, put=__cordl_internal_set_sendOnTapEvent)) bool  sendOnTapEvent;

/// @brief Field slidePercentageOverride, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slidePercentageOverride, put=__cordl_internal_set_slidePercentageOverride)) float_t  slidePercentageOverride;

static inline ::GlobalNamespace::GorillaSurfaceOverride* New_ctor() ;

constexpr bool const& __cordl_internal_get_disablePushBackEffect() const;

constexpr bool& __cordl_internal_get_disablePushBackEffect() ;

constexpr float_t const& __cordl_internal_get_extraVelMaxMultiplier() const;

constexpr float_t& __cordl_internal_get_extraVelMaxMultiplier() ;

constexpr float_t const& __cordl_internal_get_extraVelMultiplier() const;

constexpr float_t& __cordl_internal_get_extraVelMultiplier() ;

constexpr int32_t const& __cordl_internal_get_overrideIndex() const;

constexpr int32_t& __cordl_internal_get_overrideIndex() ;

constexpr bool const& __cordl_internal_get_sendOnTapEvent() const;

constexpr bool& __cordl_internal_get_sendOnTapEvent() ;

constexpr float_t const& __cordl_internal_get_slidePercentageOverride() const;

constexpr float_t& __cordl_internal_get_slidePercentageOverride() ;

constexpr void __cordl_internal_set_disablePushBackEffect(bool  value) ;

constexpr void __cordl_internal_set_extraVelMaxMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_extraVelMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_overrideIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sendOnTapEvent(bool  value) ;

constexpr void __cordl_internal_set_slidePercentageOverride(float_t  value) ;

/// @brief Method .ctor, addr 0x579de94, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSurfaceOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSurfaceOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSurfaceOverride(GorillaSurfaceOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSurfaceOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSurfaceOverride(GorillaSurfaceOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1509};

/// [GorillaSoundLookup]
/// @brief Field overrideIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___overrideIndex;

/// @brief Field extraVelMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  ___extraVelMultiplier;

/// @brief Field extraVelMaxMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___extraVelMaxMultiplier;

/// [HideInInspector]
/// @brief Field slidePercentageOverride, offset: 0x2c, size: 0x4, def value: None
 float_t  ___slidePercentageOverride;

/// @brief Field sendOnTapEvent, offset: 0x30, size: 0x1, def value: None
 bool  ___sendOnTapEvent;

/// @brief Field disablePushBackEffect, offset: 0x31, size: 0x1, def value: None
 bool  ___disablePushBackEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSurfaceOverride, ___overrideIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSurfaceOverride, ___extraVelMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSurfaceOverride, ___extraVelMaxMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSurfaceOverride, ___slidePercentageOverride) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSurfaceOverride, ___sendOnTapEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSurfaceOverride, ___disablePushBackEffect) == 0x31, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSurfaceOverride) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
