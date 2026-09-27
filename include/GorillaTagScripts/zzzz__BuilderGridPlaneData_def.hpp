#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderGridPlaneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderGridPlaneData)
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderGridPlaneData;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderGridPlaneData);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderGridPlaneData, "GorillaTagScripts", "BuilderGridPlaneData");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderGridPlaneData
struct CORDL_TYPE BuilderGridPlaneData {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ba9d08, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane, int32_t  pieceIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderGridPlaneData() ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "male", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "boundingRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr BuilderGridPlaneData(int32_t  width, int32_t  length, bool  male, int32_t  pieceId, int32_t  pieceIndex, float_t  boundingRadius, int32_t  attachIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field width, offset: 0x0, size: 0x4, def value: None
 int32_t  width;

/// @brief Field length, offset: 0x4, size: 0x4, def value: None
 int32_t  length;

/// @brief Field male, offset: 0x8, size: 0x1, def value: None
 bool  male;

/// @brief Field pieceId, offset: 0xc, size: 0x4, def value: None
 int32_t  pieceId;

/// @brief Field pieceIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  pieceIndex;

/// @brief Field boundingRadius, offset: 0x14, size: 0x4, def value: None
 float_t  boundingRadius;

/// @brief Field attachIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  attachIndex;

/// @brief Field position, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field localPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, male) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, pieceId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, pieceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, boundingRadius) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, attachIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, position) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, rotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, localPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderGridPlaneData, localRotation) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderGridPlaneData) == 0x54, "Size mismatch!");

} // namespace end def GorillaTagScripts
