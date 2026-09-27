#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandSkeleton___c__DisplayClass7_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HandSkeleton___c__DisplayClass7_0)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandSkeleton___c__DisplayClass7_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandSkeleton___c__DisplayClass7_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandSkeleton___c__DisplayClass7_0, "Oculus.Interaction.Input.Compatibility.OVR", "HandSkeleton/<>c__DisplayClass7_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandSkeleton/<>c__DisplayClass7_0
struct CORDL_TYPE HandSkeleton___c__DisplayClass7_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HandSkeleton___c__DisplayClass7_0() ;

// Ctor Parameters [CppParam { name: "joints", ty: "::ArrayW<::UnityW<::UnityEngine::Transform>>", modifiers: "", def_value: None, comment: None }]
constexpr HandSkeleton___c__DisplayClass7_0(::ArrayW<::UnityW<::UnityEngine::Transform>>  joints) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field joints, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  joints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandSkeleton___c__DisplayClass7_0, joints) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandSkeleton___c__DisplayClass7_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
