#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubeRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__TubeRenderer_VertexLayout_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeRenderer)
namespace GlobalNamespace {
struct TubeRenderer_VertexLayout;
}
namespace GlobalNamespace {
struct TubeRenderer___c__DisplayClass76_0;
}
namespace Oculus::Interaction {
struct TubePoint;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
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
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TubeRenderer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TubeRenderer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TubeRenderer*, "Oculus.Interaction", "TubeRenderer");
// Dependencies Oculus.Interaction.TubeRenderer::VertexLayout, Unity.Collections.NativeArray`1<T>, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Rendering.VertexAttributeDescriptor, UnityEngine.Vector2
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TubeRenderer
class CORDL_TYPE TubeRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VertexLayout = ::GlobalNamespace::TubeRenderer_VertexLayout;

using __c__DisplayClass76_0 = ::GlobalNamespace::TubeRenderer___c__DisplayClass76_0;

 __declspec(property(get=get_EndFadeThresold, put=set_EndFadeThresold)) float_t  EndFadeThresold;

 __declspec(property(get=get_Feather, put=set_Feather)) float_t  Feather;

 __declspec(property(get=get_Gradient, put=set_Gradient)) ::UnityEngine::Gradient*  Gradient;

 __declspec(property(get=get_InvertThreshold, put=set_InvertThreshold)) bool  InvertThreshold;

 __declspec(property(get=get_MirrorTexture, put=set_MirrorTexture)) bool  MirrorTexture;

 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

 __declspec(property(get=get_ProgressFade, put=set_ProgressFade)) float_t  ProgressFade;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_RenderOffset, put=set_RenderOffset)) ::UnityEngine::Vector2  RenderOffset;

 __declspec(property(get=get_RenderQueue, put=set_RenderQueue)) int32_t  RenderQueue;

 __declspec(property(get=get_StartFadeThresold, put=set_StartFadeThresold)) float_t  StartFadeThresold;

 __declspec(property(get=get_Tint, put=set_Tint)) ::UnityEngine::Color  Tint;

 __declspec(property(get=get_TotalLength)) float_t  TotalLength;

/// @brief Field <Progress>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__Progress_k__BackingField, put=__cordl_internal_set__Progress_k__BackingField)) float_t  _Progress_k__BackingField;

/// @brief Field _bevel, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__bevel, put=__cordl_internal_set__bevel)) int32_t  _bevel;

/// @brief Field _dataLayout, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataLayout, put=__cordl_internal_set__dataLayout)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  _dataLayout;

/// @brief Field _divisions, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__divisions, put=__cordl_internal_set__divisions)) int32_t  _divisions;

/// @brief Field _endFadeThresold, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__endFadeThresold, put=__cordl_internal_set__endFadeThresold)) float_t  _endFadeThresold;

/// @brief Field _fadeLimitsShaderID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__fadeLimitsShaderID, put=setStaticF__fadeLimitsShaderID)) int32_t  _fadeLimitsShaderID;

/// @brief Field _fadeSignShaderID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__fadeSignShaderID, put=setStaticF__fadeSignShaderID)) int32_t  _fadeSignShaderID;

/// @brief Field _feather, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__feather, put=__cordl_internal_set__feather)) float_t  _feather;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::MeshFilter>  _filter;

/// @brief Field _gradient, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__gradient, put=__cordl_internal_set__gradient)) ::UnityEngine::Gradient*  _gradient;

/// @brief Field _hidden, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get__hidden, put=__cordl_internal_set__hidden)) bool  _hidden;

/// @brief Field _initializedSteps, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__initializedSteps, put=__cordl_internal_set__initializedSteps)) int32_t  _initializedSteps;

/// @brief Field _invertThreshold, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertThreshold, put=__cordl_internal_set__invertThreshold)) bool  _invertThreshold;

/// @brief Field _layout, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get__layout, put=__cordl_internal_set__layout)) ::GlobalNamespace::TubeRenderer_VertexLayout  _layout;

/// @brief Field _mesh, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _mirrorTexture, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__mirrorTexture, put=__cordl_internal_set__mirrorTexture)) bool  _mirrorTexture;

