#pragma once
// IWYU pragma private; include "GorillaTag/GTColor_HSVRanges.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GTColor_HSVRanges)
// Forward declare root types
namespace GlobalNamespace {
struct GTColor_HSVRanges;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTColor_HSVRanges);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTColor_HSVRanges, "GorillaTag", "GTColor/HSVRanges");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.GTColor/HSVRanges
struct CORDL_TYPE GTColor_HSVRanges {
public:
// Declarations
/// @brief Method .ctor, addr 0x5d22fa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  hMin, float_t  hMax, float_t  sMin, float_t  sMax, float_t  vMin, float_t  vMax) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTColor_HSVRanges() ;

// Ctor Parameters [CppParam { name: "h", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "s", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "v", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr GTColor_HSVRanges(::UnityEngine::Vector2  h, ::UnityEngine::Vector2  s, ::UnityEngine::Vector2  v) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field h, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  h;

/// @brief Field s, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  s;

/// @brief Field v, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  v;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTColor_HSVRanges, h) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTColor_HSVRanges, s) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTColor_HSVRanges, v) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTColor_HSVRanges) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
