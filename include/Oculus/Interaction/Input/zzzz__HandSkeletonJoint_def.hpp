#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSkeletonJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandSkeletonJoint)
// Forward declare root types
namespace Oculus::Interaction::Input {
struct HandSkeletonJoint;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::HandSkeletonJoint);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandSkeletonJoint, "Oculus.Interaction.Input", "HandSkeletonJoint");
// Dependencies UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.HandSkeletonJoint
struct CORDL_TYPE HandSkeletonJoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HandSkeletonJoint() ;

// Ctor Parameters [CppParam { name: "parent", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr HandSkeletonJoint(int32_t  parent, ::UnityEngine::Pose  pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field parent, offset: 0x0, size: 0x4, def value: None
 int32_t  parent;

/// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
 ::UnityEngine::Pose  pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandSkeletonJoint, parent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSkeletonJoint, pose) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandSkeletonJoint) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