/// @brief Field _offsetFactorShaderPropertyID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__offsetFactorShaderPropertyID, put=setStaticF__offsetFactorShaderPropertyID)) int32_t  _offsetFactorShaderPropertyID;

/// @brief Field _offsetUnitsShaderPropertyID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__offsetUnitsShaderPropertyID, put=setStaticF__offsetUnitsShaderPropertyID)) int32_t  _offsetUnitsShaderPropertyID;

/// @brief Field _progressFade, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressFade, put=__cordl_internal_set__progressFade)) float_t  _progressFade;

/// @brief Field _radius, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _renderOffset, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderOffset, put=__cordl_internal_set__renderOffset)) ::UnityEngine::Vector2  _renderOffset;

/// @brief Field _renderQueue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderQueue, put=__cordl_internal_set__renderQueue)) int32_t  _renderQueue;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer>  _renderer;

/// @brief Field _startFadeThresold, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__startFadeThresold, put=__cordl_internal_set__startFadeThresold)) float_t  _startFadeThresold;

/// @brief Field _tint, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__tint, put=__cordl_internal_set__tint)) ::UnityEngine::Color  _tint;

/// @brief Field _totalLength, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalLength, put=__cordl_internal_set__totalLength)) float_t  _totalLength;

/// @brief Field _tris, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tris, put=__cordl_internal_set__tris)) ::ArrayW<int32_t>  _tris;

/// @brief Field _vertsCount, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__vertsCount, put=__cordl_internal_set__vertsCount)) int32_t  _vertsCount;

/// @brief Field _vertsData, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__vertsData, put=__cordl_internal_set__vertsData)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout>  _vertsData;

/// @brief Method Awake, addr 0xa401594, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BevelCap, addr 0xa4020ec, size 0x1a4, virtual false, abstract: false, final false
inline void BevelCap(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, bool  end, int32_t  indexOffset) ;

/// @brief Method Hide, addr 0xa401da8, size 0x30, virtual false, abstract: false, final false
inline void Hide() ;

/// @brief Method InitializeMeshData, addr 0xa4015f8, size 0x25c, virtual false, abstract: false, final false
inline void InitializeMeshData(int32_t  steps) ;

/// @brief Method InjectAllTubeRenderer, addr 0xa402678, size 0x48, virtual false, abstract: false, final false
inline void InjectAllTubeRenderer(::UnityEngine::MeshFilter*  filter, ::UnityEngine::MeshRenderer*  renderer, int32_t  divisions, int32_t  bevel) ;

/// @brief Method InjectBevel, addr 0xa4026d8, size 0x8, virtual false, abstract: false, final false
inline void InjectBevel(int32_t  bevel) ;

/// @brief Method InjectDivisions, addr 0xa4026d0, size 0x8, virtual false, abstract: false, final false
inline void InjectDivisions(int32_t  divisions) ;

/// @brief Method InjectFilter, addr 0xa4026c0, size 0x8, virtual false, abstract: false, final false
inline void InjectFilter(::UnityEngine::MeshFilter*  filter) ;

/// @brief Method InjectRenderer, addr 0xa4026c8, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::MeshRenderer*  renderer) ;

static inline ::Oculus::Interaction::TubeRenderer* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4015dc, size 0x1c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4015b4, size 0x28, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RedrawFadeThresholds, addr 0xa402420, size 0x1b8, virtual false, abstract: false, final false
inline void RedrawFadeThresholds() ;

/// @brief Method RenderTube, addr 0xa401278, size 0xdc, virtual false, abstract: false, final false
inline void RenderTube(::ArrayW<::Oculus::Interaction::TubePoint>  points, ::UnityEngine::Space  space) ;

/// @brief Method Reset, addr 0xa401504, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetVertexCount, addr 0xa401e04, size 0x1e0, virtual false, abstract: false, final false
inline int32_t SetVertexCount(int32_t  positionCount, int32_t  divisions, int32_t  bevelCap) ;

/// @brief Method Show, addr 0xa401dd8, size 0x2c, virtual false, abstract: false, final false
inline void Show() ;

/// @brief Method UpdateMeshData, addr 0xa401854, size 0x554, virtual false, abstract: false, final false
inline void UpdateMeshData(::ArrayW<::Oculus::Interaction::TubePoint>  points, ::UnityEngine::Space  space) ;

