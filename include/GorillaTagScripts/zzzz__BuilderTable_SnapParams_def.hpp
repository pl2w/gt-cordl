#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_SnapParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BuilderTable_SnapParams)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_SnapParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_SnapParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_SnapParams, "GorillaTagScripts", "BuilderTable/SnapParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/SnapParams
struct CORDL_TYPE BuilderTable_SnapParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_SnapParams() ;

// Ctor Parameters [CppParam { name: "minOffsetY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxOffsetY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxUpDotProduct", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxTwistDotProduct", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "snapAttachDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "snapDelayTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "snapDelayOffsetDist", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "unSnapDelayTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "unSnapDelayDist", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxBlockSnapDist", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_SnapParams(float_t  minOffsetY, float_t  maxOffsetY, float_t  maxUpDotProduct, float_t  maxTwistDotProduct, float_t  snapAttachDistance, float_t  snapDelayTime, float_t  snapDelayOffsetDist, float_t  unSnapDelayTime, float_t  unSnapDelayDist, float_t  maxBlockSnapDist) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field minOffsetY, offset: 0x0, size: 0x4, def value: None
 float_t  minOffsetY;

/// @brief Field maxOffsetY, offset: 0x4, size: 0x4, def value: None
 float_t  maxOffsetY;

/// @brief Field maxUpDotProduct, offset: 0x8, size: 0x4, def value: None
 float_t  maxUpDotProduct;

/// @brief Field maxTwistDotProduct, offset: 0xc, size: 0x4, def value: None
 float_t  maxTwistDotProduct;

/// @brief Field snapAttachDistance, offset: 0x10, size: 0x4, def value: None
 float_t  snapAttachDistance;

/// @brief Field snapDelayTime, offset: 0x14, size: 0x4, def value: None
 float_t  snapDelayTime;

/// @brief Field snapDelayOffsetDist, offset: 0x18, size: 0x4, def value: None
 float_t  snapDelayOffsetDist;

/// @brief Field unSnapDelayTime, offset: 0x1c, size: 0x4, def value: None
 float_t  unSnapDelayTime;

/// @brief Field unSnapDelayDist, offset: 0x20, size: 0x4, def value: None
 float_t  unSnapDelayDist;

/// @brief Field maxBlockSnapDist, offset: 0x24, size: 0x4, def value: None
 float_t  maxBlockSnapDist;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, minOffsetY) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, maxOffsetY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, maxUpDotProduct) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, maxTwistDotProduct) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, snapAttachDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, snapDelayTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, snapDelayOffsetDist) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, unSnapDelayTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, unSnapDelayDist) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapParams, maxBlockSnapDist) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_SnapParams) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
