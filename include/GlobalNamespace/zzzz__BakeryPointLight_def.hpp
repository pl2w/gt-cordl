#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryPointLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BakeryPointLight_Direction_def.hpp"
#include "GlobalNamespace/zzzz__BakeryPointLight_ftLightProjectionMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryPointLight)
namespace GlobalNamespace {
struct BakeryPointLight_Direction;
}
namespace GlobalNamespace {
struct BakeryPointLight_ftLightProjectionMode;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryPointLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryPointLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryPointLight*, "", "BakeryPointLight");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Point_Light")]
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// Dependencies BakeryPointLight::Direction, BakeryPointLight::ftLightProjectionMode, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryPointLight
class CORDL_TYPE BakeryPointLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Direction = ::GlobalNamespace::BakeryPointLight_Direction;

using ftLightProjectionMode = ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode;

/// @brief Field UID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_UID, put=__cordl_internal_set_UID)) int32_t  UID;

/// @brief Field angle, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field bakeToIndirect, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_bakeToIndirect, put=__cordl_internal_set_bakeToIndirect)) bool  bakeToIndirect;

/// @brief Field bitmask, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitmask, put=__cordl_internal_set_bitmask)) int32_t  bitmask;

/// @brief Field color, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field cookie, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookie, put=__cordl_internal_set_cookie)) ::UnityW<::UnityEngine::Texture2D>  cookie;

/// @brief Field correctCookieDistortion, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_correctCookieDistortion, put=__cordl_internal_set_correctCookieDistortion)) bool  correctCookieDistortion;

/// @brief Field cubemap, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cubemap, put=__cordl_internal_set_cubemap)) ::UnityW<::UnityEngine::Cubemap>  cubemap;

/// @brief Field cutoff, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cutoff, put=__cordl_internal_set_cutoff)) float_t  cutoff;

/// @brief Field directionMode, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_directionMode, put=__cordl_internal_set_directionMode)) ::GlobalNamespace::BakeryPointLight_Direction  directionMode;

/// @brief Field falloffMinRadius, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_falloffMinRadius, put=__cordl_internal_set_falloffMinRadius)) float_t  falloffMinRadius;

/// @brief Field iesFile, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_iesFile, put=__cordl_internal_set_iesFile)) ::UnityW<::UnityEngine::Object>  iesFile;

/// @brief Field indirectIntensity, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_indirectIntensity, put=__cordl_internal_set_indirectIntensity)) float_t  indirectIntensity;

/// @brief Field innerAngle, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_innerAngle, put=__cordl_internal_set_innerAngle)) float_t  innerAngle;

/// @brief Field intensity, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field legacySampling, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_legacySampling, put=__cordl_internal_set_legacySampling)) bool  legacySampling;

/// @brief Field lightsChanged, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lightsChanged, put=setStaticF_lightsChanged)) int32_t  lightsChanged;

/// @brief Field maskChannel, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maskChannel, put=__cordl_internal_set_maskChannel)) int32_t  maskChannel;

/// @brief Field objShownError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_objShownError, put=setStaticF_objShownError)) ::UnityW<::UnityEngine::GameObject>  objShownError;

/// @brief Field projMode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_projMode, put=__cordl_internal_set_projMode)) ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode  projMode;

/// @brief Field realisticFalloff, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_realisticFalloff, put=__cordl_internal_set_realisticFalloff)) bool  realisticFalloff;

/// @brief Field samples, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) int32_t  samples;

/// @brief Field shadowSpread, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowSpread, put=__cordl_internal_set_shadowSpread)) float_t  shadowSpread;

/// @brief Field shadowmask, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get_shadowmask, put=__cordl_internal_set_shadowmask)) bool  shadowmask;

/// @brief Field shadowmaskFalloff, offset 0x76, size 0x1 
 __declspec(property(get=__cordl_internal_get_shadowmaskFalloff, put=__cordl_internal_set_shadowmaskFalloff)) bool  shadowmaskFalloff;

