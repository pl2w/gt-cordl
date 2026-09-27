#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CubicPlanetZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__PlanetZoneSettings_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CubicPlanetZoneSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class CubicPlanetZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*, "GT_CustomMapSupportRuntime", "CubicPlanetZoneSettings");
// Dependencies GT_CustomMapSupportRuntime.PlanetZoneSettings, UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.CubicPlanetZoneSettings
class CORDL_TYPE CubicPlanetZoneSettings : public ::GT_CustomMapSupportRuntime::PlanetZoneSettings {
public:
// Declarations
/// @brief Field constraints, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_constraints, put=__cordl_internal_set_constraints)) ::UnityEngine::Vector3  constraints;

static inline ::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_constraints() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_constraints() ;

constexpr void __cordl_internal_set_constraints(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9cb6bb4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CubicPlanetZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CubicPlanetZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CubicPlanetZoneSettings(CubicPlanetZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CubicPlanetZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CubicPlanetZoneSettings(CubicPlanetZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30891};

/// [Header("box constraint for where gravity center can be")]
/// [SerializeField]
/// @brief Field constraints, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___constraints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings, ___constraints) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings) == 0x58, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
