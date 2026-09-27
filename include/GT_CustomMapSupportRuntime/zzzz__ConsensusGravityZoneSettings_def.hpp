#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ConsensusGravityZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConsensusGravityZoneSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class ConsensusGravityZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*, "GT_CustomMapSupportRuntime", "ConsensusGravityZoneSettings");
// Dependencies GT_CustomMapSupportRuntime.BasicGravityZoneSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.ConsensusGravityZoneSettings
class CORDL_TYPE ConsensusGravityZoneSettings : public ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings {
public:
// Declarations
/// @brief Field centeringForce, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_centeringForce, put=__cordl_internal_set_centeringForce)) float_t  centeringForce;

/// @brief Field drag, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field rotMax, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotMax, put=__cordl_internal_set_rotMax)) float_t  rotMax;

/// @brief Field rotMin, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotMin, put=__cordl_internal_set_rotMin)) float_t  rotMin;

/// @brief Field weightForce, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_weightForce, put=__cordl_internal_set_weightForce)) float_t  weightForce;

static inline ::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_centeringForce() const;

constexpr float_t& __cordl_internal_get_centeringForce() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_rotMax() const;

constexpr float_t& __cordl_internal_get_rotMax() ;

constexpr float_t const& __cordl_internal_get_rotMin() const;

constexpr float_t& __cordl_internal_get_rotMin() ;

constexpr float_t const& __cordl_internal_get_weightForce() const;

constexpr float_t& __cordl_internal_get_weightForce() ;

constexpr void __cordl_internal_set_centeringForce(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_rotMax(float_t  value) ;

constexpr void __cordl_internal_set_rotMin(float_t  value) ;

constexpr void __cordl_internal_set_weightForce(float_t  value) ;

/// @brief Method .ctor, addr 0x9cb3d38, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsensusGravityZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsensusGravityZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsensusGravityZoneSettings(ConsensusGravityZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsensusGravityZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsensusGravityZoneSettings(ConsensusGravityZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30888};

/// [SerializeField]
/// @brief Field weightForce, offset: 0x38, size: 0x4, def value: None
 float_t  ___weightForce;

/// [SerializeField]
/// @brief Field centeringForce, offset: 0x3c, size: 0x4, def value: None
 float_t  ___centeringForce;

/// [SerializeField]
/// @brief Field drag, offset: 0x40, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field rotMin, offset: 0x44, size: 0x4, def value: None
 float_t  ___rotMin;

/// [SerializeField]
/// @brief Field rotMax, offset: 0x48, size: 0x4, def value: None
 float_t  ___rotMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings, ___weightForce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings, ___centeringForce) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings, ___drag) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings, ___rotMin) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings, ___rotMax) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings) == 0x50, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
