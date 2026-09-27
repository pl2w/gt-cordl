#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/DebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugGizmos)
namespace GlobalNamespace {
struct DebugGizmos_ColorScope;
}
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class PolylineRenderer;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
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
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class DebugGizmos;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*, "Meta.XR.ImmersiveDebugger.Gizmo", "DebugGizmos");
// [ExecuteAlways]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos
class CORDL_TYPE DebugGizmos : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColorScope = ::GlobalNamespace::DebugGizmos_ColorScope;

/// @brief Field CUBE_POINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CUBE_POINTS, put=setStaticF_CUBE_POINTS)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  CUBE_POINTS;

/// @brief Field CUBE_SEGMENTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CUBE_SEGMENTS, put=setStaticF_CUBE_SEGMENTS)) ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  CUBE_SEGMENTS;

/// @brief Field Color, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Color, put=setStaticF_Color)) ::UnityEngine::Color  Color;

/// @brief Field LineWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LineWidth, put=setStaticF_LineWidth)) float_t  LineWidth;

/// @brief Field PLANE_POINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PLANE_POINTS, put=setStaticF_PLANE_POINTS)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  PLANE_POINTS;

/// @brief Field PLANE_SEGMENTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PLANE_SEGMENTS, put=setStaticF_PLANE_SEGMENTS)) ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  PLANE_SEGMENTS;

 __declspec(property(get=get_Renderer)) ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*  Renderer;

/// @brief Field _addedSegmentSinceLastUpdate, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__addedSegmentSinceLastUpdate, put=__cordl_internal_set__addedSegmentSinceLastUpdate)) bool  _addedSegmentSinceLastUpdate;

/// @brief Field _colors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  _colors;

/// @brief Field _index, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _points, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  _points;

/// @brief Field _polylineRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__polylineRenderer, put=__cordl_internal_set__polylineRenderer)) ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*  _polylineRenderer;

/// @brief Field _renderSinglePass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__renderSinglePass, put=setStaticF__renderSinglePass)) bool  _renderSinglePass;

/// @brief Field _root, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__root, put=setStaticF__root)) ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>  _root;

/// @brief Method AddSegment, addr 0x9ef9508, size 0x270, virtual false, abstract: false, final false
inline void AddSegment(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  width, ::UnityEngine::Color  color0, ::UnityEngine::Color  color1) ;

/// @brief Method ClearSegments, addr 0x9ef91fc, size 0x8, virtual false, abstract: false, final false
inline void ClearSegments() ;

/// @brief Method DrawAxis, addr 0x9efa208, size 0xa4, virtual false, abstract: false, final false
static inline void DrawAxis(::UnityEngine::Pose  pose, float_t  size) ;

/// @brief Method DrawAxis, addr 0x9ef9ea8, size 0x2d0, virtual false, abstract: false, final false
static inline void DrawAxis(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size) ;

/// @brief Method DrawAxis, addr 0x9efa2ac, size 0xf8, virtual false, abstract: false, final false
static inline void DrawAxis(::UnityEngine::Transform*  t, float_t  size) ;

/// @brief Method DrawBox, addr 0x9efb260, size 0xec, virtual false, abstract: false, final false
static inline void DrawBox(::UnityEngine::Pose  pose, float_t  width, float_t  height, float_t  depth, bool  isPivotTopSurface) ;

/// @brief Method DrawBox, addr 0x9efaa7c, size 0x7e4, virtual false, abstract: false, final false
static inline void DrawBox(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  width, float_t  height, float_t  depth, bool  isPivotTopSurface) ;

/// @brief Method DrawLine, addr 0x9ef99f4, size 0x158, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Transform*  t) ;

/// @brief Method DrawPlane, addr 0x9efa9ac, size 0xd0, virtual false, abstract: false, final false
static inline void DrawPlane(::UnityEngine::Pose  pose, float_t  width, float_t  height) ;

/// @brief Method DrawPlane, addr 0x9efa3a4, size 0x608, virtual false, abstract: false, final false
static inline void DrawPlane(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  width, float_t  height) ;

/// @brief Method DrawPoint, addr 0x9ef98d4, size 0x120, virtual false, abstract: false, final false
static inline void DrawPoint(::UnityEngine::Vector3  p0, ::UnityEngine::Transform*  t) ;

/// @brief Method DrawWireCube, addr 0x9ef9b4c, size 0x35c, virtual false, abstract: false, final false
static inline void DrawWireCube(::UnityEngine::Vector3  center, float_t  size, ::UnityEngine::Transform*  t) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method Init, addr 0x9ef8720, size 0x94, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method LateUpdate, addr 0x9ef94a0, size 0x68, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos* New_ctor() ;

/// @brief Method OnDisable, addr 0x9ef90ac, size 0x70, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9ef8a4c, size 0x10c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RenderSegments, addr 0x9ef9204, size 0x34, virtual false, abstract: false, final false
inline void RenderSegments() ;

constexpr bool const& __cordl_internal_get__addedSegmentSinceLastUpdate() const;

constexpr bool& __cordl_internal_get__addedSegmentSinceLastUpdate() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get__colors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get__colors() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get__points() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get__points() ;

constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* const& __cordl_internal_get__polylineRenderer() const;

constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*& __cordl_internal_get__polylineRenderer() ;

constexpr void __cordl_internal_set__addedSegmentSinceLastUpdate(bool  value) ;

constexpr void __cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set__polylineRenderer(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*  value) ;

/// @brief Method .ctor, addr 0x9efb34c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* getStaticF_CUBE_POINTS() ;

static inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* getStaticF_CUBE_SEGMENTS() ;

static inline ::UnityEngine::Color getStaticF_Color() ;

static inline float_t getStaticF_LineWidth() ;

static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* getStaticF_PLANE_POINTS() ;

static inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* getStaticF_PLANE_SEGMENTS() ;

static inline bool getStaticF__renderSinglePass() ;

static inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> getStaticF__root() ;

/// @brief Method get_RenderSinglePass, addr 0x9ef9778, size 0x58, virtual false, abstract: false, final false
static inline bool get_RenderSinglePass() ;

/// @brief Method get_Renderer, addr 0x9ef8b58, size 0xa4, virtual false, abstract: false, final false
inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* get_Renderer() ;

/// @brief Method get_Root, addr 0x9ef87b4, size 0x298, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> get_Root() ;

static inline void setStaticF_CUBE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF_CUBE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>*  value) ;

static inline void setStaticF_Color(::UnityEngine::Color  value) ;

static inline void setStaticF_LineWidth(float_t  value) ;

static inline void setStaticF_PLANE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  value) ;

static inline void setStaticF_PLANE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>*  value) ;

static inline void setStaticF__renderSinglePass(bool  value) ;

static inline void setStaticF__root(::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>  value) ;

/// @brief Method set_RenderSinglePass, addr 0x9ef97d0, size 0x104, virtual false, abstract: false, final false
static inline void set_RenderSinglePass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugGizmos(DebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugGizmos(DebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27538};

/// @brief Field _points, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ____points;

/// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ____colors;

/// @brief Field _index, offset: 0x30, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _addedSegmentSinceLastUpdate, offset: 0x34, size: 0x1, def value: None
 bool  ____addedSegmentSinceLastUpdate;

/// @brief Field _polylineRenderer, offset: 0x38, size: 0x8, def value: None
 ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*  ____polylineRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____addedSegmentSinceLastUpdate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____polylineRenderer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos) == 0x40, "Size mismatch!");

} // namespace end def Meta::XR::ImmersiveDebugger::Gizmo
