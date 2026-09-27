#pragma once
// IWYU pragma private; include "Oculus/Interaction/TunnelingEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TunnelingEffect)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TunnelingEffect;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TunnelingEffect*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TunnelingEffect*, "Oculus.Interaction", "TunnelingEffect");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TunnelingEffect
class CORDL_TYPE TunnelingEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AimingDirection, put=set_AimingDirection)) ::UnityEngine::Vector3  AimingDirection;

 __declspec(property(get=get_AlphaStrength, put=set_AlphaStrength)) float_t  AlphaStrength;

 __declspec(property(get=get_ExtraFeatheredFOV, put=set_ExtraFeatheredFOV)) float_t  ExtraFeatheredFOV;

 __declspec(property(get=get_MaskInnerColor, put=set_MaskInnerColor)) ::UnityEngine::Color  MaskInnerColor;

 __declspec(property(get=get_MaskOuterColor, put=set_MaskOuterColor)) ::UnityEngine::Color  MaskOuterColor;

 __declspec(property(get=get_PlaneDistance, put=set_PlaneDistance)) float_t  PlaneDistance;

 __declspec(property(get=get_UseAimingTarget, put=set_UseAimingTarget)) bool  UseAimingTarget;

 __declspec(property(get=get_UserFOV, put=set_UserFOV)) float_t  UserFOV;

/// @brief Field _aimingDirection, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__aimingDirection, put=__cordl_internal_set__aimingDirection)) ::UnityEngine::Vector3  _aimingDirection;

/// @brief Field _alphaID, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__alphaID, put=__cordl_internal_set__alphaID)) int32_t  _alphaID;

/// @brief Field _alphaStrength, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__alphaStrength, put=__cordl_internal_set__alphaStrength)) float_t  _alphaStrength;

/// @brief Field _centerEyeCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__centerEyeCamera, put=__cordl_internal_set__centerEyeCamera)) ::UnityW<::UnityEngine::Camera>  _centerEyeCamera;

/// @brief Field _featheredFOV, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__featheredFOV, put=__cordl_internal_set__featheredFOV)) float_t  _featheredFOV;

/// @brief Field _leftEyeAnchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftEyeAnchor, put=__cordl_internal_set__leftEyeAnchor)) ::UnityW<::UnityEngine::Transform>  _leftEyeAnchor;

/// @brief Field _maskColorInnerID, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__maskColorInnerID, put=__cordl_internal_set__maskColorInnerID)) int32_t  _maskColorInnerID;

/// @brief Field _maskColorOuterID, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__maskColorOuterID, put=__cordl_internal_set__maskColorOuterID)) int32_t  _maskColorOuterID;

/// @brief Field _maskDirectionID, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__maskDirectionID, put=__cordl_internal_set__maskDirectionID)) int32_t  _maskDirectionID;

/// @brief Field _maskInnerColor, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get__maskInnerColor, put=__cordl_internal_set__maskInnerColor)) ::UnityEngine::Color  _maskInnerColor;

/// @brief Field _maskMesh, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__maskMesh, put=__cordl_internal_set__maskMesh)) ::UnityW<::UnityEngine::Mesh>  _maskMesh;

/// @brief Field _maskOuterColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__maskOuterColor, put=__cordl_internal_set__maskOuterColor)) ::UnityEngine::Color  _maskOuterColor;

/// @brief Field _materialPropertyBlock, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialPropertyBlock, put=__cordl_internal_set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialPropertyBlock;

/// @brief Field _maxRadiusID, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRadiusID, put=__cordl_internal_set__maxRadiusID)) int32_t  _maxRadiusID;

/// @brief Field _meshFilter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _meshRenderer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshRenderer, put=__cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _meshRenderer;

/// @brief Field _meshTransform, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshTransform, put=__cordl_internal_set__meshTransform)) ::UnityW<::UnityEngine::Transform>  _meshTransform;

