#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPotentialPlacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPotentialPlacement)
namespace GlobalNamespace {
class BuilderPiece;
}
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderPotentialPlacement;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderPotentialPlacement);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPotentialPlacement, "GorillaTagScripts", "BuilderPotentialPlacement");
// Dependencies SnapBounds, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderPotentialPlacement
struct CORDL_TYPE BuilderPotentialPlacement {
public:
// Declarations
/// @brief Method Reset, addr 0x5ba94b0, size 0x128, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPotentialPlacement() ;

// Ctor Parameters [CppParam { name: "attachPiece", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentPiece", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachPlaneNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "score", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetX", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetZ", ty: "int8_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPotentialPlacement(::UnityW<::GlobalNamespace::BuilderPiece>  attachPiece, ::UnityW<::GlobalNamespace::BuilderPiece>  parentPiece, int32_t  attachIndex, int32_t  parentAttachIndex, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  attachPlaneNormal, float_t  attachDistance, float_t  score, ::GlobalNamespace::SnapBounds  attachBounds, ::GlobalNamespace::SnapBounds  parentAttachBounds, uint8_t  twist, int8_t  bumpOffsetX, int8_t  bumpOffsetZ) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field attachPiece, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  attachPiece;

/// @brief Field parentPiece, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  parentPiece;

/// @brief Field attachIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  attachIndex;

/// @brief Field parentAttachIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  parentAttachIndex;

/// @brief Field localPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

/// @brief Field attachPlaneNormal, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  attachPlaneNormal;

/// @brief Field attachDistance, offset: 0x40, size: 0x4, def value: None
 float_t  attachDistance;

/// @brief Field score, offset: 0x44, size: 0x4, def value: None
 float_t  score;

/// @brief Field attachBounds, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  attachBounds;

/// @brief Field parentAttachBounds, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  parentAttachBounds;

/// @brief Field twist, offset: 0x68, size: 0x1, def value: None
 uint8_t  twist;

/// @brief Field bumpOffsetX, offset: 0x69, size: 0x1, def value: None
 int8_t  bumpOffsetX;

/// @brief Field bumpOffsetZ, offset: 0x6a, size: 0x1, def value: None
 int8_t  bumpOffsetZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, attachPiece) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, parentPiece) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, attachIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, parentAttachIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, localPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, localRotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, attachPlaneNormal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, attachDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, score) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, attachBounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, parentAttachBounds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, twist) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, bumpOffsetX) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacement, bumpOffsetZ) == 0x6a, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPotentialPlacement) == 0x70, "Size mismatch!");

} // namespace end def GorillaTagScripts
