#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaVelocityTracker___c__DisplayClass28_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaVelocityTracker___c__DisplayClass28_0)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaVelocityTracker___c__DisplayClass28_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0, "GorillaLocomotion.Climbing", "GorillaVelocityTracker/<>c__DisplayClass28_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.Climbing.GorillaVelocityTracker/<>c__DisplayClass28_0
struct CORDL_TYPE GorillaVelocityTracker___c__DisplayClass28_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVelocityTracker___c__DisplayClass28_0() ;

// Ctor Parameters [CppParam { name: "total", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalMag", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "added", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaVelocityTracker___c__DisplayClass28_0(::UnityEngine::Vector3  total, float_t  totalMag, int32_t  added) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4551};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field total, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  total;

/// @brief Field totalMag, offset: 0xc, size: 0x4, def value: None
 float_t  totalMag;

/// @brief Field added, offset: 0x10, size: 0x4, def value: None
 int32_t  added;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0, total) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0, totalMag) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0, added) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