/// @brief Method WriteCircle, addr 0xa402290, size 0x190, virtual false, abstract: false, final false
inline void WriteCircle(::UnityEngine::Vector3  point, ::UnityEngine::Quaternion  rotation, float_t  width, int32_t  index, float_t  progress) ;

/// [CompilerGenerated]
/// @brief Method <SetVertexCount>g__Cap|80_0, addr 0xa4025d8, size 0xa0, virtual false, abstract: false, final false
inline void _SetVertexCount_g__Cap_80_0(int32_t  t, int32_t  firstVert, int32_t  lastVert, bool  clockwise) ;

/// [CompilerGenerated]
/// @brief Method <UpdateMeshData>g__TransformPose|76_0, addr 0xa401fe4, size 0x108, virtual false, abstract: false, final false
static inline void _UpdateMeshData_g__TransformPose_76_0(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::TubePoint>  tubePoint, ::by_ref<::UnityEngine::Pose>  pose, ::by_ref<::GlobalNamespace::TubeRenderer___c__DisplayClass76_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr float_t const& __cordl_internal_get__Progress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Progress_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__bevel() const;

constexpr int32_t& __cordl_internal_get__bevel() ;

constexpr ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> const& __cordl_internal_get__dataLayout() const;

constexpr ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>& __cordl_internal_get__dataLayout() ;

constexpr int32_t const& __cordl_internal_get__divisions() const;

constexpr int32_t& __cordl_internal_get__divisions() ;

constexpr float_t const& __cordl_internal_get__endFadeThresold() const;

constexpr float_t& __cordl_internal_get__endFadeThresold() ;

constexpr float_t const& __cordl_internal_get__feather() const;

constexpr float_t& __cordl_internal_get__feather() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__filter() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient() ;

constexpr bool const& __cordl_internal_get__hidden() const;

constexpr bool& __cordl_internal_get__hidden() ;

constexpr int32_t const& __cordl_internal_get__initializedSteps() const;

constexpr int32_t& __cordl_internal_get__initializedSteps() ;

constexpr bool const& __cordl_internal_get__invertThreshold() const;

constexpr bool& __cordl_internal_get__invertThreshold() ;

constexpr ::GlobalNamespace::TubeRenderer_VertexLayout const& __cordl_internal_get__layout() const;

constexpr ::GlobalNamespace::TubeRenderer_VertexLayout& __cordl_internal_get__layout() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr bool const& __cordl_internal_get__mirrorTexture() const;

constexpr bool& __cordl_internal_get__mirrorTexture() ;

constexpr float_t const& __cordl_internal_get__progressFade() const;

constexpr float_t& __cordl_internal_get__progressFade() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__renderOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__renderOffset() ;

constexpr int32_t const& __cordl_internal_get__renderQueue() const;

constexpr int32_t& __cordl_internal_get__renderQueue() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get__startFadeThresold() const;

constexpr float_t& __cordl_internal_get__startFadeThresold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__tint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__tint() ;

constexpr float_t const& __cordl_internal_get__totalLength() const;

constexpr float_t& __cordl_internal_get__totalLength() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__tris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__tris() ;

constexpr int32_t const& __cordl_internal_get__vertsCount() const;

constexpr int32_t& __cordl_internal_get__vertsCount() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout> const& __cordl_internal_get__vertsData() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout>& __cordl_internal_get__vertsData() ;

constexpr void __cordl_internal_set__Progress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__bevel(int32_t  value) ;

constexpr void __cordl_internal_set__dataLayout(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

constexpr void __cordl_internal_set__divisions(int32_t  value) ;

constexpr void __cordl_internal_set__endFadeThresold(float_t  value) ;

constexpr void __cordl_internal_set__feather(float_t  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__hidden(bool  value) ;

constexpr void __cordl_internal_set__initializedSteps(int32_t  value) ;

constexpr void __cordl_internal_set__invertThreshold(bool  value) ;

constexpr void __cordl_internal_set__layout(::GlobalNamespace::TubeRenderer_VertexLayout  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__mirrorTexture(bool  value) ;

constexpr void __cordl_internal_set__progressFade(float_t  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__renderOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__renderQueue(int32_t  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__startFadeThresold(float_t  value) ;

constexpr void __cordl_internal_set__tint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__totalLength(float_t  value) ;

constexpr void __cordl_internal_set__tris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__vertsCount(int32_t  value) ;

constexpr void __cordl_internal_set__vertsData(::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout>  value) ;

/// @brief Method .ctor, addr 0xa4026e0, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__fadeLimitsShaderID() ;

static inline int32_t getStaticF__fadeSignShaderID() ;

static inline int32_t getStaticF__offsetFactorShaderPropertyID() ;

static inline int32_t getStaticF__offsetUnitsShaderPropertyID() ;

/// @brief Method get_EndFadeThresold, addr 0xa4014ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_EndFadeThresold() ;

/// @brief Method get_Feather, addr 0xa4014cc, size 0x8, virtual false, abstract: false, final false
inline float_t get_Feather() ;

/// @brief Method get_Gradient, addr 0xa401464, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_Gradient() ;

/// @brief Method get_InvertThreshold, addr 0xa4014bc, size 0x8, virtual false, abstract: false, final false
inline bool get_InvertThreshold() ;

/// @brief Method get_MirrorTexture, addr 0xa4014dc, size 0x8, virtual false, abstract: false, final false
inline bool get_MirrorTexture() ;

/// [CompilerGenerated]
/// @brief Method get_Progress, addr 0xa4014ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Method get_ProgressFade, addr 0xa40148c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ProgressFade() ;

/// @brief Method get_Radius, addr 0xa401454, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_RenderOffset, addr 0xa401444, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_RenderOffset() ;

/// @brief Method get_RenderQueue, addr 0xa401434, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RenderQueue() ;

/// @brief Method get_StartFadeThresold, addr 0xa40149c, size 0x8, virtual false, abstract: false, final false
inline float_t get_StartFadeThresold() ;

/// @brief Method get_Tint, addr 0xa401474, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Tint() ;

/// @brief Method get_TotalLength, addr 0xa4014fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_TotalLength() ;

static inline void setStaticF__fadeLimitsShaderID(int32_t  value) ;

static inline void setStaticF__fadeSignShaderID(int32_t  value) ;

static inline void setStaticF__offsetFactorShaderPropertyID(int32_t  value) ;

static inline void setStaticF__offsetUnitsShaderPropertyID(int32_t  value) ;

/// @brief Method set_EndFadeThresold, addr 0xa4014b4, size 0x8, virtual false, abstract: false, final false
inline void set_EndFadeThresold(float_t  value) ;

/// @brief Method set_Feather, addr 0xa4014d4, size 0x8, virtual false, abstract: false, final false
inline void set_Feather(float_t  value) ;

/// @brief Method set_Gradient, addr 0xa40146c, size 0x8, virtual false, abstract: false, final false
inline void set_Gradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_InvertThreshold, addr 0xa4014c4, size 0x8, virtual false, abstract: false, final false
inline void set_InvertThreshold(bool  value) ;

/// @brief Method set_MirrorTexture, addr 0xa4014e4, size 0x8, virtual false, abstract: false, final false
inline void set_MirrorTexture(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Progress, addr 0xa4014f4, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

/// @brief Method set_ProgressFade, addr 0xa401494, size 0x8, virtual false, abstract: false, final false
inline void set_ProgressFade(float_t  value) ;

/// @brief Method set_Radius, addr 0xa40145c, size 0x8, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_RenderOffset, addr 0xa40144c, size 0x8, virtual false, abstract: false, final false
inline void set_RenderOffset(::UnityEngine::Vector2  value) ;

/// @brief Method set_RenderQueue, addr 0xa40143c, size 0x8, virtual false, abstract: false, final false
inline void set_RenderQueue(int32_t  value) ;

/// @brief Method set_StartFadeThresold, addr 0xa4014a4, size 0x8, virtual false, abstract: false, final false
inline void set_StartFadeThresold(float_t  value) ;

/// @brief Method set_Tint, addr 0xa401480, size 0xc, virtual false, abstract: false, final false
inline void set_Tint(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TubeRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TubeRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TubeRenderer(TubeRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TubeRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TubeRenderer(TubeRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15703};

/// [Tooltip("The Mesh Filter that\'s included in the ReticleLine prefab.")]
/// [SerializeField]
/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____filter;

/// [Tooltip("The Mesh Renderer that\'s included in the ReticleLine prefab.")]
/// [SerializeField]
/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____renderer;

/// [Tooltip("The number of divisions to use when calculating the tube mesh\'s vertices.")]
/// [SerializeField]
/// @brief Field _divisions, offset: 0x30, size: 0x4, def value: None
 int32_t  ____divisions;

/// [Tooltip("The number of bevels to use when calculating the tube mesh\'s vertices.")]
/// [SerializeField]
/// @brief Field _bevel, offset: 0x34, size: 0x4, def value: None
 int32_t  ____bevel;

/// [Tooltip("Unity shader queue that determines when the tube is rendered. Defaults to -1, which uses the render queue of the shader.")]
/// [SerializeField]
/// @brief Field _renderQueue, offset: 0x38, size: 0x4, def value: None
 int32_t  ____renderQueue;

/// [SerializeField]
/// @brief Field _renderOffset, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____renderOffset;

/// [Tooltip("The thickness of the tube.")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x44, size: 0x4, def value: None
 float_t  ____radius;

/// [Tooltip("The gradient of the tube.")]
/// [SerializeField]
/// @brief Field _gradient, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____gradient;

/// [Tooltip("The color of the tube.")]
/// [SerializeField]
/// @brief Field _tint, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____tint;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _progressFade, offset: 0x60, size: 0x4, def value: None
 float_t  ____progressFade;

/// [Tooltip("Defines the length of the transparent portion at the beginning of the tube. The higher the value, the longer the transparent portion.")]
/// [SerializeField]
/// @brief Field _startFadeThresold, offset: 0x64, size: 0x4, def value: None
 float_t  ____startFadeThresold;

/// [Tooltip("Defines the length of the transparent portion at the end of the tube. The higher the value, the longer the transparent portion.")]
/// [SerializeField]
/// @brief Field _endFadeThresold, offset: 0x68, size: 0x4, def value: None
 float_t  ____endFadeThresold;

/// [Tooltip("Should the transparent portion of the tube be in the middle instead of at the beginning and end?")]
/// [SerializeField]
/// @brief Field _invertThreshold, offset: 0x6c, size: 0x1, def value: None
 bool  ____invertThreshold;

/// [SerializeField]
/// @brief Field _feather, offset: 0x70, size: 0x4, def value: None
 float_t  ____feather;

/// [SerializeField]
/// @brief Field _mirrorTexture, offset: 0x74, size: 0x1, def value: None
 bool  ____mirrorTexture;

/// [CompilerGenerated]
/// @brief Field <Progress>k__BackingField, offset: 0x78, size: 0x4, def value: None
 float_t  ____Progress_k__BackingField;

/// @brief Field _dataLayout, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  ____dataLayout;

/// @brief Field _vertsData, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout>  ____vertsData;

/// @brief Field _layout, offset: 0x98, size: 0x18, def value: None
 ::GlobalNamespace::TubeRenderer_VertexLayout  ____layout;

/// @brief Field _mesh, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _tris, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____tris;

/// @brief Field _initializedSteps, offset: 0xc0, size: 0x4, def value: None
 int32_t  ____initializedSteps;

/// @brief Field _vertsCount, offset: 0xc4, size: 0x4, def value: None
 int32_t  ____vertsCount;

/// @brief Field _totalLength, offset: 0xc8, size: 0x4, def value: None
 float_t  ____totalLength;

/// @brief Field _hidden, offset: 0xcc, size: 0x1, def value: None
 bool  ____hidden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____divisions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____bevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____renderQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____renderOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____radius) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____gradient) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____tint) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____progressFade) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____startFadeThresold) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____endFadeThresold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____invertThreshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____feather) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____mirrorTexture) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____Progress_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____dataLayout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____vertsData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____layout) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____mesh) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____tris) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____initializedSteps) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____vertsCount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____totalLength) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubeRenderer, ____hidden) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TubeRenderer) == 0xd0, "Size mismatch!");

} // namespace end def Oculus::Interaction
