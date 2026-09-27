#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__MatchOrientation_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TeleportRequest)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportRequest");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.MatchOrientation
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest
struct CORDL_TYPE TeleportRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TeleportRequest() ;

// Ctor Parameters [CppParam { name: "destinationPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "matchOrientation", ty: "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation", modifiers: "", def_value: None, comment: None }]
constexpr TeleportRequest(::UnityEngine::Vector3  destinationPosition, ::UnityEngine::Quaternion  destinationRotation, float_t  requestTime, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  matchOrientation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field destinationPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  destinationPosition;

/// @brief Field destinationRotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  destinationRotation;

/// @brief Field requestTime, offset: 0x1c, size: 0x4, def value: None
 float_t  requestTime;

/// @brief Field matchOrientation, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  matchOrientation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest, destinationPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest, destinationRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest, requestTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest, matchOrientation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest) == 0x24, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