/// @brief Field _minRadiusID, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minRadiusID, put=__cordl_internal_set__minRadiusID)) int32_t  _minRadiusID;

/// @brief Field _planeDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__planeDistance, put=__cordl_internal_set__planeDistance)) float_t  _planeDistance;

/// @brief Field _rightEyeAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightEyeAnchor, put=__cordl_internal_set__rightEyeAnchor)) ::UnityW<::UnityEngine::Transform>  _rightEyeAnchor;

/// @brief Field _started, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _triangles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__triangles, put=setStaticF__triangles)) ::ArrayW<int32_t>  _triangles;

/// @brief Field _useAimingTarget, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__useAimingTarget, put=__cordl_internal_set__useAimingTarget)) bool  _useAimingTarget;

/// @brief Field _userFOV, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__userFOV, put=__cordl_internal_set__userFOV)) float_t  _userFOV;

/// @brief Field _uv0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__uv0, put=setStaticF__uv0)) ::ArrayW<::UnityEngine::Vector3>  _uv0;

/// @brief Field _vertices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__vertices, put=setStaticF__vertices)) ::ArrayW<::UnityEngine::Vector3>  _vertices;

/// @brief Method GetIPD, addr 0xa454ba0, size 0xc0, virtual false, abstract: false, final false
inline float_t GetIPD() ;

/// @brief Method InjectAllTunnelingEffect, addr 0xa454c60, size 0x60, virtual false, abstract: false, final false
inline void InjectAllTunnelingEffect(::UnityEngine::Transform*  leftEyeAnchor, ::UnityEngine::Transform*  rightEyeAnchor, ::UnityEngine::Camera*  centerEyeCamera, ::UnityEngine::MeshFilter*  meshFilter) ;

/// @brief Method InjectCenterEyeCamera, addr 0xa454cd0, size 0x8, virtual false, abstract: false, final false
inline void InjectCenterEyeCamera(::UnityEngine::Camera*  centerEyeCamera) ;

/// @brief Method InjectLeftEyeAnchor, addr 0xa454cc0, size 0x8, virtual false, abstract: false, final false
inline void InjectLeftEyeAnchor(::UnityEngine::Transform*  leftEyeAnchor) ;

/// @brief Method InjectMeshFilter, addr 0xa454cd8, size 0x8, virtual false, abstract: false, final false
inline void InjectMeshFilter(::UnityEngine::MeshFilter*  meshFilter) ;

/// @brief Method InjectRightEyeAnchor, addr 0xa454cc8, size 0x8, virtual false, abstract: false, final false
inline void InjectRightEyeAnchor(::UnityEngine::Transform*  rightEyeAnchor) ;

/// @brief Method LateUpdate, addr 0xa454874, size 0x32c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::TunnelingEffect* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45484c, size 0x28, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa454824, size 0x28, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa454634, size 0x1f0, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__aimingDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__aimingDirection() ;

constexpr int32_t const& __cordl_internal_get__alphaID() const;

constexpr int32_t& __cordl_internal_get__alphaID() ;

constexpr float_t const& __cordl_internal_get__alphaStrength() const;

constexpr float_t& __cordl_internal_get__alphaStrength() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__centerEyeCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__centerEyeCamera() ;

constexpr float_t const& __cordl_internal_get__featheredFOV() const;

constexpr float_t& __cordl_internal_get__featheredFOV() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftEyeAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftEyeAnchor() ;

constexpr int32_t const& __cordl_internal_get__maskColorInnerID() const;

constexpr int32_t& __cordl_internal_get__maskColorInnerID() ;

constexpr int32_t const& __cordl_internal_get__maskColorOuterID() const;

constexpr int32_t& __cordl_internal_get__maskColorOuterID() ;

constexpr int32_t const& __cordl_internal_get__maskDirectionID() const;

