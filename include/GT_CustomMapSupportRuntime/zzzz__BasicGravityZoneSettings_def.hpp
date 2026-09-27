#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/BasicGravityZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_GravityZoneRule_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_GravityZoneScaleFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGravityZoneSettings)
namespace GlobalNamespace {
struct BasicGravityZoneSettings_GravityZoneRule;
}
namespace GlobalNamespace {
struct BasicGravityZoneSettings_GravityZoneScaleFilter;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class BasicGravityZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*, "GT_CustomMapSupportRuntime", "BasicGravityZoneSettings");
// Dependencies GT_CustomMapSupportRuntime.BasicGravityZoneSettings::GravityZoneRule, GT_CustomMapSupportRuntime.BasicGravityZoneSettings::GravityZoneScaleFilter, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.BasicGravityZoneSettings
class CORDL_TYPE BasicGravityZoneSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GravityZoneRule = ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule;

using GravityZoneScaleFilter = ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter;

/// @brief Field authorityLevel, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_authorityLevel, put=__cordl_internal_set_authorityLevel)) int32_t  authorityLevel;

/// @brief Field gravityRule, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityRule, put=__cordl_internal_set_gravityRule)) ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule  gravityRule;

/// @brief Field gravityStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityStrength, put=__cordl_internal_set_gravityStrength)) float_t  gravityStrength;

/// @brief Field invertRotationDirection, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertRotationDirection, put=__cordl_internal_set_invertRotationDirection)) bool  invertRotationDirection;

/// @brief Field rotateTarget, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotateTarget, put=__cordl_internal_set_rotateTarget)) bool  rotateTarget;

/// @brief Field rotationSpeedOverride, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeedOverride, put=__cordl_internal_set_rotationSpeedOverride)) float_t  rotationSpeedOverride;

/// @brief Field scaleFilter, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleFilter, put=__cordl_internal_set_scaleFilter)) ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter  scaleFilter;

/// @brief Field useRotationSpeedOverride, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRotationSpeedOverride, put=__cordl_internal_set_useRotationSpeedOverride)) bool  useRotationSpeedOverride;

static inline ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_authorityLevel() const;

constexpr int32_t& __cordl_internal_get_authorityLevel() ;

constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule const& __cordl_internal_get_gravityRule() const;

constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule& __cordl_internal_get_gravityRule() ;

constexpr float_t const& __cordl_internal_get_gravityStrength() const;

constexpr float_t& __cordl_internal_get_gravityStrength() ;

constexpr bool const& __cordl_internal_get_invertRotationDirection() const;

constexpr bool& __cordl_internal_get_invertRotationDirection() ;

constexpr bool const& __cordl_internal_get_rotateTarget() const;

constexpr bool& __cordl_internal_get_rotateTarget() ;

constexpr float_t const& __cordl_internal_get_rotationSpeedOverride() const;

constexpr float_t& __cordl_internal_get_rotationSpeedOverride() ;

constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter const& __cordl_internal_get_scaleFilter() const;

constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter& __cordl_internal_get_scaleFilter() ;

constexpr bool const& __cordl_internal_get_useRotationSpeedOverride() const;

constexpr bool& __cordl_internal_get_useRotationSpeedOverride() ;

constexpr void __cordl_internal_set_authorityLevel(int32_t  value) ;

constexpr void __cordl_internal_set_gravityRule(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule  value) ;

constexpr void __cordl_internal_set_gravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_invertRotationDirection(bool  value) ;

constexpr void __cordl_internal_set_rotateTarget(bool  value) ;

constexpr void __cordl_internal_set_rotationSpeedOverride(float_t  value) ;

constexpr void __cordl_internal_set_scaleFilter(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter  value) ;

constexpr void __cordl_internal_set_useRotationSpeedOverride(bool  value) ;

/// @brief Method .ctor, addr 0x9cb185c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicGravityZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicGravityZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicGravityZoneSettings(BasicGravityZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicGravityZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicGravityZoneSettings(BasicGravityZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30880};

/// [Header("Gravity Settings")]
/// [Tooltip("negative number pulls, positive number pushes")]
/// @brief Field gravityStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ___gravityStrength;

/// [Tooltip("Filter which players are affected based on scale. Small = scale < 1")]
/// @brief Field scaleFilter, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter  ___scaleFilter;

/// [Tooltip("- Newest: Only in effect when this is the newest zone entered by the physics object. \n\n- Closest: if this gravity zone is the closest, then it will have effect. \n\n- Additive:  always in effect when a physics object is inside.")]
/// @brief Field gravityRule, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule  ___gravityRule;

/// [Tooltip("The gravity zone with the highest authority will cause gravity zones with a lower authority level to be ignored. Gravity zones with the same authority level will follow the Gravity Rule setting.")]
/// @brief Field authorityLevel, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___authorityLevel;

/// [Header("Rotation Settings")]
/// [Tooltip("If enabled, rotates the target away from gravity direction to be upside down")]
/// @brief Field invertRotationDirection, offset: 0x30, size: 0x1, def value: None
 bool  ___invertRotationDirection;

/// @brief Field rotateTarget, offset: 0x31, size: 0x1, def value: None
 bool  ___rotateTarget;

/// @brief Field useRotationSpeedOverride, offset: 0x32, size: 0x1, def value: None
 bool  ___useRotationSpeedOverride;

/// @brief Field rotationSpeedOverride, offset: 0x34, size: 0x4, def value: None
 float_t  ___rotationSpeedOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___gravityStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___scaleFilter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___gravityRule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___authorityLevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___invertRotationDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___rotateTarget) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___useRotationSpeedOverride) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings, ___rotationSpeedOverride) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings) == 0x38, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
