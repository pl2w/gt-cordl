#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GliderWindVolumeProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GliderWindVolumeProperties)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct GliderWindVolumeProperties;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties, "GT_CustomMapSupportRuntime", "GliderWindVolumeProperties");
// Dependencies UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.GliderWindVolumeProperties
struct CORDL_TYPE GliderWindVolumeProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GliderWindVolumeProperties() ;

// Ctor Parameters [CppParam { name: "maxSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxAccel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "speedVsAccelCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "localWindDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GliderWindVolumeProperties(float_t  maxSpeed, float_t  maxAccel, ::UnityEngine::AnimationCurve*  speedVsAccelCurve, ::UnityEngine::Vector3  localWindDirection) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field maxSpeed, offset: 0x0, size: 0x4, def value: None
 float_t  maxSpeed;

/// @brief Field maxAccel, offset: 0x4, size: 0x4, def value: None
 float_t  maxAccel;

/// [Nullable(1)]
/// @brief Field speedVsAccelCurve, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  speedVsAccelCurve;

/// @brief Field localWindDirection, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  localWindDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties, maxSpeed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties, maxAccel) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties, speedVsAccelCurve) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties, localWindDirection) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::GliderWindVolumeProperties) == 0x20, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
