#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandJointsPose_WeightedJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HandJointsPose_WeightedJoint)
// Forward declare root types
namespace GlobalNamespace {
struct HandJointsPose_WeightedJoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandJointsPose_WeightedJoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandJointsPose_WeightedJoint, "Oculus.Interaction", "HandJointsPose/WeightedJoint");
// Dependencies Oculus.Interaction.Input.HandJointId
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandJointsPose/WeightedJoint
struct CORDL_TYPE HandJointsPose_WeightedJoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HandJointsPose_WeightedJoint() ;

// Ctor Parameters [CppParam { name: "handJointId", ty: "::Oculus::Interaction::Input::HandJointId", modifiers: "", def_value: None, comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HandJointsPose_WeightedJoint(::Oculus::Interaction::Input::HandJointId  handJointId, float_t  weight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field handJointId, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  handJointId;

/// @brief Field weight, offset: 0x4, size: 0x4, def value: None
 float_t  weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandJointsPose_WeightedJoint, handJointId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandJointsPose_WeightedJoint, weight) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandJointsPose_WeightedJoint) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
