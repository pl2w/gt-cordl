#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/GridSliceResizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__GridSliceResizer_Method_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__GridSliceResizer_StretchCenterAxis_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridSliceResizer)
namespace GlobalNamespace {
struct GridSliceResizer_Method;
}
namespace GlobalNamespace {
struct GridSliceResizer_StretchCenterAxis;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class GridSliceResizer;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::GridSliceResizer*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::GridSliceResizer*, "Meta.XR.MRUtilityKit", "GridSliceResizer");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_grid_slice_resizer")]
// [RequireComponent(typeof(UnityEngine.MeshFilter))]
// [ExecuteInEditMode]
// Dependencies Meta.XR.MRUtilityKit.GridSliceResizer::Method, Meta.XR.MRUtilityKit.GridSliceResizer::StretchCenterAxis, UnityEngine.Bounds, UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.GridSliceResizer
class CORDL_TYPE GridSliceResizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Method = ::GlobalNamespace::GridSliceResizer_Method;

using StretchCenterAxis = ::GlobalNamespace::GridSliceResizer_StretchCenterAxis;

/// @brief Field BorderXNegative, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderXNegative, put=__cordl_internal_set_BorderXNegative)) float_t  BorderXNegative;

/// @brief Field BorderXPositive, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderXPositive, put=__cordl_internal_set_BorderXPositive)) float_t  BorderXPositive;

/// @brief Field BorderYNegative, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderYNegative, put=__cordl_internal_set_BorderYNegative)) float_t  BorderYNegative;

/// @brief Field BorderYPositive, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderYPositive, put=__cordl_internal_set_BorderYPositive)) float_t  BorderYPositive;

/// @brief Field BorderZNegative, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderZNegative, put=__cordl_internal_set_BorderZNegative)) float_t  BorderZNegative;

/// @brief Field BorderZPositive, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderZPositive, put=__cordl_internal_set_BorderZPositive)) float_t  BorderZPositive;

/// @brief Field OriginalMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OriginalMesh, put=__cordl_internal_set_OriginalMesh)) ::UnityW<::UnityEngine::Mesh>  OriginalMesh;

/// @brief Field PivotOffset, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_PivotOffset, put=__cordl_internal_set_PivotOffset)) ::UnityEngine::Vector3  PivotOffset;

/// @brief Field ScalingX, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScalingX, put=__cordl_internal_set_ScalingX)) ::GlobalNamespace::GridSliceResizer_Method  ScalingX;

/// @brief Field ScalingY, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScalingY, put=__cordl_internal_set_ScalingY)) ::GlobalNamespace::GridSliceResizer_Method  ScalingY;

/// @brief Field ScalingZ, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScalingZ, put=__cordl_internal_set_ScalingZ)) ::GlobalNamespace::GridSliceResizer_Method  ScalingZ;

/// @brief Field StretchCenter, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_StretchCenter, put=__cordl_internal_set_StretchCenter)) ::GlobalNamespace::GridSliceResizer_StretchCenterAxis  StretchCenter;

/// @brief Field UpdateInPlayMode, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdateInPlayMode, put=__cordl_internal_set_UpdateInPlayMode)) bool  UpdateInPlayMode;

/// @brief Field _axisGizmosColors, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__axisGizmosColors, put=__cordl_internal_set__axisGizmosColors)) ::ArrayW<::UnityEngine::Color>  _axisGizmosColors;

/// @brief Field _boundingBox, offset 0x94, size 0x18 
 __declspec(property(get=__cordl_internal_get__boundingBox, put=__cordl_internal_set__boundingBox)) ::UnityEngine::Bounds  _boundingBox;

/// @brief Field _cachedBorderXNegative, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBorderXNegative, put=__cordl_internal_set__cachedBorderXNegative)) float_t  _cachedBorderXNegative;

/// @brief Field _cachedBorderXPositive, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBorderXPositive, put=__cordl_internal_set__cachedBorderXPositive)) float_t  _cachedBorderXPositive;

/// @brief Field _cachedBorderYNegative, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBorderYNegative, put=__cordl_internal_set__cachedBorderYNegative)) float_t  _cachedBorderYNegative;

/// @brief Field _cachedBorderYPositive, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBorderYPositive, put=__cordl_internal_set__cachedBorderYPositive)) float_t  _cachedBorderYPositive;

/// @brief Field _cachedBorderZNegative, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBorderZNegative, put=__cordl_internal_set__cachedBorderZNegative)) float_t  _cachedBorderZNegative;

/// @brief Field _cachedBorderZPositive, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBorderZPositive, put=__cordl_internal_set__cachedBorderZPositive)) float_t  _cachedBorderZPositive;

/// @brief Field _currentMesh, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMesh, put=__cordl_internal_set__currentMesh)) ::UnityW<::UnityEngine::Mesh>  _currentMesh;

