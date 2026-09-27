#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/GravityInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GravityInfo)
// Forward declare root types
namespace GorillaTag::Gravity {
struct GravityInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::Gravity::GravityInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::GravityInfo, "GorillaTag.Gravity", "GravityInfo");
// Dependencies UnityEngine.Vector3
namespace GorillaTag::Gravity {
// Is value type: true
// CS Name: GorillaTag.Gravity.GravityInfo
struct CORDL_TYPE GravityInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GravityInfo() ;

// Ctor Parameters [CppParam { name: "gravityUpDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravityStrength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotate", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GravityInfo(::UnityEngine::Vector3  gravityUpDirection, ::UnityEngine::Vector3  rotationDirection, float_t  rotationSpeed, float_t  gravityStrength, bool  rotate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field gravityUpDirection, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  gravityUpDirection;

/// @brief Field rotationDirection, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotationDirection;

/// @brief Field rotationSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  rotationSpeed;

/// @brief Field gravityStrength, offset: 0x1c, size: 0x4, def value: None
 float_t  gravityStrength;

/// @brief Field rotate, offset: 0x20, size: 0x1, def value: None
 bool  rotate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::GravityInfo, gravityUpDirection) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityInfo, rotationDirection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityInfo, rotationSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityInfo, gravityStrength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityInfo, rotate) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::GravityInfo) == 0x24, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
