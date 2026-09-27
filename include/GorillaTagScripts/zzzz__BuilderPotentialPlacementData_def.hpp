#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPotentialPlacementData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPotentialPlacementData)
namespace GorillaTagScripts {
struct BuilderPotentialPlacement;
}
namespace GorillaTagScripts {
class BuilderTable;
}
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderPotentialPlacementData;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderPotentialPlacementData);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPotentialPlacementData, "GorillaTagScripts", "BuilderPotentialPlacementData");
// Dependencies SnapBounds, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderPotentialPlacementData
struct CORDL_TYPE BuilderPotentialPlacementData {
public:
// Declarations
/// @brief Method ToPotentialPlacement, addr 0x5ba9ebc, size 0x2f4, virtual false, abstract: false, final false
inline ::GorillaTagScripts::BuilderPotentialPlacement ToPotentialPlacement(::GorillaTagScripts::BuilderTable*  table) ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPotentialPlacementData() ;

// Ctor Parameters [CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentPieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "score", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachPlaneNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetX", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetZ", ty: "int8_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPotentialPlacementData(int32_t  pieceId, int32_t  parentPieceId, float_t  score, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  attachIndex, int32_t  parentAttachIndex, float_t  attachDistance, ::UnityEngine::Vector3  attachPlaneNormal, ::GlobalNamespace::SnapBounds  attachBounds, ::GlobalNamespace::SnapBounds  parentAttachBounds, uint8_t  twist, int8_t  bumpOffsetX, int8_t  bumpOffsetZ) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x64};

/// @brief Field pieceId, offset: 0x0, size: 0x4, def value: None
 int32_t  pieceId;

/// @brief Field parentPieceId, offset: 0x4, size: 0x4, def value: None
 int32_t  parentPieceId;

/// @brief Field score, offset: 0x8, size: 0x4, def value: None
 float_t  score;

/// @brief Field localPosition, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

/// @brief Field attachIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  attachIndex;

/// @brief Field parentAttachIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  parentAttachIndex;

/// @brief Field attachDistance, offset: 0x30, size: 0x4, def value: None
 float_t  attachDistance;

/// @brief Field attachPlaneNormal, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  attachPlaneNormal;

/// @brief Field attachBounds, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  attachBounds;

/// @brief Field parentAttachBounds, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  parentAttachBounds;

/// @brief Field twist, offset: 0x60, size: 0x1, def value: None
 uint8_t  twist;

/// @brief Field bumpOffsetX, offset: 0x61, size: 0x1, def value: None
 int8_t  bumpOffsetX;

/// @brief Field bumpOffsetZ, offset: 0x62, size: 0x1, def value: None
 int8_t  bumpOffsetZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, pieceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, parentPieceId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, score) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, localPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, localRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, attachIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, parentAttachIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, attachDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, attachPlaneNormal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, attachBounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, parentAttachBounds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, twist) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, bumpOffsetX) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPotentialPlacementData, bumpOffsetZ) == 0x62, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPotentialPlacementData) == 0x64, "Size mismatch!");

} // namespace end def GorillaTagScripts