/// @brief Field _currentSize, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentSize, put=__cordl_internal_set__currentSize)) ::UnityEngine::Vector3  _currentSize;

/// @brief Field _meshCollider, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshCollider, put=__cordl_internal_set__meshCollider)) ::UnityW<::UnityEngine::MeshCollider>  _meshCollider;

/// @brief Field _meshFilter, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _pivotTransform, offset 0xc4, size 0x40 
 __declspec(property(get=__cordl_internal_get__pivotTransform, put=__cordl_internal_set__pivotTransform)) ::UnityEngine::Matrix4x4  _pivotTransform;

/// @brief Field _scaledBoundingBox, offset 0xac, size 0x18 
 __declspec(property(get=__cordl_internal_get__scaledBoundingBox, put=__cordl_internal_set__scaledBoundingBox)) ::UnityEngine::Bounds  _scaledBoundingBox;

/// @brief Field _scaledInvPivotTransform, offset 0x104, size 0x40 
 __declspec(property(get=__cordl_internal_get__scaledInvPivotTransform, put=__cordl_internal_set__scaledInvPivotTransform)) ::UnityEngine::Matrix4x4  _scaledInvPivotTransform;

/// @brief Method Awake, addr 0x9f15af4, size 0x184, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawBorderCubeGizmo, addr 0x9f17524, size 0x1ac, virtual false, abstract: false, final false
inline void DrawBorderCubeGizmo(::GlobalNamespace::GridSliceResizer_Method  scalingMethod, float_t  borderNegative, float_t  borderPositive, int32_t  axis) ;

/// @brief Method DrawNegativeBorderForAxis, addr 0x9f17a34, size 0x2b8, virtual false, abstract: false, final false
inline void DrawNegativeBorderForAxis(float_t  borderNegative, int32_t  axis, ::UnityEngine::Bounds  originalScaledBounds, ::UnityEngine::Vector3  boundingBoxSize) ;

/// @brief Method DrawPositiveDrawBorderForAxis, addr 0x9f1777c, size 0x2b8, virtual false, abstract: false, final false
inline void DrawPositiveDrawBorderForAxis(float_t  borderNegative, int32_t  axis, ::UnityEngine::Bounds  originalScaledBounds, ::UnityEngine::Vector3  boundingBoxSize) ;

static inline ::Meta::XR::MRUtilityKit::GridSliceResizer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f16f30, size 0x84, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x9f16fb4, size 0x2b0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmosSelected, addr 0x9f17264, size 0x2c0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method ProcessVertices, addr 0x9f160cc, size 0xe48, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> ProcessVertices() ;

/// @brief Method ScaleBounds, addr 0x9f176d0, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ScaleBounds(::UnityEngine::Bounds  originalBounds, ::UnityEngine::Vector3  scale) ;

/// @brief Method ShouldResize, addr 0x9f15eec, size 0x1e0, virtual false, abstract: false, final false
inline bool ShouldResize() ;

/// @brief Method Start, addr 0x9f15c78, size 0x98, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9f15d10, size 0x1dc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCachedValues, addr 0x9f16f14, size 0x1c, virtual false, abstract: false, final false
inline void UpdateCachedValues() ;

constexpr float_t const& __cordl_internal_get_BorderXNegative() const;

constexpr float_t& __cordl_internal_get_BorderXNegative() ;

constexpr float_t const& __cordl_internal_get_BorderXPositive() const;

constexpr float_t& __cordl_internal_get_BorderXPositive() ;

constexpr float_t const& __cordl_internal_get_BorderYNegative() const;

constexpr float_t& __cordl_internal_get_BorderYNegative() ;

constexpr float_t const& __cordl_internal_get_BorderYPositive() const;

constexpr float_t& __cordl_internal_get_BorderYPositive() ;

constexpr float_t const& __cordl_internal_get_BorderZNegative() const;

constexpr float_t& __cordl_internal_get_BorderZNegative() ;

constexpr float_t const& __cordl_internal_get_BorderZPositive() const;

constexpr float_t& __cordl_internal_get_BorderZPositive() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_OriginalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_OriginalMesh() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PivotOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PivotOffset() ;

constexpr ::GlobalNamespace::GridSliceResizer_Method const& __cordl_internal_get_ScalingX() const;

constexpr ::GlobalNamespace::GridSliceResizer_Method& __cordl_internal_get_ScalingX() ;

constexpr ::GlobalNamespace::GridSliceResizer_Method const& __cordl_internal_get_ScalingY() const;

constexpr ::GlobalNamespace::GridSliceResizer_Method& __cordl_internal_get_ScalingY() ;

constexpr ::GlobalNamespace::GridSliceResizer_Method const& __cordl_internal_get_ScalingZ() const;

