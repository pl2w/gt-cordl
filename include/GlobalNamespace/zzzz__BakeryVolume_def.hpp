#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BakeryVolume_Encoding_def.hpp"
#include "GlobalNamespace/zzzz__BakeryVolume_ShadowmaskEncoding_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryVolume)
namespace GlobalNamespace {
struct BakeryVolume_Encoding;
}
namespace GlobalNamespace {
struct BakeryVolume_ShadowmaskEncoding;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryVolume*, "", "BakeryVolume");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Volume")]
// [ExecuteInEditMode]
// Dependencies BakeryVolume::Encoding, BakeryVolume::ShadowmaskEncoding, UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryVolume
class CORDL_TYPE BakeryVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Encoding = ::GlobalNamespace::BakeryVolume_Encoding;

using ShadowmaskEncoding = ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding;

/// @brief Field _rotateAroundXYZ, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get__rotateAroundXYZ, put=__cordl_internal_set__rotateAroundXYZ)) bool  _rotateAroundXYZ;

/// @brief Field adaptiveRes, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_adaptiveRes, put=__cordl_internal_set_adaptiveRes)) bool  adaptiveRes;

/// @brief Field bakedMask, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedMask, put=__cordl_internal_set_bakedMask)) ::UnityW<::UnityEngine::Texture3D>  bakedMask;

/// @brief Field bakedTexture0, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedTexture0, put=__cordl_internal_set_bakedTexture0)) ::UnityW<::UnityEngine::Texture3D>  bakedTexture0;

/// @brief Field bakedTexture1, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedTexture1, put=__cordl_internal_set_bakedTexture1)) ::UnityW<::UnityEngine::Texture3D>  bakedTexture1;

/// @brief Field bakedTexture2, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedTexture2, put=__cordl_internal_set_bakedTexture2)) ::UnityW<::UnityEngine::Texture3D>  bakedTexture2;

/// @brief Field bakedTexture3, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedTexture3, put=__cordl_internal_set_bakedTexture3)) ::UnityW<::UnityEngine::Texture3D>  bakedTexture3;

/// @brief Field bounds, offset 0x24, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field denoise, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_denoise, put=__cordl_internal_set_denoise)) bool  denoise;

/// @brief Field enableBaking, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableBaking, put=__cordl_internal_set_enableBaking)) bool  enableBaking;

/// @brief Field encoding, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::GlobalNamespace::BakeryVolume_Encoding  encoding;

/// @brief Field firstLightIsAlwaysAlpha, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstLightIsAlwaysAlpha, put=__cordl_internal_set_firstLightIsAlwaysAlpha)) bool  firstLightIsAlwaysAlpha;

/// @brief Field globalVolume, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalVolume, put=setStaticF_globalVolume)) ::UnityW<::GlobalNamespace::BakeryVolume>  globalVolume;

/// @brief Field isGlobal, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGlobal, put=__cordl_internal_set_isGlobal)) bool  isGlobal;

/// @brief Field multiVolumePriority, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiVolumePriority, put=__cordl_internal_set_multiVolumePriority)) int32_t  multiVolumePriority;

/// @brief Field resolutionX, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolutionX, put=__cordl_internal_set_resolutionX)) int32_t  resolutionX;

/// @brief Field resolutionY, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolutionY, put=__cordl_internal_set_resolutionY)) int32_t  resolutionY;

/// @brief Field resolutionZ, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolutionZ, put=__cordl_internal_set_resolutionZ)) int32_t  resolutionZ;

/// @brief Field rotateAroundY, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotateAroundY, put=__cordl_internal_set_rotateAroundY)) bool  rotateAroundY;

/// @brief Field shadowmaskEncoding, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowmaskEncoding, put=__cordl_internal_set_shadowmaskEncoding)) ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding  shadowmaskEncoding;

/// @brief Field showAll, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_showAll, put=setStaticF_showAll)) bool  showAll;

/// @brief Field supportRotationAfterBake, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_supportRotationAfterBake, put=__cordl_internal_set_supportRotationAfterBake)) bool  supportRotationAfterBake;

/// @brief Field tform, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tform, put=__cordl_internal_set_tform)) ::UnityW<::UnityEngine::Transform>  tform;

