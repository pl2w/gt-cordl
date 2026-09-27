#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InsightPassthroughKeyboardHandsIntensity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_InsightPassthroughKeyboardHandsIntensity)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughKeyboardHandsIntensity;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity, "", "OVRPlugin/InsightPassthroughKeyboardHandsIntensity");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/InsightPassthroughKeyboardHandsIntensity
struct CORDL_TYPE OVRPlugin_InsightPassthroughKeyboardHandsIntensity {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_InsightPassthroughKeyboardHandsIntensity() ;

// Ctor Parameters [CppParam { name: "LeftHandIntensity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RightHandIntensity", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_InsightPassthroughKeyboardHandsIntensity(float_t  LeftHandIntensity, float_t  RightHandIntensity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field LeftHandIntensity, offset: 0x0, size: 0x4, def value: None
 float_t  LeftHandIntensity;

/// @brief Field RightHandIntensity, offset: 0x4, size: 0x4, def value: None
 float_t  RightHandIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity, LeftHandIntensity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity, RightHandIntensity) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