constexpr ::GlobalNamespace::GridSliceResizer_Method& __cordl_internal_get_ScalingZ() ;

constexpr ::GlobalNamespace::GridSliceResizer_StretchCenterAxis const& __cordl_internal_get_StretchCenter() const;

constexpr ::GlobalNamespace::GridSliceResizer_StretchCenterAxis& __cordl_internal_get_StretchCenter() ;

constexpr bool const& __cordl_internal_get_UpdateInPlayMode() const;

constexpr bool& __cordl_internal_get_UpdateInPlayMode() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__axisGizmosColors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__axisGizmosColors() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__boundingBox() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__boundingBox() ;

constexpr float_t const& __cordl_internal_get__cachedBorderXNegative() const;

constexpr float_t& __cordl_internal_get__cachedBorderXNegative() ;

constexpr float_t const& __cordl_internal_get__cachedBorderXPositive() const;

constexpr float_t& __cordl_internal_get__cachedBorderXPositive() ;

constexpr float_t const& __cordl_internal_get__cachedBorderYNegative() const;

constexpr float_t& __cordl_internal_get__cachedBorderYNegative() ;

constexpr float_t const& __cordl_internal_get__cachedBorderYPositive() const;

constexpr float_t& __cordl_internal_get__cachedBorderYPositive() ;

constexpr float_t const& __cordl_internal_get__cachedBorderZNegative() const;

constexpr float_t& __cordl_internal_get__cachedBorderZNegative() ;

constexpr float_t const& __cordl_internal_get__cachedBorderZPositive() const;

constexpr float_t& __cordl_internal_get__cachedBorderZPositive() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__currentMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__currentMesh() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentSize() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__meshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__meshCollider() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__pivotTransform() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__pivotTransform() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__scaledBoundingBox() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__scaledBoundingBox() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__scaledInvPivotTransform() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__scaledInvPivotTransform() ;

constexpr void __cordl_internal_set_BorderXNegative(float_t  value) ;

constexpr void __cordl_internal_set_BorderXPositive(float_t  value) ;

constexpr void __cordl_internal_set_BorderYNegative(float_t  value) ;

constexpr void __cordl_internal_set_BorderYPositive(float_t  value) ;

constexpr void __cordl_internal_set_BorderZNegative(float_t  value) ;

constexpr void __cordl_internal_set_BorderZPositive(float_t  value) ;

constexpr void __cordl_internal_set_OriginalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_PivotOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ScalingX(::GlobalNamespace::GridSliceResizer_Method  value) ;

constexpr void __cordl_internal_set_ScalingY(::GlobalNamespace::GridSliceResizer_Method  value) ;

constexpr void __cordl_internal_set_ScalingZ(::GlobalNamespace::GridSliceResizer_Method  value) ;

constexpr void __cordl_internal_set_StretchCenter(::GlobalNamespace::GridSliceResizer_StretchCenterAxis  value) ;

constexpr void __cordl_internal_set_UpdateInPlayMode(bool  value) ;

