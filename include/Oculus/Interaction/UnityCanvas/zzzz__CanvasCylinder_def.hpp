#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasCylinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasCylinder_MeshGenerationSettings_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMesh_def.hpp"
#include "Oculus/Interaction/zzzz__CylinderOrientation_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasCylinder)
namespace GlobalNamespace {
struct CanvasCylinder_MeshGenerationSettings;
}
namespace GlobalNamespace {
struct CanvasCylinder___c__DisplayClass31_0;
}
namespace Oculus::Interaction::Surfaces {
struct CylinderSegment;
}
namespace Oculus::Interaction::Surfaces {
class ICylinderClipper;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace Oculus::Interaction {
struct CylinderOrientation;
}
namespace Oculus::Interaction {
class Cylinder;
}
namespace Oculus::Interaction {
class ICurvedPlane;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class CanvasCylinder;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasCylinder*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasCylinder*, "Oculus.Interaction.UnityCanvas", "CanvasCylinder");
// Dependencies Oculus.Interaction.CylinderOrientation, Oculus.Interaction.UnityCanvas.CanvasCylinder::MeshGenerationSettings, Oculus.Interaction.UnityCanvas.CanvasMesh
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasCylinder
class CORDL_TYPE CanvasCylinder : public ::Oculus::Interaction::UnityCanvas::CanvasMesh {
public:
// Declarations
using MeshGenerationSettings = ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings;

using __c__DisplayClass31_0 = ::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0;

 __declspec(property(get=get_ArcDegrees, put=set_ArcDegrees)) float_t  ArcDegrees;

 __declspec(property(get=get_Bottom, put=set_Bottom)) float_t  Bottom;

 __declspec(property(get=get_Cylinder)) ::UnityW<::Oculus::Interaction::Cylinder>  Cylinder;

 __declspec(property(get=get_CylinderRelativeScale)) float_t  CylinderRelativeScale;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_Rotation, put=set_Rotation)) float_t  Rotation;

 __declspec(property(get=get_Top, put=set_Top)) float_t  Top;

/// @brief Field <ArcDegrees>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__ArcDegrees_k__BackingField, put=__cordl_internal_set__ArcDegrees_k__BackingField)) float_t  _ArcDegrees_k__BackingField;

/// @brief Field <Bottom>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Bottom_k__BackingField, put=__cordl_internal_set__Bottom_k__BackingField)) float_t  _Bottom_k__BackingField;

/// @brief Field <Rotation>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Rotation_k__BackingField, put=__cordl_internal_set__Rotation_k__BackingField)) float_t  _Rotation_k__BackingField;

/// @brief Field <Top>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Top_k__BackingField, put=__cordl_internal_set__Top_k__BackingField)) float_t  _Top_k__BackingField;

/// @brief Field _cylinder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cylinder, put=__cordl_internal_set__cylinder)) ::UnityW<::Oculus::Interaction::Cylinder>  _cylinder;

/// @brief Field _meshGeneration, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__meshGeneration, put=__cordl_internal_set__meshGeneration)) ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings  _meshGeneration;

/// @brief Field _orientation, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__orientation, put=__cordl_internal_set__orientation)) ::Oculus::Interaction::CylinderOrientation  _orientation;

/// @brief Convert operator to "::Oculus::Interaction::ICurvedPlane"
constexpr operator  ::Oculus::Interaction::ICurvedPlane*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ICylinderClipper"
constexpr operator  ::Oculus::Interaction::Surfaces::ICylinderClipper*() noexcept;

/// @brief Method GenerateMesh, addr 0xa48f2fc, size 0x5bc, virtual true, abstract: false, final false
inline void GenerateMesh(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  verts, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  tris, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>  uvs) ;

/// @brief Method GetCylinderSegment, addr 0xa48e958, size 0x64, virtual true, abstract: false, final true
inline bool GetCylinderSegment(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  segment) ;

/// @brief Method GetWorldSize, addr 0xa48f8b8, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetWorldSize() ;

/// @brief Method InjectAllCanvasCylinder, addr 0xa48fdb8, size 0x58, virtual false, abstract: false, final false
inline void InjectAllCanvasCylinder(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshFilter*  meshFilter, ::Oculus::Interaction::Cylinder*  cylinder, ::Oculus::Interaction::CylinderOrientation  orientation) ;

/// @brief Method InjectCylinder, addr 0xa48fe40, size 0x8, virtual false, abstract: false, final false
inline void InjectCylinder(::Oculus::Interaction::Cylinder*  cylinder) ;

/// @brief Method InjectOrientation, addr 0xa48fe48, size 0x8, virtual false, abstract: false, final false
inline void InjectOrientation(::Oculus::Interaction::CylinderOrientation  orientation) ;

/// @brief Method MeshInverseTransform, addr 0xa48f2c0, size 0x3c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 MeshInverseTransform(::UnityEngine::Vector3  localPosition) ;

static inline ::Oculus::Interaction::UnityCanvas::CanvasCylinder* New_ctor() ;

/// @brief Method Start, addr 0xa48e9bc, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCurvedPlane, addr 0xa48f1d8, size 0xe8, virtual false, abstract: false, final false
inline void UpdateCurvedPlane() ;

/// @brief Method UpdateImposter, addr 0xa48ea54, size 0x20, virtual true, abstract: false, final false
inline void UpdateImposter() ;