constexpr int32_t& __cordl_internal_get__maskDirectionID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__maskInnerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__maskInnerColor() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__maskMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__maskMesh() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__maskOuterColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__maskOuterColor() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock() ;

constexpr int32_t const& __cordl_internal_get__maxRadiusID() const;

constexpr int32_t& __cordl_internal_get__maxRadiusID() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__meshTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__meshTransform() ;

constexpr int32_t const& __cordl_internal_get__minRadiusID() const;

constexpr int32_t& __cordl_internal_get__minRadiusID() ;

constexpr float_t const& __cordl_internal_get__planeDistance() const;

constexpr float_t& __cordl_internal_get__planeDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightEyeAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightEyeAnchor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__useAimingTarget() const;

constexpr bool& __cordl_internal_get__useAimingTarget() ;

constexpr float_t const& __cordl_internal_get__userFOV() const;

constexpr float_t& __cordl_internal_get__userFOV() ;

constexpr void __cordl_internal_set__aimingDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__alphaID(int32_t  value) ;

constexpr void __cordl_internal_set__alphaStrength(float_t  value) ;

constexpr void __cordl_internal_set__centerEyeCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__featheredFOV(float_t  value) ;

constexpr void __cordl_internal_set__leftEyeAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__maskColorInnerID(int32_t  value) ;

constexpr void __cordl_internal_set__maskColorOuterID(int32_t  value) ;

constexpr void __cordl_internal_set__maskDirectionID(int32_t  value) ;

