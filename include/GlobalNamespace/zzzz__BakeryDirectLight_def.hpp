#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryDirectLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryDirectLight)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryDirectLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryDirectLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryDirectLight*, "", "BakeryDirectLight");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Direct_Light")]
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryDirectLight
class CORDL_TYPE BakeryDirectLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UID, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_UID, put=__cordl_internal_set_UID)) int32_t  UID;

/// @brief Field bakeToIndirect, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_bakeToIndirect, put=__cordl_internal_set_bakeToIndirect)) bool  bakeToIndirect;

/// @brief Field bitmask, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitmask, put=__cordl_internal_set_bitmask)) int32_t  bitmask;

/// @brief Field cloudShadow, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudShadow, put=__cordl_internal_set_cloudShadow)) ::UnityW<::UnityEngine::Texture2D>  cloudShadow;

/// @brief Field cloudShadowOffsetX, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudShadowOffsetX, put=__cordl_internal_set_cloudShadowOffsetX)) float_t  cloudShadowOffsetX;

/// @brief Field cloudShadowOffsetY, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudShadowOffsetY, put=__cordl_internal_set_cloudShadowOffsetY)) float_t  cloudShadowOffsetY;

/// @brief Field cloudShadowTilingX, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudShadowTilingX, put=__cordl_internal_set_cloudShadowTilingX)) float_t  cloudShadowTilingX;

/// @brief Field cloudShadowTilingY, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudShadowTilingY, put=__cordl_internal_set_cloudShadowTilingY)) float_t  cloudShadowTilingY;

/// @brief Field color, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field indirectIntensity, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_indirectIntensity, put=__cordl_internal_set_indirectIntensity)) float_t  indirectIntensity;

/// @brief Field intensity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field lightsChanged, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lightsChanged, put=setStaticF_lightsChanged)) int32_t  lightsChanged;

/// @brief Field objShownError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_objShownError, put=setStaticF_objShownError)) ::UnityW<::UnityEngine::GameObject>  objShownError;

/// @brief Field samples, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) int32_t  samples;

/// @brief Field shadowSpread, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowSpread, put=__cordl_internal_set_shadowSpread)) float_t  shadowSpread;

/// @brief Field shadowmask, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_shadowmask, put=__cordl_internal_set_shadowmask)) bool  shadowmask;

/// @brief Field shadowmaskDenoise, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_shadowmaskDenoise, put=__cordl_internal_set_shadowmaskDenoise)) bool  shadowmaskDenoise;

/// @brief Field supersample, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_supersample, put=__cordl_internal_set_supersample)) bool  supersample;

static inline ::GlobalNamespace::BakeryDirectLight* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_UID() const;

constexpr int32_t& __cordl_internal_get_UID() ;

constexpr bool const& __cordl_internal_get_bakeToIndirect() const;

constexpr bool& __cordl_internal_get_bakeToIndirect() ;

constexpr int32_t const& __cordl_internal_get_bitmask() const;

constexpr int32_t& __cordl_internal_get_bitmask() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cloudShadow() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cloudShadow() ;

constexpr float_t const& __cordl_internal_get_cloudShadowOffsetX() const;

constexpr float_t& __cordl_internal_get_cloudShadowOffsetX() ;

constexpr float_t const& __cordl_internal_get_cloudShadowOffsetY() const;

constexpr float_t& __cordl_internal_get_cloudShadowOffsetY() ;

constexpr float_t const& __cordl_internal_get_cloudShadowTilingX() const;

constexpr float_t& __cordl_internal_get_cloudShadowTilingX() ;

constexpr float_t const& __cordl_internal_get_cloudShadowTilingY() const;

constexpr float_t& __cordl_internal_get_cloudShadowTilingY() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr float_t const& __cordl_internal_get_indirectIntensity() const;

constexpr float_t& __cordl_internal_get_indirectIntensity() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr int32_t const& __cordl_internal_get_samples() const;

constexpr int32_t& __cordl_internal_get_samples() ;