/// @brief Field shadowmaskGroupID, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowmaskGroupID, put=__cordl_internal_set_shadowmaskGroupID)) int32_t  shadowmaskGroupID;

static inline ::GlobalNamespace::BakeryPointLight* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_UID() const;

constexpr int32_t& __cordl_internal_get_UID() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr bool const& __cordl_internal_get_bakeToIndirect() const;

constexpr bool& __cordl_internal_get_bakeToIndirect() ;

constexpr int32_t const& __cordl_internal_get_bitmask() const;

constexpr int32_t& __cordl_internal_get_bitmask() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cookie() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cookie() ;

constexpr bool const& __cordl_internal_get_correctCookieDistortion() const;

constexpr bool& __cordl_internal_get_correctCookieDistortion() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_cubemap() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_cubemap() ;

constexpr float_t const& __cordl_internal_get_cutoff() const;

constexpr float_t& __cordl_internal_get_cutoff() ;

constexpr ::GlobalNamespace::BakeryPointLight_Direction const& __cordl_internal_get_directionMode() const;

constexpr ::GlobalNamespace::BakeryPointLight_Direction& __cordl_internal_get_directionMode() ;

constexpr float_t const& __cordl_internal_get_falloffMinRadius() const;

constexpr float_t& __cordl_internal_get_falloffMinRadius() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_iesFile() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_iesFile() ;

constexpr float_t const& __cordl_internal_get_indirectIntensity() const;

constexpr float_t& __cordl_internal_get_indirectIntensity() ;

constexpr float_t const& __cordl_internal_get_innerAngle() const;

constexpr float_t& __cordl_internal_get_innerAngle() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr bool const& __cordl_internal_get_legacySampling() const;

constexpr bool& __cordl_internal_get_legacySampling() ;

constexpr int32_t const& __cordl_internal_get_maskChannel() const;

constexpr int32_t& __cordl_internal_get_maskChannel() ;

constexpr ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const& __cordl_internal_get_projMode() const;

constexpr ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode& __cordl_internal_get_projMode() ;

constexpr bool const& __cordl_internal_get_realisticFalloff() const;

constexpr bool& __cordl_internal_get_realisticFalloff() ;

constexpr int32_t const& __cordl_internal_get_samples() const;

constexpr int32_t& __cordl_internal_get_samples() ;

constexpr float_t const& __cordl_internal_get_shadowSpread() const;

constexpr float_t& __cordl_internal_get_shadowSpread() ;

constexpr bool const& __cordl_internal_get_shadowmask() const;

constexpr bool& __cordl_internal_get_shadowmask() ;

constexpr bool const& __cordl_internal_get_shadowmaskFalloff() const;

constexpr bool& __cordl_internal_get_shadowmaskFalloff() ;

constexpr int32_t const& __cordl_internal_get_shadowmaskGroupID() const;

constexpr int32_t& __cordl_internal_get_shadowmaskGroupID() ;

constexpr void __cordl_internal_set_UID(int32_t  value) ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_bakeToIndirect(bool  value) ;