constexpr void __cordl_internal_set__maskInnerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__maskMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__maskOuterColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__maxRadiusID(int32_t  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__meshTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__minRadiusID(int32_t  value) ;

constexpr void __cordl_internal_set__planeDistance(float_t  value) ;

constexpr void __cordl_internal_set__rightEyeAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__useAimingTarget(bool  value) ;

constexpr void __cordl_internal_set__userFOV(float_t  value) ;

/// @brief Method .ctor, addr 0xa454ce0, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF__triangles() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF__uv0() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF__vertices() ;

/// @brief Method get_AimingDirection, addr 0xa45459c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AimingDirection() ;

/// @brief Method get_AlphaStrength, addr 0xa454624, size 0x8, virtual false, abstract: false, final false
inline float_t get_AlphaStrength() ;

/// @brief Method get_ExtraFeatheredFOV, addr 0xa454614, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExtraFeatheredFOV() ;

/// @brief Method get_MaskInnerColor, addr 0xa4545ec, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_MaskInnerColor() ;

/// @brief Method get_MaskOuterColor, addr 0xa4545d4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_MaskOuterColor() ;

/// @brief Method get_PlaneDistance, addr 0xa4545c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_PlaneDistance() ;

/// @brief Method get_UseAimingTarget, addr 0xa4545b4, size 0x8, virtual false, abstract: false, final false
inline bool get_UseAimingTarget() ;

/// @brief Method get_UserFOV, addr 0xa454604, size 0x8, virtual false, abstract: false, final false
inline float_t get_UserFOV() ;

static inline void setStaticF__triangles(::ArrayW<int32_t>  value) ;

static inline void setStaticF__uv0(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF__vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_AimingDirection, addr 0xa4545a8, size 0xc, virtual false, abstract: false, final false
inline void set_AimingDirection(::UnityEngine::Vector3  value) ;

/// @brief Method set_AlphaStrength, addr 0xa45462c, size 0x8, virtual false, abstract: false, final false
inline void set_AlphaStrength(float_t  value) ;

/// @brief Method set_ExtraFeatheredFOV, addr 0xa45461c, size 0x8, virtual false, abstract: false, final false
inline void set_ExtraFeatheredFOV(float_t  value) ;

/// @brief Method set_MaskInnerColor, addr 0xa4545f8, size 0xc, virtual false, abstract: false, final false
inline void set_MaskInnerColor(::UnityEngine::Color  value) ;

/// @brief Method set_MaskOuterColor, addr 0xa4545e0, size 0xc, virtual false, abstract: false, final false
inline void set_MaskOuterColor(::UnityEngine::Color  value) ;

/// @brief Method set_PlaneDistance, addr 0xa4545cc, size 0x8, virtual false, abstract: false, final false
inline void set_PlaneDistance(float_t  value) ;

/// @brief Method set_UseAimingTarget, addr 0xa4545bc, size 0x8, virtual false, abstract: false, final false
inline void set_UseAimingTarget(bool  value) ;

/// @brief Method set_UserFOV, addr 0xa45460c, size 0x8, virtual false, abstract: false, final false
inline void set_UserFOV(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TunnelingEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TunnelingEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TunnelingEffect(TunnelingEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TunnelingEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TunnelingEffect(TunnelingEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15849};

/// [Header("Mask Setup")]
/// [SerializeField]
/// @brief Field _leftEyeAnchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____leftEyeAnchor;

/// [SerializeField]
/// @brief Field _rightEyeAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rightEyeAnchor;

/// [SerializeField]
/// @brief Field _centerEyeCamera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____centerEyeCamera;

/// [SerializeField]
/// @brief Field _meshFilter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// [SerializeField]
/// [Optional]
/// @brief Field _aimingDirection, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____aimingDirection;

/// [SerializeField]
/// @brief Field _useAimingTarget, offset: 0x4c, size: 0x1, def value: None
 bool  ____useAimingTarget;

/// [Header("Mask State")]
/// [SerializeField]
/// @brief Field _planeDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ____planeDistance;

/// [Header("Mask Properties")]
/// [SerializeField]
/// @brief Field _maskOuterColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ____maskOuterColor;

/// [SerializeField]
/// @brief Field _maskInnerColor, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ____maskInnerColor;

/// [SerializeField]
/// [Range(0, 360)]
/// @brief Field _userFOV, offset: 0x74, size: 0x4, def value: None
 float_t  ____userFOV;

/// [SerializeField]
/// [Range(0, 180)]
/// @brief Field _featheredFOV, offset: 0x78, size: 0x4, def value: None
 float_t  ____featheredFOV;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _alphaStrength, offset: 0x7c, size: 0x4, def value: None
 float_t  ____alphaStrength;

/// @brief Field _maskColorInnerID, offset: 0x80, size: 0x4, def value: None
 int32_t  ____maskColorInnerID;

/// @brief Field _maskColorOuterID, offset: 0x84, size: 0x4, def value: None
 int32_t  ____maskColorOuterID;

/// @brief Field _maskDirectionID, offset: 0x88, size: 0x4, def value: None
 int32_t  ____maskDirectionID;

/// @brief Field _minRadiusID, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____minRadiusID;

/// @brief Field _maxRadiusID, offset: 0x90, size: 0x4, def value: None
 int32_t  ____maxRadiusID;

/// @brief Field _alphaID, offset: 0x94, size: 0x4, def value: None
 int32_t  ____alphaID;

/// @brief Field _maskMesh, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____maskMesh;

/// @brief Field _meshTransform, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____meshTransform;

/// @brief Field _meshRenderer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____meshRenderer;

/// @brief Field _materialPropertyBlock, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialPropertyBlock;

/// @brief Field _started, offset: 0xb8, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____leftEyeAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____rightEyeAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____centerEyeCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____meshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____aimingDirection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____useAimingTarget) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____planeDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maskOuterColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maskInnerColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____userFOV) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____featheredFOV) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____alphaStrength) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maskColorInnerID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maskColorOuterID) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maskDirectionID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____minRadiusID) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maxRadiusID) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____alphaID) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____maskMesh) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____meshTransform) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____meshRenderer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____materialPropertyBlock) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TunnelingEffect, ____started) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TunnelingEffect) == 0xc0, "Size mismatch!");

} // namespace end def Oculus::Interaction
