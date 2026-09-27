#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Drawing/zzzz__LabelAlignment_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_GizmoType_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_RenderMode_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_TextAlign_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoRenderer)
namespace Drawing {
struct CommandBuilder;
}
namespace GlobalNamespace {
class GizmoRenderer_GizmoInfo;
}
namespace GlobalNamespace {
struct GizmoRenderer_GizmoType;
}
namespace GlobalNamespace {
struct GizmoRenderer_RenderMode;
}
namespace GlobalNamespace {
struct GizmoRenderer_TextAlign;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GizmoRenderer;
}
namespace GlobalNamespace {
class GizmoRenderer_GizmoInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GizmoRenderer*);
MARK_REF_T(::GlobalNamespace::GizmoRenderer_GizmoInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoRenderer*, "", "GizmoRenderer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoRenderer_GizmoInfo*, "", "GizmoRenderer/GizmoInfo");
// Dependencies Drawing.CommandBuilder, Drawing.LabelAlignment, GizmoRenderer::GizmoInfo, GizmoRenderer::RenderMode, System.Action`2<T1, T2>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GizmoRenderer
class CORDL_TYPE GizmoRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GizmoInfo = ::GlobalNamespace::GizmoRenderer_GizmoInfo;

using GizmoType = ::GlobalNamespace::GizmoRenderer_GizmoType;

using RenderMode = ::GlobalNamespace::GizmoRenderer_RenderMode;

using TextAlign = ::GlobalNamespace::GizmoRenderer_TextAlign;

/// @brief Field gLabelAligns, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLabelAligns, put=setStaticF_gLabelAligns)) ::ArrayW<::Drawing::LabelAlignment>  gLabelAligns;

/// @brief Field gRenderFuncs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gRenderFuncs, put=setStaticF_gRenderFuncs)) ::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*>  gRenderFuncs;

/// @brief Field gSphereMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSphereMesh, put=setStaticF_gSphereMesh)) ::UnityW<::UnityEngine::Mesh>  gSphereMesh;

/// @brief Field gizmos, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gizmos, put=__cordl_internal_set_gizmos)) ::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*>  gizmos;

/// @brief Field includeInBuild, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeInBuild, put=__cordl_internal_set_includeInBuild)) bool  includeInBuild;

/// @brief Field renderMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderMode, put=__cordl_internal_set_renderMode)) ::GlobalNamespace::GizmoRenderer_RenderMode  renderMode;

/// @brief Method GetRandomColor, addr 0x5a1baf8, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetRandomColor() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitializeOnLoad, addr 0x5a1ba58, size 0xa0, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

static inline ::GlobalNamespace::GizmoRenderer* New_ctor() ;

/// @brief Method RenderBoxSolid, addr 0x5a1b38c, size 0xd8, virtual false, abstract: false, final false
static inline void RenderBoxSolid(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderBoxWire, addr 0x5a1b2b4, size 0xd8, virtual false, abstract: false, final false
static inline void RenderBoxWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderGizmos, addr 0x5a1acd0, size 0x350, virtual false, abstract: false, final false
inline void RenderGizmos() ;

/// @brief Method RenderGridWire, addr 0x5a1b1d0, size 0xe4, virtual false, abstract: false, final false
static inline void RenderGridWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderLabel2D, addr 0x5a1b8fc, size 0x15c, virtual false, abstract: false, final false
static inline void RenderLabel2D(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderLabel3D, addr 0x5a1b768, size 0x194, virtual false, abstract: false, final false
static inline void RenderLabel3D(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderPlaneSolid, addr 0x5a1b0f8, size 0xd8, virtual false, abstract: false, final false
static inline void RenderPlaneSolid(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderPlaneWire, addr 0x5a1b020, size 0xd8, virtual false, abstract: false, final false
static inline void RenderPlaneWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderSphereSolid, addr 0x5a1b520, size 0x248, virtual false, abstract: false, final false
static inline void RenderSphereSolid(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method RenderSphereWire, addr 0x5a1b464, size 0xbc, virtual false, abstract: false, final false
static inline void RenderSphereWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo) ;

/// @brief Method Update, addr 0x5a1accc, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*> const& __cordl_internal_get_gizmos() const;

constexpr ::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*>& __cordl_internal_get_gizmos() ;

constexpr bool const& __cordl_internal_get_includeInBuild() const;

constexpr bool& __cordl_internal_get_includeInBuild() ;

constexpr ::GlobalNamespace::GizmoRenderer_RenderMode const& __cordl_internal_get_renderMode() const;

constexpr ::GlobalNamespace::GizmoRenderer_RenderMode& __cordl_internal_get_renderMode() ;

constexpr void __cordl_internal_set_gizmos(::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*>  value) ;

constexpr void __cordl_internal_set_includeInBuild(bool  value) ;

constexpr void __cordl_internal_set_renderMode(::GlobalNamespace::GizmoRenderer_RenderMode  value) ;

/// @brief Method .ctor, addr 0x5a1bb98, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::Drawing::LabelAlignment> getStaticF_gLabelAligns() ;

static inline ::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*> getStaticF_gRenderFuncs() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_gSphereMesh() ;

static inline void setStaticF_gLabelAligns(::ArrayW<::Drawing::LabelAlignment>  value) ;

static inline void setStaticF_gRenderFuncs(::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*>  value) ;

static inline void setStaticF_gSphereMesh(::UnityW<::UnityEngine::Mesh>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoRenderer(GizmoRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoRenderer(GizmoRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2809};

/// @brief Field renderMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GizmoRenderer_RenderMode  ___renderMode;

/// @brief Field includeInBuild, offset: 0x24, size: 0x1, def value: None
 bool  ___includeInBuild;

/// @brief Field gizmos, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*>  ___gizmos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GizmoRenderer, ___renderMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer, ___includeInBuild) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer, ___gizmos) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GizmoRenderer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GizmoRenderer::GizmoType, GizmoRenderer::TextAlign, System.Object, Unity.Mathematics.float3, Unity.Mathematics.int2, Unity.Mathematics.quaternion, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: GizmoRenderer/GizmoInfo
class CORDL_TYPE GizmoRenderer_GizmoInfo : public ::System::Object {
public:
// Declarations
/// @brief Field center, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::Unity::Mathematics::float3  center;

/// @brief Field color, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field gridCells, offset 0x7c, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridCells, put=__cordl_internal_set_gridCells)) ::Unity::Mathematics::int2  gridCells;

/// @brief Field lineWidth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineWidth, put=__cordl_internal_set_lineWidth)) uint32_t  lineWidth;

/// @brief Field radius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field render, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_render, put=__cordl_internal_set_render)) bool  render;

/// @brief Field rotation, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::Unity::Mathematics::quaternion  rotation;

/// @brief Field size, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::Unity::Mathematics::float3  size;

/// @brief Field target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field text, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

/// @brief Field textAlign, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_textAlign, put=__cordl_internal_set_textAlign)) ::GlobalNamespace::GizmoRenderer_TextAlign  textAlign;

/// @brief Field textPPU, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_textPPU, put=__cordl_internal_set_textPPU)) uint32_t  textPPU;

/// @brief Field textSize, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_textSize, put=__cordl_internal_set_textSize)) float_t  textSize;

/// @brief Field type, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::GizmoRenderer_GizmoType  type;

static inline ::GlobalNamespace::GizmoRenderer_GizmoInfo* New_ctor() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_center() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::Unity::Mathematics::int2 const& __cordl_internal_get_gridCells() const;

constexpr ::Unity::Mathematics::int2& __cordl_internal_get_gridCells() ;

constexpr uint32_t const& __cordl_internal_get_lineWidth() const;

constexpr uint32_t& __cordl_internal_get_lineWidth() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr bool const& __cordl_internal_get_render() const;

constexpr bool& __cordl_internal_get_render() ;

constexpr ::Unity::Mathematics::quaternion const& __cordl_internal_get_rotation() const;

constexpr ::Unity::Mathematics::quaternion& __cordl_internal_get_rotation() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_size() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get_size() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr ::GlobalNamespace::GizmoRenderer_TextAlign const& __cordl_internal_get_textAlign() const;

constexpr ::GlobalNamespace::GizmoRenderer_TextAlign& __cordl_internal_get_textAlign() ;

constexpr uint32_t const& __cordl_internal_get_textPPU() const;

constexpr uint32_t& __cordl_internal_get_textPPU() ;

constexpr float_t const& __cordl_internal_get_textSize() const;

constexpr float_t& __cordl_internal_get_textSize() ;

constexpr ::GlobalNamespace::GizmoRenderer_GizmoType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::GizmoRenderer_GizmoType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_center(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_gridCells(::Unity::Mathematics::int2  value) ;

constexpr void __cordl_internal_set_lineWidth(uint32_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_render(bool  value) ;

constexpr void __cordl_internal_set_rotation(::Unity::Mathematics::quaternion  value) ;

constexpr void __cordl_internal_set_size(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

constexpr void __cordl_internal_set_textAlign(::GlobalNamespace::GizmoRenderer_TextAlign  value) ;

constexpr void __cordl_internal_set_textPPU(uint32_t  value) ;

constexpr void __cordl_internal_set_textSize(float_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::GizmoRenderer_GizmoType  value) ;

/// @brief Method .ctor, addr 0x5a1c0ac, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoRenderer_GizmoInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoRenderer_GizmoInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoRenderer_GizmoInfo(GizmoRenderer_GizmoInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoRenderer_GizmoInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoRenderer_GizmoInfo(GizmoRenderer_GizmoInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2805};

/// @brief Field render, offset: 0x10, size: 0x1, def value: None
 bool  ___render;

/// @brief Field type, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::GizmoRenderer_GizmoType  ___type;

/// @brief Field color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field lineWidth, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___lineWidth;

/// [Space]
/// @brief Field target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [Space]
/// @brief Field center, offset: 0x38, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ___center;

/// @brief Field size, offset: 0x44, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ___size;

/// @brief Field radius, offset: 0x50, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field rotation, offset: 0x54, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  ___rotation;

/// [Space]
/// @brief Field text, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field textSize, offset: 0x70, size: 0x4, def value: None
 float_t  ___textSize;

/// @brief Field textAlign, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::GizmoRenderer_TextAlign  ___textAlign;

/// @brief Field textPPU, offset: 0x78, size: 0x4, def value: None
 uint32_t  ___textPPU;

/// [Space]
/// @brief Field gridCells, offset: 0x7c, size: 0x8, def value: None
 ::Unity::Mathematics::int2  ___gridCells;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___render) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___type) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___lineWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___center) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___size) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___radius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___rotation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___text) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___textSize) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___textAlign) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___textPPU) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoInfo, ___gridCells) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GizmoRenderer_GizmoInfo) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