constexpr void __cordl_internal_set_bitmask(int32_t  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_cookie(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_correctCookieDistortion(bool  value) ;

constexpr void __cordl_internal_set_cubemap(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_cutoff(float_t  value) ;

constexpr void __cordl_internal_set_directionMode(::GlobalNamespace::BakeryPointLight_Direction  value) ;

constexpr void __cordl_internal_set_falloffMinRadius(float_t  value) ;

constexpr void __cordl_internal_set_iesFile(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_indirectIntensity(float_t  value) ;

constexpr void __cordl_internal_set_innerAngle(float_t  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_legacySampling(bool  value) ;

constexpr void __cordl_internal_set_maskChannel(int32_t  value) ;

constexpr void __cordl_internal_set_projMode(::GlobalNamespace::BakeryPointLight_ftLightProjectionMode  value) ;

constexpr void __cordl_internal_set_realisticFalloff(bool  value) ;

constexpr void __cordl_internal_set_samples(int32_t  value) ;

constexpr void __cordl_internal_set_shadowSpread(float_t  value) ;

constexpr void __cordl_internal_set_shadowmask(bool  value) ;

constexpr void __cordl_internal_set_shadowmaskFalloff(bool  value) ;

constexpr void __cordl_internal_set_shadowmaskGroupID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f279d4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_lightsChanged() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_objShownError() ;

static inline void setStaticF_lightsChanged(int32_t  value) ;

static inline void setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryPointLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryPointLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryPointLight(BakeryPointLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryPointLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryPointLight(BakeryPointLight const& ) = delete;

/// @brief Field GIZMO_MAXSIZE offset 0xffffffff size 0x4
static constexpr float_t  GIZMO_MAXSIZE{static_cast<float_t>(0.1f)};

/// @brief Field GIZMO_SCALE offset 0xffffffff size 0x4
static constexpr float_t  GIZMO_SCALE{static_cast<float_t>(0.01f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32444};

/// @brief Field UID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___UID;

/// @brief Field color, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field intensity, offset: 0x34, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field shadowSpread, offset: 0x38, size: 0x4, def value: None
 float_t  ___shadowSpread;

/// @brief Field cutoff, offset: 0x3c, size: 0x4, def value: None
 float_t  ___cutoff;

/// @brief Field realisticFalloff, offset: 0x40, size: 0x1, def value: None
 bool  ___realisticFalloff;

/// @brief Field legacySampling, offset: 0x41, size: 0x1, def value: None
 bool  ___legacySampling;

/// @brief Field samples, offset: 0x44, size: 0x4, def value: None
 int32_t  ___samples;

/// @brief Field projMode, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode  ___projMode;

/// @brief Field cookie, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cookie;

/// @brief Field angle, offset: 0x58, size: 0x4, def value: None
 float_t  ___angle;

/// @brief Field innerAngle, offset: 0x5c, size: 0x4, def value: None
 float_t  ___innerAngle;

/// @brief Field cubemap, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___cubemap;

/// @brief Field iesFile, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___iesFile;

/// @brief Field bitmask, offset: 0x70, size: 0x4, def value: None
 int32_t  ___bitmask;

/// @brief Field bakeToIndirect, offset: 0x74, size: 0x1, def value: None
 bool  ___bakeToIndirect;

/// @brief Field shadowmask, offset: 0x75, size: 0x1, def value: None
 bool  ___shadowmask;

/// @brief Field shadowmaskFalloff, offset: 0x76, size: 0x1, def value: None
 bool  ___shadowmaskFalloff;

/// @brief Field indirectIntensity, offset: 0x78, size: 0x4, def value: None
 float_t  ___indirectIntensity;

/// @brief Field falloffMinRadius, offset: 0x7c, size: 0x4, def value: None
 float_t  ___falloffMinRadius;

/// @brief Field shadowmaskGroupID, offset: 0x80, size: 0x4, def value: None
 int32_t  ___shadowmaskGroupID;

/// @brief Field correctCookieDistortion, offset: 0x84, size: 0x1, def value: None
 bool  ___correctCookieDistortion;

/// @brief Field directionMode, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::BakeryPointLight_Direction  ___directionMode;

/// @brief Field maskChannel, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___maskChannel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___UID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___color) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___intensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___shadowSpread) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___cutoff) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___realisticFalloff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___legacySampling) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___samples) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___projMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___cookie) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___angle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___innerAngle) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___cubemap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___iesFile) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___bitmask) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___bakeToIndirect) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___shadowmask) == 0x75, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___shadowmaskFalloff) == 0x76, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___indirectIntensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___falloffMinRadius) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___shadowmaskGroupID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___correctCookieDistortion) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___directionMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryPointLight, ___maskChannel) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryPointLight) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
