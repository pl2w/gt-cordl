#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightMesh)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryLightMesh;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryLightMesh*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightMesh*, "", "BakeryLightMesh");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Light_Mesh")]
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryLightMesh
class CORDL_TYPE BakeryLightMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_UID, put=__cordl_internal_set_UID)) int32_t  UID;

/// @brief Field bakeToIndirect, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_bakeToIndirect, put=__cordl_internal_set_bakeToIndirect)) bool  bakeToIndirect;

/// @brief Field bitmask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitmask, put=__cordl_internal_set_bitmask)) int32_t  bitmask;

/// @brief Field color, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field cutoff, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_cutoff, put=__cordl_internal_set_cutoff)) float_t  cutoff;

/// @brief Field indirectIntensity, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_indirectIntensity, put=__cordl_internal_set_indirectIntensity)) float_t  indirectIntensity;

/// @brief Field intensity, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field lightsChanged, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lightsChanged, put=setStaticF_lightsChanged)) int32_t  lightsChanged;

/// @brief Field lmid, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lmid, put=__cordl_internal_set_lmid)) int32_t  lmid;

/// @brief Field maskChannel, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maskChannel, put=__cordl_internal_set_maskChannel)) int32_t  maskChannel;

/// @brief Field objShownError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_objShownError, put=setStaticF_objShownError)) ::UnityW<::UnityEngine::GameObject>  objShownError;

/// @brief Field samples, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) int32_t  samples;

/// @brief Field samples2, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples2, put=__cordl_internal_set_samples2)) int32_t  samples2;

/// @brief Field samples2_previous, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples2_previous, put=__cordl_internal_set_samples2_previous)) int32_t  samples2_previous;

/// @brief Field selfShadow, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_selfShadow, put=__cordl_internal_set_selfShadow)) bool  selfShadow;

/// @brief Field shadowmask, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_shadowmask, put=__cordl_internal_set_shadowmask)) bool  shadowmask;

/// @brief Field shadowmaskFalloff, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_shadowmaskFalloff, put=__cordl_internal_set_shadowmaskFalloff)) bool  shadowmaskFalloff;

/// @brief Field texture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

static inline ::GlobalNamespace::BakeryLightMesh* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5f278a0, size 0xec, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr int32_t const& __cordl_internal_get_UID() const;

constexpr int32_t& __cordl_internal_get_UID() ;

constexpr bool const& __cordl_internal_get_bakeToIndirect() const;

constexpr bool& __cordl_internal_get_bakeToIndirect() ;

constexpr int32_t const& __cordl_internal_get_bitmask() const;

constexpr int32_t& __cordl_internal_get_bitmask() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr float_t const& __cordl_internal_get_cutoff() const;

constexpr float_t& __cordl_internal_get_cutoff() ;

constexpr float_t const& __cordl_internal_get_indirectIntensity() const;

constexpr float_t& __cordl_internal_get_indirectIntensity() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr int32_t const& __cordl_internal_get_lmid() const;

constexpr int32_t& __cordl_internal_get_lmid() ;

constexpr int32_t const& __cordl_internal_get_maskChannel() const;

constexpr int32_t& __cordl_internal_get_maskChannel() ;

constexpr int32_t const& __cordl_internal_get_samples() const;

constexpr int32_t& __cordl_internal_get_samples() ;

constexpr int32_t const& __cordl_internal_get_samples2() const;

constexpr int32_t& __cordl_internal_get_samples2() ;

constexpr int32_t const& __cordl_internal_get_samples2_previous() const;

constexpr int32_t& __cordl_internal_get_samples2_previous() ;

constexpr bool const& __cordl_internal_get_selfShadow() const;

constexpr bool& __cordl_internal_get_selfShadow() ;

constexpr bool const& __cordl_internal_get_shadowmask() const;

constexpr bool& __cordl_internal_get_shadowmask() ;

constexpr bool const& __cordl_internal_get_shadowmaskFalloff() const;

constexpr bool& __cordl_internal_get_shadowmaskFalloff() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr void __cordl_internal_set_UID(int32_t  value) ;

constexpr void __cordl_internal_set_bakeToIndirect(bool  value) ;

constexpr void __cordl_internal_set_bitmask(int32_t  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_cutoff(float_t  value) ;

constexpr void __cordl_internal_set_indirectIntensity(float_t  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_lmid(int32_t  value) ;

constexpr void __cordl_internal_set_maskChannel(int32_t  value) ;

constexpr void __cordl_internal_set_samples(int32_t  value) ;

constexpr void __cordl_internal_set_samples2(int32_t  value) ;

constexpr void __cordl_internal_set_samples2_previous(int32_t  value) ;

constexpr void __cordl_internal_set_selfShadow(bool  value) ;

constexpr void __cordl_internal_set_shadowmask(bool  value) ;

constexpr void __cordl_internal_set_shadowmaskFalloff(bool  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x5f2798c, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_lightsChanged() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_objShownError() ;

static inline void setStaticF_lightsChanged(int32_t  value) ;

static inline void setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryLightMesh(BakeryLightMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryLightMesh(BakeryLightMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32440};

/// @brief Field UID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___UID;

/// @brief Field color, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field intensity, offset: 0x34, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field texture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field cutoff, offset: 0x40, size: 0x4, def value: None
 float_t  ___cutoff;

/// @brief Field samples, offset: 0x44, size: 0x4, def value: None
 int32_t  ___samples;

/// @brief Field samples2, offset: 0x48, size: 0x4, def value: None
 int32_t  ___samples2;

/// @brief Field samples2_previous, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___samples2_previous;

/// @brief Field bitmask, offset: 0x50, size: 0x4, def value: None
 int32_t  ___bitmask;

/// @brief Field selfShadow, offset: 0x54, size: 0x1, def value: None
 bool  ___selfShadow;

/// @brief Field bakeToIndirect, offset: 0x55, size: 0x1, def value: None
 bool  ___bakeToIndirect;

/// @brief Field shadowmask, offset: 0x56, size: 0x1, def value: None
 bool  ___shadowmask;

/// @brief Field indirectIntensity, offset: 0x58, size: 0x4, def value: None
 float_t  ___indirectIntensity;

/// @brief Field shadowmaskFalloff, offset: 0x5c, size: 0x1, def value: None
 bool  ___shadowmaskFalloff;

/// @brief Field maskChannel, offset: 0x60, size: 0x4, def value: None
 int32_t  ___maskChannel;

/// @brief Field lmid, offset: 0x64, size: 0x4, def value: None
 int32_t  ___lmid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___UID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___color) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___intensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___texture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___cutoff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___samples) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___samples2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___samples2_previous) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___bitmask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___selfShadow) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___bakeToIndirect) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___shadowmask) == 0x56, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___indirectIntensity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___shadowmaskFalloff) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___maskChannel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightMesh, ___lmid) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightMesh) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
