#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySkyLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakerySkyLight)
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BakerySkyLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakerySkyLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakerySkyLight*, "", "BakerySkyLight");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Sky_Light")]
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakerySkyLight
class CORDL_TYPE BakerySkyLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UID, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_UID, put=__cordl_internal_set_UID)) int32_t  UID;

/// @brief Field bakeToIndirect, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_bakeToIndirect, put=__cordl_internal_set_bakeToIndirect)) bool  bakeToIndirect;

/// @brief Field bitmask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitmask, put=__cordl_internal_set_bitmask)) int32_t  bitmask;

/// @brief Field color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field correctRotation, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_correctRotation, put=__cordl_internal_set_correctRotation)) bool  correctRotation;

/// @brief Field cubemap, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cubemap, put=__cordl_internal_set_cubemap)) ::UnityW<::UnityEngine::Cubemap>  cubemap;

/// @brief Field hemispherical, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hemispherical, put=__cordl_internal_set_hemispherical)) bool  hemispherical;

/// @brief Field indirectIntensity, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_indirectIntensity, put=__cordl_internal_set_indirectIntensity)) float_t  indirectIntensity;

/// @brief Field intensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field lightsChanged, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lightsChanged, put=setStaticF_lightsChanged)) int32_t  lightsChanged;

/// @brief Field objShownError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_objShownError, put=setStaticF_objShownError)) ::UnityW<::UnityEngine::GameObject>  objShownError;

/// @brief Field samples, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) int32_t  samples;

/// @brief Field tangentSH, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_tangentSH, put=__cordl_internal_set_tangentSH)) bool  tangentSH;

/// @brief Field texName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_texName, put=__cordl_internal_set_texName)) ::StringW  texName;

static inline ::GlobalNamespace::BakerySkyLight* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_UID() const;

constexpr int32_t& __cordl_internal_get_UID() ;

constexpr bool const& __cordl_internal_get_bakeToIndirect() const;

constexpr bool& __cordl_internal_get_bakeToIndirect() ;

constexpr int32_t const& __cordl_internal_get_bitmask() const;

constexpr int32_t& __cordl_internal_get_bitmask() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr bool const& __cordl_internal_get_correctRotation() const;

constexpr bool& __cordl_internal_get_correctRotation() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_cubemap() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_cubemap() ;

constexpr bool const& __cordl_internal_get_hemispherical() const;

constexpr bool& __cordl_internal_get_hemispherical() ;

constexpr float_t const& __cordl_internal_get_indirectIntensity() const;

constexpr float_t& __cordl_internal_get_indirectIntensity() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr int32_t const& __cordl_internal_get_samples() const;

constexpr int32_t& __cordl_internal_get_samples() ;

constexpr bool const& __cordl_internal_get_tangentSH() const;

constexpr bool& __cordl_internal_get_tangentSH() ;

constexpr ::StringW const& __cordl_internal_get_texName() const;

constexpr ::StringW& __cordl_internal_get_texName() ;

constexpr void __cordl_internal_set_UID(int32_t  value) ;

constexpr void __cordl_internal_set_bakeToIndirect(bool  value) ;

constexpr void __cordl_internal_set_bitmask(int32_t  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_correctRotation(bool  value) ;

constexpr void __cordl_internal_set_cubemap(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_hemispherical(bool  value) ;

constexpr void __cordl_internal_set_indirectIntensity(float_t  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_samples(int32_t  value) ;

constexpr void __cordl_internal_set_tangentSH(bool  value) ;

constexpr void __cordl_internal_set_texName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f27c08, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_lightsChanged() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_objShownError() ;

static inline void setStaticF_lightsChanged(int32_t  value) ;

static inline void setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakerySkyLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakerySkyLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakerySkyLight(BakerySkyLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakerySkyLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakerySkyLight(BakerySkyLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32449};

/// @brief Field texName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___texName;

/// @brief Field color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field intensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field samples, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___samples;

/// @brief Field hemispherical, offset: 0x40, size: 0x1, def value: None
 bool  ___hemispherical;

/// @brief Field bitmask, offset: 0x44, size: 0x4, def value: None
 int32_t  ___bitmask;

/// @brief Field bakeToIndirect, offset: 0x48, size: 0x1, def value: None
 bool  ___bakeToIndirect;

/// @brief Field indirectIntensity, offset: 0x4c, size: 0x4, def value: None
 float_t  ___indirectIntensity;

/// @brief Field tangentSH, offset: 0x50, size: 0x1, def value: None
 bool  ___tangentSH;

/// @brief Field correctRotation, offset: 0x51, size: 0x1, def value: None
 bool  ___correctRotation;

/// @brief Field cubemap, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___cubemap;

/// @brief Field UID, offset: 0x60, size: 0x4, def value: None
 int32_t  ___UID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___texName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___samples) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___hemispherical) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___bitmask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___bakeToIndirect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___indirectIntensity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___tangentSH) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___correctRotation) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___cubemap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySkyLight, ___UID) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakerySkyLight) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