/// @brief Field voxelsPerUnit, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_voxelsPerUnit, put=__cordl_internal_set_voxelsPerUnit)) float_t  voxelsPerUnit;

/// @brief Method GetInvSize, addr 0x5f28040, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetInvSize() ;

/// @brief Method GetMatrix, addr 0x5f28068, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetMatrix() ;

/// @brief Method GetMax, addr 0x5f27de0, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMax() ;

/// @brief Method GetMaxXMinZ, addr 0x5f27fbc, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMaxXMinZ() ;

/// @brief Method GetMin, addr 0x5f27c88, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMin() ;

/// @brief Method GetRotationY, addr 0x5f27d0c, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetRotationY() ;

/// @brief Method GetWorldXZMinMax, addr 0x5f27e98, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetWorldXZMinMax() ;

static inline ::GlobalNamespace::BakeryVolume* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5f285a0, size 0x1f4, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x5f2852c, size 0x74, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetGlobalParams, addr 0x5f28208, size 0x2cc, virtual false, abstract: false, final false
inline void SetGlobalParams() ;

/// @brief Method TransformPoint, addr 0x5f27e64, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  center, ::UnityEngine::Vector2  sc) ;

/// @brief Method UpdateBounds, addr 0x5f284d4, size 0x58, virtual false, abstract: false, final false
inline void UpdateBounds() ;

constexpr bool const& __cordl_internal_get__rotateAroundXYZ() const;

constexpr bool& __cordl_internal_get__rotateAroundXYZ() ;

constexpr bool const& __cordl_internal_get_adaptiveRes() const;

constexpr bool& __cordl_internal_get_adaptiveRes() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_bakedMask() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_bakedMask() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_bakedTexture0() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_bakedTexture0() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_bakedTexture1() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_bakedTexture1() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_bakedTexture2() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_bakedTexture2() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_bakedTexture3() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_bakedTexture3() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr bool const& __cordl_internal_get_denoise() const;

constexpr bool& __cordl_internal_get_denoise() ;

constexpr bool const& __cordl_internal_get_enableBaking() const;

constexpr bool& __cordl_internal_get_enableBaking() ;

constexpr ::GlobalNamespace::BakeryVolume_Encoding const& __cordl_internal_get_encoding() const;

constexpr ::GlobalNamespace::BakeryVolume_Encoding& __cordl_internal_get_encoding() ;

constexpr bool const& __cordl_internal_get_firstLightIsAlwaysAlpha() const;

constexpr bool& __cordl_internal_get_firstLightIsAlwaysAlpha() ;

constexpr bool const& __cordl_internal_get_isGlobal() const;

constexpr bool& __cordl_internal_get_isGlobal() ;

constexpr int32_t const& __cordl_internal_get_multiVolumePriority() const;

constexpr int32_t& __cordl_internal_get_multiVolumePriority() ;

constexpr int32_t const& __cordl_internal_get_resolutionX() const;

constexpr int32_t& __cordl_internal_get_resolutionX() ;

constexpr int32_t const& __cordl_internal_get_resolutionY() const;

constexpr int32_t& __cordl_internal_get_resolutionY() ;

constexpr int32_t const& __cordl_internal_get_resolutionZ() const;

constexpr int32_t& __cordl_internal_get_resolutionZ() ;

constexpr bool const& __cordl_internal_get_rotateAroundY() const;

constexpr bool& __cordl_internal_get_rotateAroundY() ;

constexpr ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding const& __cordl_internal_get_shadowmaskEncoding() const;

constexpr ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding& __cordl_internal_get_shadowmaskEncoding() ;

constexpr bool const& __cordl_internal_get_supportRotationAfterBake() const;

constexpr bool& __cordl_internal_get_supportRotationAfterBake() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tform() ;

constexpr float_t const& __cordl_internal_get_voxelsPerUnit() const;

constexpr float_t& __cordl_internal_get_voxelsPerUnit() ;

constexpr void __cordl_internal_set__rotateAroundXYZ(bool  value) ;

constexpr void __cordl_internal_set_adaptiveRes(bool  value) ;