constexpr float_t const& __cordl_internal_get_shadowSpread() const;

constexpr float_t& __cordl_internal_get_shadowSpread() ;

constexpr bool const& __cordl_internal_get_shadowmask() const;

constexpr bool& __cordl_internal_get_shadowmask() ;

constexpr bool const& __cordl_internal_get_shadowmaskDenoise() const;

constexpr bool& __cordl_internal_get_shadowmaskDenoise() ;

constexpr bool const& __cordl_internal_get_supersample() const;

constexpr bool& __cordl_internal_get_supersample() ;

constexpr void __cordl_internal_set_UID(int32_t  value) ;

constexpr void __cordl_internal_set_bakeToIndirect(bool  value) ;

constexpr void __cordl_internal_set_bitmask(int32_t  value) ;

constexpr void __cordl_internal_set_cloudShadow(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_cloudShadowOffsetX(float_t  value) ;

constexpr void __cordl_internal_set_cloudShadowOffsetY(float_t  value) ;

constexpr void __cordl_internal_set_cloudShadowTilingX(float_t  value) ;

constexpr void __cordl_internal_set_cloudShadowTilingY(float_t  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_indirectIntensity(float_t  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_samples(int32_t  value) ;

constexpr void __cordl_internal_set_shadowSpread(float_t  value) ;

constexpr void __cordl_internal_set_shadowmask(bool  value) ;

constexpr void __cordl_internal_set_shadowmaskDenoise(bool  value) ;

constexpr void __cordl_internal_set_supersample(bool  value) ;

/// @brief Method .ctor, addr 0x5f27660, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_lightsChanged() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_objShownError() ;

static inline void setStaticF_lightsChanged(int32_t  value) ;

static inline void setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryDirectLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryDirectLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryDirectLight(BakeryDirectLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryDirectLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryDirectLight(BakeryDirectLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32429};

/// @brief Field color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field intensity, offset: 0x30, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field shadowSpread, offset: 0x34, size: 0x4, def value: None
 float_t  ___shadowSpread;

/// @brief Field samples, offset: 0x38, size: 0x4, def value: None
 int32_t  ___samples;

/// @brief Field bitmask, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___bitmask;

/// @brief Field bakeToIndirect, offset: 0x40, size: 0x1, def value: None
 bool  ___bakeToIndirect;

/// @brief Field shadowmask, offset: 0x41, size: 0x1, def value: None
 bool  ___shadowmask;

/// @brief Field shadowmaskDenoise, offset: 0x42, size: 0x1, def value: None
 bool  ___shadowmaskDenoise;

/// @brief Field indirectIntensity, offset: 0x44, size: 0x4, def value: None
 float_t  ___indirectIntensity;

/// @brief Field cloudShadow, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cloudShadow;

/// @brief Field cloudShadowTilingX, offset: 0x50, size: 0x4, def value: None
 float_t  ___cloudShadowTilingX;

/// @brief Field cloudShadowTilingY, offset: 0x54, size: 0x4, def value: None
 float_t  ___cloudShadowTilingY;

/// @brief Field cloudShadowOffsetX, offset: 0x58, size: 0x4, def value: None
 float_t  ___cloudShadowOffsetX;

/// @brief Field cloudShadowOffsetY, offset: 0x5c, size: 0x4, def value: None
 float_t  ___cloudShadowOffsetY;

/// @brief Field supersample, offset: 0x60, size: 0x1, def value: None
 bool  ___supersample;

/// @brief Field UID, offset: 0x64, size: 0x4, def value: None
 int32_t  ___UID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___shadowSpread) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___samples) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___bitmask) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___bakeToIndirect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___shadowmask) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___shadowmaskDenoise) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___indirectIntensity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___cloudShadow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___cloudShadowTilingX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___cloudShadowTilingY) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___cloudShadowOffsetX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___cloudShadowOffsetY) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___supersample) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryDirectLight, ___UID) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryDirectLight) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
