#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubeRenderer___c__DisplayClass76_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TubeRenderer___c__DisplayClass76_0)
// Forward declare root types
namespace GlobalNamespace {
struct TubeRenderer___c__DisplayClass76_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TubeRenderer___c__DisplayClass76_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeRenderer___c__DisplayClass76_0, "Oculus.Interaction", "TubeRenderer/<>c__DisplayClass76_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Quaternion, UnityEngine.Space, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TubeRenderer/<>c__DisplayClass76_0
struct CORDL_TYPE TubeRenderer___c__DisplayClass76_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TubeRenderer___c__DisplayClass76_0() ;

// Ctor Parameters [CppParam { name: "space", ty: "::UnityEngine::Space", modifiers: "", def_value: None, comment: None }, CppParam { name: "inverseRootRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootPositionScaled", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr TubeRenderer___c__DisplayClass76_0(::UnityEngine::Space  space, ::UnityEngine::Quaternion  inverseRootRotation, ::UnityEngine::Vector3  rootPositionScaled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field space, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Space  space;

/// @brief Field inverseRootRotation, offset: 0x4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  inverseRootRotation;

/// @brief Field rootPositionScaled, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  rootPositionScaled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeRenderer___c__DisplayClass76_0, space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeRenderer___c__DisplayClass76_0, inverseRootRotation) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeRenderer___c__DisplayClass76_0, rootPositionScaled) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeRenderer___c__DisplayClass76_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