/// @brief Method UpdateMeshPosition, addr 0xa48ec30, size 0x5a8, virtual false, abstract: false, final false
inline void UpdateMeshPosition() ;

/// [CompilerGenerated]
/// @brief Method <GenerateMesh>g__GetClampedResolution|31_0, addr 0xa48fae8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int _GenerateMesh_g__GetClampedResolution_31_0(float_t  arcMax, float_t  axisMax, ::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <GenerateMesh>g__GetCurvedPoint|31_1, addr 0xa48fcdc, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _GenerateMesh_g__GetCurvedPoint_31_1(float_t  u, float_t  v, ::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__28_0, addr 0xa48fe78, size 0x2c, virtual false, abstract: false, final false
inline void _Start_b__28_0() ;

constexpr float_t const& __cordl_internal_get__ArcDegrees_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ArcDegrees_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Bottom_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Bottom_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Rotation_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Rotation_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Top_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Top_k__BackingField() ;

constexpr ::UnityW<::Oculus::Interaction::Cylinder> const& __cordl_internal_get__cylinder() const;

constexpr ::UnityW<::Oculus::Interaction::Cylinder>& __cordl_internal_get__cylinder() ;

constexpr ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings const& __cordl_internal_get__meshGeneration() const;

constexpr ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings& __cordl_internal_get__meshGeneration() ;

constexpr ::Oculus::Interaction::CylinderOrientation const& __cordl_internal_get__orientation() const;

constexpr ::Oculus::Interaction::CylinderOrientation& __cordl_internal_get__orientation() ;

constexpr void __cordl_internal_set__ArcDegrees_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Bottom_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Rotation_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Top_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__cylinder(::UnityW<::Oculus::Interaction::Cylinder>  value) ;

constexpr void __cordl_internal_set__meshGeneration(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings  value) ;

constexpr void __cordl_internal_set__orientation(::Oculus::Interaction::CylinderOrientation  value) ;

/// @brief Method .ctor, addr 0xa48fe50, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ArcDegrees, addr 0xa48e8c0, size 0x8, virtual true, abstract: false, final true
inline float_t get_ArcDegrees() ;

/// [CompilerGenerated]
/// @brief Method get_Bottom, addr 0xa48e8e0, size 0x8, virtual true, abstract: false, final true
inline float_t get_Bottom() ;

/// @brief Method get_Cylinder, addr 0xa48e8b8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::Oculus::Interaction::Cylinder> get_Cylinder() ;

/// @brief Method get_CylinderRelativeScale, addr 0xa48e900, size 0x58, virtual false, abstract: false, final false
inline float_t get_CylinderRelativeScale() ;

/// @brief Method get_Radius, addr 0xa48e8a0, size 0x18, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// [CompilerGenerated]
/// @brief Method get_Rotation, addr 0xa48e8d0, size 0x8, virtual true, abstract: false, final true
inline float_t get_Rotation() ;

/// [CompilerGenerated]
/// @brief Method get_Top, addr 0xa48e8f0, size 0x8, virtual true, abstract: false, final true
inline float_t get_Top() ;

/// @brief Convert to "::Oculus::Interaction::ICurvedPlane"
constexpr ::Oculus::Interaction::ICurvedPlane* i___Oculus__Interaction__ICurvedPlane() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ICylinderClipper"
constexpr ::Oculus::Interaction::Surfaces::ICylinderClipper* i___Oculus__Interaction__Surfaces__ICylinderClipper() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ArcDegrees, addr 0xa48e8c8, size 0x8, virtual false, abstract: false, final false
inline void set_ArcDegrees(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Bottom, addr 0xa48e8e8, size 0x8, virtual false, abstract: false, final false
inline void set_Bottom(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Rotation, addr 0xa48e8d8, size 0x8, virtual false, abstract: false, final false
inline void set_Rotation(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Top, addr 0xa48e8f8, size 0x8, virtual false, abstract: false, final false
inline void set_Top(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasCylinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasCylinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasCylinder(CanvasCylinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasCylinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasCylinder(CanvasCylinder const& ) = delete;

/// @brief Field MIN_RESOLUTION offset 0xffffffff size 0x4
static constexpr int32_t  MIN_RESOLUTION{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16050};

/// [SerializeField]
/// [Tooltip("The cylinder used to dictate the position and radius of the mesh.")]
/// @brief Field _cylinder, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Cylinder>  ____cylinder;

/// [SerializeField]
/// [Tooltip("Determines how the mesh is projected on the cylinder wall. Vertical results in a left-to-right curvature, Horizontal results in a top-to-bottom curvature.")]
/// @brief Field _orientation, offset: 0x48, size: 0x4, def value: None
 ::Oculus::Interaction::CylinderOrientation  ____orientation;

/// [SerializeField]
/// @brief Field _meshGeneration, offset: 0x4c, size: 0xc, def value: None
 ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings  ____meshGeneration;

/// [CompilerGenerated]
/// @brief Field <ArcDegrees>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____ArcDegrees_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Rotation>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____Rotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Bottom>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____Bottom_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Top>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____Top_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____cylinder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____orientation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____meshGeneration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____ArcDegrees_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____Rotation_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____Bottom_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasCylinder, ____Top_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasCylinder) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
