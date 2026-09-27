#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGuardianIdol___c__DisplayClass54_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TappableGuardianIdol___c__DisplayClass54_0)
namespace GlobalNamespace {
class TappableGuardianIdol;
}
// Forward declare root types
namespace GlobalNamespace {
struct TappableGuardianIdol___c__DisplayClass54_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0, "", "TappableGuardianIdol/<>c__DisplayClass54_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: true
// CS Name: TappableGuardianIdol/<>c__DisplayClass54_0
struct CORDL_TYPE TappableGuardianIdol___c__DisplayClass54_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TappableGuardianIdol___c__DisplayClass54_0() ;

// Ctor Parameters [CppParam { name: "_lookDirection", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TappableGuardianIdol>", modifiers: "", def_value: None, comment: None }, CppParam { name: "nextLookTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TappableGuardianIdol___c__DisplayClass54_0(::UnityEngine::Quaternion  _lookDirection, ::UnityW<::GlobalNamespace::TappableGuardianIdol>  __4__this, float_t  nextLookTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _lookDirection, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _lookDirection;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableGuardianIdol>  __4__this;

/// @brief Field nextLookTime, offset: 0x18, size: 0x4, def value: None
 float_t  nextLookTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0, _lookDirection) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0, nextLookTime) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