constexpr void __cordl_internal_set_bakedMask(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_bakedTexture0(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_bakedTexture1(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_bakedTexture2(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_bakedTexture3(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_denoise(bool  value) ;

constexpr void __cordl_internal_set_enableBaking(bool  value) ;

constexpr void __cordl_internal_set_encoding(::GlobalNamespace::BakeryVolume_Encoding  value) ;

constexpr void __cordl_internal_set_firstLightIsAlwaysAlpha(bool  value) ;

constexpr void __cordl_internal_set_isGlobal(bool  value) ;

constexpr void __cordl_internal_set_multiVolumePriority(int32_t  value) ;

constexpr void __cordl_internal_set_resolutionX(int32_t  value) ;

constexpr void __cordl_internal_set_resolutionY(int32_t  value) ;

constexpr void __cordl_internal_set_resolutionZ(int32_t  value) ;

constexpr void __cordl_internal_set_rotateAroundY(bool  value) ;

constexpr void __cordl_internal_set_shadowmaskEncoding(::GlobalNamespace::BakeryVolume_ShadowmaskEncoding  value) ;

constexpr void __cordl_internal_set_supportRotationAfterBake(bool  value) ;

constexpr void __cordl_internal_set_tform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_voxelsPerUnit(float_t  value) ;

/// @brief Method .ctor, addr 0x5f28794, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::BakeryVolume> getStaticF_globalVolume() ;

static inline bool getStaticF_showAll() ;

static inline void setStaticF_globalVolume(::UnityW<::GlobalNamespace::BakeryVolume>  value) ;

static inline void setStaticF_showAll(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryVolume(BakeryVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryVolume(BakeryVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32452};

/// @brief Field enableBaking, offset: 0x20, size: 0x1, def value: None
 bool  ___enableBaking;

/// @brief Field bounds, offset: 0x24, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field adaptiveRes, offset: 0x3c, size: 0x1, def value: None
 bool  ___adaptiveRes;

/// @brief Field voxelsPerUnit, offset: 0x40, size: 0x4, def value: None
 float_t  ___voxelsPerUnit;

/// @brief Field resolutionX, offset: 0x44, size: 0x4, def value: None
 int32_t  ___resolutionX;

/// @brief Field resolutionY, offset: 0x48, size: 0x4, def value: None
 int32_t  ___resolutionY;

/// @brief Field resolutionZ, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___resolutionZ;

/// @brief Field encoding, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::BakeryVolume_Encoding  ___encoding;

/// @brief Field shadowmaskEncoding, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding  ___shadowmaskEncoding;

/// @brief Field firstLightIsAlwaysAlpha, offset: 0x58, size: 0x1, def value: None
 bool  ___firstLightIsAlwaysAlpha;

/// @brief Field denoise, offset: 0x59, size: 0x1, def value: None
 bool  ___denoise;

/// @brief Field isGlobal, offset: 0x5a, size: 0x1, def value: None
 bool  ___isGlobal;

/// @brief Field bakedTexture0, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___bakedTexture0;

/// @brief Field bakedTexture1, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___bakedTexture1;

/// @brief Field bakedTexture2, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___bakedTexture2;

/// @brief Field bakedTexture3, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___bakedTexture3;

/// @brief Field bakedMask, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___bakedMask;

/// @brief Field supportRotationAfterBake, offset: 0x88, size: 0x1, def value: None
 bool  ___supportRotationAfterBake;

/// @brief Field rotateAroundY, offset: 0x89, size: 0x1, def value: None
 bool  ___rotateAroundY;

/// @brief Field _rotateAroundXYZ, offset: 0x8a, size: 0x1, def value: None
 bool  ____rotateAroundXYZ;

/// @brief Field multiVolumePriority, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___multiVolumePriority;

/// @brief Field tform, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___enableBaking) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___bounds) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___adaptiveRes) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___voxelsPerUnit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___resolutionX) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___resolutionY) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___resolutionZ) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___encoding) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___shadowmaskEncoding) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___firstLightIsAlwaysAlpha) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___denoise) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___isGlobal) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___bakedTexture0) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___bakedTexture1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___bakedTexture2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___bakedTexture3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___bakedMask) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___supportRotationAfterBake) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___rotateAroundY) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ____rotateAroundXYZ) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___multiVolumePriority) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryVolume, ___tform) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryVolume) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
