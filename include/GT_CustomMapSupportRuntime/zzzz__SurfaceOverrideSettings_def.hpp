#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SurfaceOverrideSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceSoundOverride_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SurfaceOverrideSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class SurfaceOverrideSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings*, "GT_CustomMapSupportRuntime", "SurfaceOverrideSettings");
// [DisallowMultipleComponent]
// Dependencies GT_CustomMapSupportRuntime.SurfaceSoundOverride, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.SurfaceOverrideSettings
class CORDL_TYPE SurfaceOverrideSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field disablePushBackEffect, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_disablePushBackEffect, put=__cordl_internal_set_disablePushBackEffect)) bool  disablePushBackEffect;

/// @brief Field extraVelMaxMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_extraVelMaxMultiplier, put=__cordl_internal_set_extraVelMaxMultiplier)) float_t  extraVelMaxMultiplier;

/// @brief Field extraVelMultiplier, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_extraVelMultiplier, put=__cordl_internal_set_extraVelMultiplier)) float_t  extraVelMultiplier;

/// @brief Field slidePercentage, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slidePercentage, put=__cordl_internal_set_slidePercentage)) float_t  slidePercentage;

/// @brief Field soundOverride, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundOverride, put=__cordl_internal_set_soundOverride)) ::GT_CustomMapSupportRuntime::SurfaceSoundOverride  soundOverride;

static inline ::GT_CustomMapSupportRuntime::SurfaceOverrideSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_disablePushBackEffect() const;

constexpr bool& __cordl_internal_get_disablePushBackEffect() ;

constexpr float_t const& __cordl_internal_get_extraVelMaxMultiplier() const;

constexpr float_t& __cordl_internal_get_extraVelMaxMultiplier() ;

constexpr float_t const& __cordl_internal_get_extraVelMultiplier() const;

constexpr float_t& __cordl_internal_get_extraVelMultiplier() ;

constexpr float_t const& __cordl_internal_get_slidePercentage() const;

constexpr float_t& __cordl_internal_get_slidePercentage() ;

constexpr ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const& __cordl_internal_get_soundOverride() const;

constexpr ::GT_CustomMapSupportRuntime::SurfaceSoundOverride& __cordl_internal_get_soundOverride() ;

constexpr void __cordl_internal_set_disablePushBackEffect(bool  value) ;

constexpr void __cordl_internal_set_extraVelMaxMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_extraVelMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_slidePercentage(float_t  value) ;

constexpr void __cordl_internal_set_soundOverride(::GT_CustomMapSupportRuntime::SurfaceSoundOverride  value) ;

/// @brief Method .ctor, addr 0x9cb8c30, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceOverrideSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceOverrideSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceOverrideSettings(SurfaceOverrideSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceOverrideSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceOverrideSettings(SurfaceOverrideSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30930};

/// @brief Field soundOverride, offset: 0x20, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::SurfaceSoundOverride  ___soundOverride;

/// @brief Field extraVelMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  ___extraVelMultiplier;

/// @brief Field extraVelMaxMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___extraVelMaxMultiplier;

/// [Tooltip("-1.0 represents the default value, valid values are between 0.0 and 1.0")]
/// @brief Field slidePercentage, offset: 0x2c, size: 0x4, def value: None
 float_t  ___slidePercentage;

/// [Tooltip("If TRUE, players won\'t be pushed away when tapping on the object")]
/// @brief Field disablePushBackEffect, offset: 0x30, size: 0x1, def value: None
 bool  ___disablePushBackEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings, ___soundOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings, ___extraVelMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings, ___extraVelMaxMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings, ___slidePercentage) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings, ___disablePushBackEffect) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::SurfaceOverrideSettings) == 0x38, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