constexpr void __cordl_internal_set__axisGizmosColors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__boundingBox(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__cachedBorderXNegative(float_t  value) ;

constexpr void __cordl_internal_set__cachedBorderXPositive(float_t  value) ;

constexpr void __cordl_internal_set__cachedBorderYNegative(float_t  value) ;

constexpr void __cordl_internal_set__cachedBorderYPositive(float_t  value) ;

constexpr void __cordl_internal_set__cachedBorderZNegative(float_t  value) ;

constexpr void __cordl_internal_set__cachedBorderZPositive(float_t  value) ;

constexpr void __cordl_internal_set__currentMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__currentSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__meshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__pivotTransform(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__scaledBoundingBox(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__scaledInvPivotTransform(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x9f17cec, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridSliceResizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridSliceResizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridSliceResizer(GridSliceResizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridSliceResizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridSliceResizer(GridSliceResizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25851};

/// @brief Field _minBorderSize offset 0xffffffff size 0x4
static constexpr float_t  _minBorderSize{static_cast<float_t>(0.01f)};

/// [Tooltip("Represents the offset from the pivot point of the mesh. This offset is used to adjust the origin of scaling operations.")]
/// @brief Field PivotOffset, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PivotOffset;

/// [Tooltip("Specifies the proportion of the mesh along the positive X-axis that is protected from scaling.")]
/// [Space(15)]
/// @brief Field ScalingX, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GridSliceResizer_Method  ___ScalingX;

/// [Tooltip("Specifies the proportion of the mesh along the negative X-axis that is protected from scaling.")]
/// [Range(0, 1)]
/// @brief Field BorderXNegative, offset: 0x30, size: 0x4, def value: None
 float_t  ___BorderXNegative;

/// [Tooltip("Specifies the proportion of the mesh along the positive X-axis that is protected from scaling.")]
/// [Range(0, 1)]
/// @brief Field BorderXPositive, offset: 0x34, size: 0x4, def value: None
 float_t  ___BorderXPositive;

/// [Tooltip(" Defines the scaling method to be applied along the Y-axis of the mesh.")]
/// [Space(15)]
/// @brief Field ScalingY, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::GridSliceResizer_Method  ___ScalingY;

/// [Tooltip("Specifies the proportion of the mesh along the negative Y-axis that is protected from scaling.")]
/// [Range(0, 1)]
/// @brief Field BorderYNegative, offset: 0x3c, size: 0x4, def value: None
 float_t  ___BorderYNegative;

/// [Tooltip("Specifies the proportion of the mesh along the positive Y-axis that is protected from scaling.")]
/// [Range(0, 1)]
/// @brief Field BorderYPositive, offset: 0x40, size: 0x4, def value: None
 float_t  ___BorderYPositive;

/// [Tooltip("Defines the scaling method to be applied along the Z-axis of the mesh.")]
/// [Space(15)]
/// @brief Field ScalingZ, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::GridSliceResizer_Method  ___ScalingZ;

/// [Tooltip("Specifies the proportion of the mesh along the negative Z-axis that is protected from scaling.")]
/// [Range(0, 1)]
/// @brief Field BorderZNegative, offset: 0x48, size: 0x4, def value: None
 float_t  ___BorderZNegative;

/// [Tooltip("Specifies the proportion of the mesh along the positive Z-axis that is protected from scaling.")]
/// [Range(0, 1)]
/// @brief Field BorderZPositive, offset: 0x4c, size: 0x4, def value: None
 float_t  ___BorderZPositive;

/// [Tooltip("Specifies which axes should allow the center part of the object to stretch.This setting is used to control the stretching behavior of the central section of the mesh allowing for selective stretching along specified axes.")]
/// @brief Field StretchCenter, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::GridSliceResizer_StretchCenterAxis  ___StretchCenter;

/// [Tooltip("Indicates whether the resizer should update the mesh in play mode.When set to true, the mesh will continue to be updated based on the scaling settings during runtime.This can be useful for dynamic scaling effects but may impact performance if used excessively.")]
/// @brief Field UpdateInPlayMode, offset: 0x54, size: 0x1, def value: None
 bool  ___UpdateInPlayMode;

/// [Tooltip("The original mesh before any modifications. This mesh is used as the baseline for all scaling operations")]
/// @brief Field OriginalMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___OriginalMesh;

/// @brief Field _axisGizmosColors, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____axisGizmosColors;

/// @brief Field _cachedBorderXNegative, offset: 0x68, size: 0x4, def value: None
 float_t  ____cachedBorderXNegative;

/// @brief Field _cachedBorderXPositive, offset: 0x6c, size: 0x4, def value: None
 float_t  ____cachedBorderXPositive;

/// @brief Field _cachedBorderYNegative, offset: 0x70, size: 0x4, def value: None
 float_t  ____cachedBorderYNegative;

/// @brief Field _cachedBorderYPositive, offset: 0x74, size: 0x4, def value: None
 float_t  ____cachedBorderYPositive;

/// @brief Field _cachedBorderZNegative, offset: 0x78, size: 0x4, def value: None
 float_t  ____cachedBorderZNegative;

/// @brief Field _cachedBorderZPositive, offset: 0x7c, size: 0x4, def value: None
 float_t  ____cachedBorderZPositive;

/// @brief Field _meshFilter, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _currentSize, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentSize;

/// @brief Field _boundingBox, offset: 0x94, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____boundingBox;

/// @brief Field _scaledBoundingBox, offset: 0xac, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____scaledBoundingBox;

/// @brief Field _pivotTransform, offset: 0xc4, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____pivotTransform;

/// @brief Field _scaledInvPivotTransform, offset: 0x104, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____scaledInvPivotTransform;

/// @brief Field _currentMesh, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____currentMesh;

/// @brief Field _meshCollider, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____meshCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___PivotOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___ScalingX) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___BorderXNegative) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___BorderXPositive) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___ScalingY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___BorderYNegative) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___BorderYPositive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___ScalingZ) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___BorderZNegative) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___BorderZPositive) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___StretchCenter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___UpdateInPlayMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ___OriginalMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____axisGizmosColors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____cachedBorderXNegative) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____cachedBorderXPositive) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____cachedBorderYNegative) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____cachedBorderYPositive) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____cachedBorderZNegative) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____cachedBorderZPositive) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____meshFilter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____currentSize) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____boundingBox) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____scaledBoundingBox) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____pivotTransform) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____scaledInvPivotTransform) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____currentMesh) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::GridSliceResizer, ____meshCollider) == 0x150, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::GridSliceResizer) == 0x158, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
