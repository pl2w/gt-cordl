#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TorusZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TorusZoneSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class TorusZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::TorusZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::TorusZoneSettings*, "GT_CustomMapSupportRuntime", "TorusZoneSettings");
// Dependencies GT_CustomMapSupportRuntime.BasicGravityZoneSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.TorusZoneSettings
class CORDL_TYPE TorusZoneSettings : public ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings {
public:
// Declarations
/// @brief Field alwaysRotate, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysRotate, put=__cordl_internal_set_alwaysRotate)) bool  alwaysRotate;

/// @brief Field majorRadius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_majorRadius, put=__cordl_internal_set_majorRadius)) float_t  majorRadius;

/// @brief Field rotationDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationDistance, put=__cordl_internal_set_rotationDistance)) float_t  rotationDistance;

static inline ::GT_CustomMapSupportRuntime::TorusZoneSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_alwaysRotate() const;

constexpr bool& __cordl_internal_get_alwaysRotate() ;

constexpr float_t const& __cordl_internal_get_majorRadius() const;

constexpr float_t& __cordl_internal_get_majorRadius() ;

constexpr float_t const& __cordl_internal_get_rotationDistance() const;

constexpr float_t& __cordl_internal_get_rotationDistance() ;

constexpr void __cordl_internal_set_alwaysRotate(bool  value) ;

constexpr void __cordl_internal_set_majorRadius(float_t  value) ;

constexpr void __cordl_internal_set_rotationDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x9cb8d64, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TorusZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TorusZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TorusZoneSettings(TorusZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TorusZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TorusZoneSettings(TorusZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30933};

/// [Tooltip("Major radius of the torus (distance from torus center to the centerline of the tube). Torus axis is transform.up.")]
/// @brief Field majorRadius, offset: 0x38, size: 0x4, def value: None
 float_t  ___majorRadius;

/// [Tooltip("how close to the central ring of the torus to enable rotating the player")]
/// @brief Field rotationDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___rotationDistance;

/// [Tooltip("if enabled, always rotates the player")]
/// @brief Field alwaysRotate, offset: 0x40, size: 0x1, def value: None
 bool  ___alwaysRotate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::TorusZoneSettings, ___majorRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TorusZoneSettings, ___rotationDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TorusZoneSettings, ___alwaysRotate) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::TorusZoneSettings) == 0x48, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
