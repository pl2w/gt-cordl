#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineExtrude.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineExtrude)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::Splines {
class IExtrudeShape;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineExtrude;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineExtrude*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineExtrude*, "UnityEngine.Splines", "SplineExtrude");
// [RequireComponent(typeof(UnityEngine.MeshFilter), typeof(UnityEngine.MeshRenderer))]
// [AddComponentMenu("Splines/Spline Extrude")]
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineExtrude
class CORDL_TYPE SplineExtrude : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanCapEnds)) bool  CanCapEnds;

 __declspec(property(get=get_Capped, put=set_Capped)) bool  Capped;

 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_FlipNormals, put=set_FlipNormals)) bool  FlipNormals;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Range, put=set_Range)) ::UnityEngine::Vector2  Range;

 __declspec(property(get=get_RebuildFrequency, put=set_RebuildFrequency)) int32_t  RebuildFrequency;

 __declspec(property(get=get_RebuildOnSplineChange, put=set_RebuildOnSplineChange)) bool  RebuildOnSplineChange;

 __declspec(property(get=get_SegmentsPerUnit, put=set_SegmentsPerUnit)) float_t  SegmentsPerUnit;

 __declspec(property(get=get_Shape, put=set_Shape)) ::UnityEngine::Splines::IExtrudeShape*  Shape;

 __declspec(property(get=get_Sides, put=set_Sides)) int32_t  Sides;

 __declspec(property(get=get_Spline)) ::UnityEngine::Splines::Spline*  Spline;

 __declspec(property(get=get_Splines)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  Splines;

/// @brief [Obsolete("Use Capped instead.", false)]
 __declspec(property(get=get_capped)) bool  capped;

/// @brief [Obsolete("Use Container instead.", false)]
 __declspec(property(get=get_container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  container;

/// @brief Field k_EmptyContainerError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmptyContainerError, put=setStaticF_k_EmptyContainerError)) ::StringW  k_EmptyContainerError;

/// @brief Field m_AutosmoothAngle, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AutosmoothAngle, put=__cordl_internal_set_m_AutosmoothAngle)) float_t  m_AutosmoothAngle;

/// @brief Field m_CanCapEnds, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CanCapEnds, put=__cordl_internal_set_m_CanCapEnds)) bool  m_CanCapEnds;

/// @brief Field m_Capped, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Capped, put=__cordl_internal_set_m_Capped)) bool  m_Capped;

/// @brief Field m_Container, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Container, put=__cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Container;

/// @brief Field m_FlipNormals, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FlipNormals, put=__cordl_internal_set_m_FlipNormals)) bool  m_FlipNormals;

/// @brief Field m_Mesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Mesh, put=__cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh>  m_Mesh;

/// @brief Field m_NextScheduledRebuild, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextScheduledRebuild, put=__cordl_internal_set_m_NextScheduledRebuild)) float_t  m_NextScheduledRebuild;

/// @brief Field m_Radius, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Radius, put=__cordl_internal_set_m_Radius)) float_t  m_Radius;

/// @brief Field m_Range, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Range, put=__cordl_internal_set_m_Range)) ::UnityEngine::Vector2  m_Range;

/// @brief Field m_RebuildFrequency, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RebuildFrequency, put=__cordl_internal_set_m_RebuildFrequency)) int32_t  m_RebuildFrequency;

/// @brief Field m_RebuildOnSplineChange, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RebuildOnSplineChange, put=__cordl_internal_set_m_RebuildOnSplineChange)) bool  m_RebuildOnSplineChange;

/// @brief Field m_RebuildRequested, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RebuildRequested, put=__cordl_internal_set_m_RebuildRequested)) bool  m_RebuildRequested;

/// @brief Field m_SegmentsPerUnit, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SegmentsPerUnit, put=__cordl_internal_set_m_SegmentsPerUnit)) float_t  m_SegmentsPerUnit;

/// @brief Field m_Shape, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Shape, put=__cordl_internal_set_m_Shape)) ::UnityEngine::Splines::IExtrudeShape*  m_Shape;

/// @brief Field m_Sides, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Sides, put=__cordl_internal_set_m_Sides)) int32_t  m_Sides;

/// @brief Field m_TargetMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetMesh, put=__cordl_internal_set_m_TargetMesh)) ::UnityW<::UnityEngine::Mesh>  m_TargetMesh;

/// @brief Field m_UpdateColliders, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UpdateColliders, put=__cordl_internal_set_m_UpdateColliders)) bool  m_UpdateColliders;

/// @brief [Obsolete("Use Radius instead.", false)]
 __declspec(property(get=get_radius)) float_t  radius;

/// @brief [Obsolete("Use Range instead.", false)]
 __declspec(property(get=get_range)) ::UnityEngine::Vector2  range;

/// @brief [Obsolete("Use RebuildFrequency instead.", false)]
 __declspec(property(get=get_rebuildFrequency)) int32_t  rebuildFrequency;

/// @brief [Obsolete("Use RebuildOnSplineChange instead.", false)]
 __declspec(property(get=get_rebuildOnSplineChange)) bool  rebuildOnSplineChange;

/// @brief [Obsolete("Use SegmentsPerUnit instead.", false)]
 __declspec(property(get=get_segmentsPerUnit)) float_t  segmentsPerUnit;

/// @brief [Obsolete("Use Sides instead.", false)]
 __declspec(property(get=get_sides)) int32_t  sides;

/// @brief [Obsolete("Use Spline instead.", false)]
 __declspec(property(get=get_spline)) ::UnityEngine::Splines::Spline*  spline;

 __declspec(property(get=get_targetMesh, put=set_targetMesh)) ::UnityW<::UnityEngine::Mesh>  targetMesh;

/// @brief Method AutosmoothNormals, addr 0xb31e1b4, size 0xb8c, virtual false, abstract: false, final false
inline void AutosmoothNormals() ;

/// @brief Method CleanupMesh, addr 0xb31d410, size 0xfc, virtual false, abstract: false, final false
inline void CleanupMesh() ;

/// @brief Method CreateMeshAsset, addr 0xb31ed40, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> CreateMeshAsset() ;

/// @brief Method EnsureMeshExists, addr 0xb31d50c, size 0x17c, virtual false, abstract: false, final false
inline void EnsureMeshExists() ;

/// @brief Method IsNullOrEmptyContainer, addr 0xb31dd1c, size 0x10c, virtual false, abstract: false, final false
inline bool IsNullOrEmptyContainer() ;

static inline ::UnityEngine::Splines::SplineExtrude* New_ctor() ;

/// @brief Method OnDisable, addr 0xb31dfac, size 0x84, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb31df04, size 0xa8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChanged, addr 0xb31e030, size 0x14c, virtual false, abstract: false, final false
inline void OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method Rebuild, addr 0xb31d688, size 0x510, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method Reset, addr 0xb31dbc8, size 0x154, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetSplineContainerOnGO, addr 0xb31de28, size 0xdc, virtual false, abstract: false, final false
inline void SetSplineContainerOnGO() ;

/// @brief Method Update, addr 0xb31e17c, size 0x38, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_AutosmoothAngle() const;

constexpr float_t& __cordl_internal_get_m_AutosmoothAngle() ;

constexpr bool const& __cordl_internal_get_m_CanCapEnds() const;

constexpr bool& __cordl_internal_get_m_CanCapEnds() ;

constexpr bool const& __cordl_internal_get_m_Capped() const;

constexpr bool& __cordl_internal_get_m_Capped() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Container() ;

constexpr bool const& __cordl_internal_get_m_FlipNormals() const;

constexpr bool& __cordl_internal_get_m_FlipNormals() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh() ;

constexpr float_t const& __cordl_internal_get_m_NextScheduledRebuild() const;

constexpr float_t& __cordl_internal_get_m_NextScheduledRebuild() ;

constexpr float_t const& __cordl_internal_get_m_Radius() const;

constexpr float_t& __cordl_internal_get_m_Radius() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Range() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Range() ;

constexpr int32_t const& __cordl_internal_get_m_RebuildFrequency() const;

constexpr int32_t& __cordl_internal_get_m_RebuildFrequency() ;

constexpr bool const& __cordl_internal_get_m_RebuildOnSplineChange() const;

constexpr bool& __cordl_internal_get_m_RebuildOnSplineChange() ;

constexpr bool const& __cordl_internal_get_m_RebuildRequested() const;

constexpr bool& __cordl_internal_get_m_RebuildRequested() ;

constexpr float_t const& __cordl_internal_get_m_SegmentsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_SegmentsPerUnit() ;

constexpr ::UnityEngine::Splines::IExtrudeShape* const& __cordl_internal_get_m_Shape() const;

constexpr ::UnityEngine::Splines::IExtrudeShape*& __cordl_internal_get_m_Shape() ;

constexpr int32_t const& __cordl_internal_get_m_Sides() const;

constexpr int32_t& __cordl_internal_get_m_Sides() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_TargetMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_TargetMesh() ;

constexpr bool const& __cordl_internal_get_m_UpdateColliders() const;

constexpr bool& __cordl_internal_get_m_UpdateColliders() ;

constexpr void __cordl_internal_set_m_AutosmoothAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_CanCapEnds(bool  value) ;

constexpr void __cordl_internal_set_m_Capped(bool  value) ;

constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_FlipNormals(bool  value) ;

constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_m_NextScheduledRebuild(float_t  value) ;

constexpr void __cordl_internal_set_m_Radius(float_t  value) ;

constexpr void __cordl_internal_set_m_Range(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_RebuildFrequency(int32_t  value) ;

constexpr void __cordl_internal_set_m_RebuildOnSplineChange(bool  value) ;

constexpr void __cordl_internal_set_m_RebuildRequested(bool  value) ;

constexpr void __cordl_internal_set_m_SegmentsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_Shape(::UnityEngine::Splines::IExtrudeShape*  value) ;

constexpr void __cordl_internal_set_m_Sides(int32_t  value) ;

constexpr void __cordl_internal_set_m_TargetMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_m_UpdateColliders(bool  value) ;

/// @brief Method .ctor, addr 0xb31edbc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_k_EmptyContainerError() ;

/// @brief Method get_CanCapEnds, addr 0xb31d1a8, size 0x8, virtual false, abstract: false, final false
inline bool get_CanCapEnds() ;

/// @brief Method get_Capped, addr 0xb31d2f4, size 0x8, virtual false, abstract: false, final false
inline bool get_Capped() ;

/// @brief Method get_Container, addr 0xb31d1c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_FlipNormals, addr 0xb31d34c, size 0x8, virtual false, abstract: false, final false
inline bool get_FlipNormals() ;

/// @brief Method get_Radius, addr 0xb31d30c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Range, addr 0xb31d330, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Range() ;

/// @brief Method get_RebuildFrequency, addr 0xb31d204, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RebuildFrequency() ;

/// @brief Method get_RebuildOnSplineChange, addr 0xb31d1e0, size 0x8, virtual false, abstract: false, final false
inline bool get_RebuildOnSplineChange() ;

/// @brief Method get_SegmentsPerUnit, addr 0xb31d2d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_SegmentsPerUnit() ;

/// @brief Method get_Shape, addr 0xb31d1b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::IExtrudeShape* get_Shape() ;

/// @brief Method get_Sides, addr 0xb31d224, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Sides() ;

/// @brief Method get_Spline, addr 0xb31dba8, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_Spline() ;

/// @brief Method get_Splines, addr 0xb31dbb8, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* get_Splines() ;

/// @brief Method get_capped, addr 0xb31d2ec, size 0x8, virtual false, abstract: false, final false
inline bool get_capped() ;

/// @brief Method get_container, addr 0xb31d1c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_container() ;

/// @brief Method get_radius, addr 0xb31d304, size 0x8, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_range, addr 0xb31d328, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_range() ;

/// @brief Method get_rebuildFrequency, addr 0xb31d1fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_rebuildFrequency() ;

/// @brief Method get_rebuildOnSplineChange, addr 0xb31d1d8, size 0x8, virtual false, abstract: false, final false
inline bool get_rebuildOnSplineChange() ;

/// @brief Method get_segmentsPerUnit, addr 0xb31d2c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_segmentsPerUnit() ;

/// @brief Method get_sides, addr 0xb31d21c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_sides() ;

/// @brief Method get_spline, addr 0xb31db98, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_spline() ;

/// @brief Method get_targetMesh, addr 0xb31d35c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_targetMesh() ;

static inline void setStaticF_k_EmptyContainerError(::StringW  value) ;

/// @brief Method set_Capped, addr 0xb31d2fc, size 0x8, virtual false, abstract: false, final false
inline void set_Capped(bool  value) ;

/// @brief Method set_Container, addr 0xb31d1d0, size 0x8, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_FlipNormals, addr 0xb31d354, size 0x8, virtual false, abstract: false, final false
inline void set_FlipNormals(bool  value) ;

/// @brief Method set_Radius, addr 0xb31d314, size 0x14, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Range, addr 0xb31d338, size 0x14, virtual false, abstract: false, final false
inline void set_Range(::UnityEngine::Vector2  value) ;

/// @brief Method set_RebuildFrequency, addr 0xb31d20c, size 0x10, virtual false, abstract: false, final false
inline void set_RebuildFrequency(int32_t  value) ;

/// @brief Method set_RebuildOnSplineChange, addr 0xb31d1e8, size 0x14, virtual false, abstract: false, final false
inline void set_RebuildOnSplineChange(bool  value) ;

/// @brief Method set_SegmentsPerUnit, addr 0xb31d2d8, size 0x14, virtual false, abstract: false, final false
inline void set_SegmentsPerUnit(float_t  value) ;

/// @brief Method set_Shape, addr 0xb31d1b8, size 0x8, virtual false, abstract: false, final false
inline void set_Shape(::UnityEngine::Splines::IExtrudeShape*  value) ;

/// @brief Method set_Sides, addr 0xb31d22c, size 0x9c, virtual false, abstract: false, final false
inline void set_Sides(int32_t  value) ;

/// @brief Method set_targetMesh, addr 0xb31d364, size 0xac, virtual false, abstract: false, final false
inline void set_targetMesh(::UnityEngine::Mesh*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineExtrude() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineExtrude", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineExtrude(SplineExtrude && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineExtrude", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineExtrude(SplineExtrude const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27968};

/// [SerializeField]
/// [Tooltip("The Spline to extrude.")]
/// @brief Field m_Container, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Container;

/// [SerializeField]
/// [Tooltip("The mesh that should be extruded. If none, a temporary mesh will be created.")]
/// @brief Field m_TargetMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_TargetMesh;

/// [SerializeField]
/// [Tooltip("Enable to regenerate the extruded mesh when the target Spline is modified. Disable this option if the Spline will not be modified at runtime.")]
/// @brief Field m_RebuildOnSplineChange, offset: 0x30, size: 0x1, def value: None
 bool  ___m_RebuildOnSplineChange;

/// [SerializeField]
/// [Tooltip("The maximum number of times per-second that the mesh will be rebuilt.")]
/// @brief Field m_RebuildFrequency, offset: 0x34, size: 0x4, def value: None
 int32_t  ___m_RebuildFrequency;

/// [SerializeField]
/// [Tooltip("Automatically update any Mesh, Box, or Sphere collider components when the mesh is extruded.")]
/// @brief Field m_UpdateColliders, offset: 0x38, size: 0x1, def value: None
 bool  ___m_UpdateColliders;

/// [SerializeField]
/// [Tooltip("The number of sides that comprise the radius of the mesh.")]
/// @brief Field m_Sides, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___m_Sides;

/// [SerializeField]
/// [Tooltip("The number of edge loops that comprise the length of one unit of the mesh. The total number of sections is equal to \"Spline.GetLength() * segmentsPerUnit\".")]
/// @brief Field m_SegmentsPerUnit, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_SegmentsPerUnit;

/// [SerializeField]
/// [Tooltip("Indicates if the start and end of the mesh are filled. When the target Spline is closed or when the profile of the shape to extrude is concave, this setting is ignored.")]
/// @brief Field m_Capped, offset: 0x44, size: 0x1, def value: None
 bool  ___m_Capped;

/// [SerializeField]
/// [Tooltip("The radius of the extruded mesh.")]
/// @brief Field m_Radius, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_Radius;

/// [SerializeField]
/// [Tooltip("The section of the Spline to extrude.")]
/// @brief Field m_Range, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Range;

/// [SerializeField]
/// [Tooltip("Set true to reverse the winding order of vertices so that the face normals are inverted.")]
/// @brief Field m_FlipNormals, offset: 0x54, size: 0x1, def value: None
 bool  ___m_FlipNormals;

/// @brief Field m_Mesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_Mesh;

/// @brief Field m_NextScheduledRebuild, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_NextScheduledRebuild;

/// @brief Field m_AutosmoothAngle, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_AutosmoothAngle;

/// @brief Field m_RebuildRequested, offset: 0x68, size: 0x1, def value: None
 bool  ___m_RebuildRequested;

/// @brief Field m_CanCapEnds, offset: 0x69, size: 0x1, def value: None
 bool  ___m_CanCapEnds;

/// [SerializeReference]
/// @brief Field m_Shape, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Splines::IExtrudeShape*  ___m_Shape;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_TargetMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_RebuildOnSplineChange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_RebuildFrequency) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_UpdateColliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Sides) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_SegmentsPerUnit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Capped) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Radius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Range) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_FlipNormals) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Mesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_NextScheduledRebuild) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_AutosmoothAngle) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_RebuildRequested) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_CanCapEnds) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineExtrude, ___m_Shape) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineExtrude) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::Splines
