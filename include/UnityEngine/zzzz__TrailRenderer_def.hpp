#pragma once
// IWYU pragma private; include "UnityEngine/TrailRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrailRenderer)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct LineAlignment;
}
namespace UnityEngine {
struct LineTextureMode;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class TrailRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::TrailRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TrailRenderer*, "UnityEngine", "TrailRenderer");
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/TrailRenderer.h")]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TrailRenderer
class CORDL_TYPE TrailRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_alignment, put=set_alignment)) ::UnityEngine::LineAlignment  alignment;

 __declspec(property(get=get_applyActiveColorSpace, put=set_applyActiveColorSpace)) bool  applyActiveColorSpace;

 __declspec(property(get=get_autodestruct, put=set_autodestruct)) bool  autodestruct;

 __declspec(property(get=get_colorGradient, put=set_colorGradient)) ::UnityEngine::Gradient*  colorGradient;

 __declspec(property(get=get_emitting, put=set_emitting)) bool  emitting;

 __declspec(property(get=get_endColor, put=set_endColor)) ::UnityEngine::Color  endColor;

 __declspec(property(get=get_endWidth, put=set_endWidth)) float_t  endWidth;

 __declspec(property(get=get_generateLightingData, put=set_generateLightingData)) bool  generateLightingData;

 __declspec(property(get=get_maskInteraction, put=set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction  maskInteraction;

 __declspec(property(get=get_minVertexDistance, put=set_minVertexDistance)) float_t  minVertexDistance;

 __declspec(property(get=get_numCapVertices, put=set_numCapVertices)) int32_t  numCapVertices;

 __declspec(property(get=get_numCornerVertices, put=set_numCornerVertices)) int32_t  numCornerVertices;

/// @brief [Obsolete("Use positionCount instead (UnityUpgradable) -> positionCount", false)]
 __declspec(property(get=get_numPositions)) int32_t  numPositions;

/// @brief [NativeProperty("PositionsCount")]
 __declspec(property(get=get_positionCount)) int32_t  positionCount;

 __declspec(property(get=get_shadowBias, put=set_shadowBias)) float_t  shadowBias;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_startWidth, put=set_startWidth)) float_t  startWidth;

 __declspec(property(get=get_textureMode, put=set_textureMode)) ::UnityEngine::LineTextureMode  textureMode;

 __declspec(property(get=get_textureScale, put=set_textureScale)) ::UnityEngine::Vector2  textureScale;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_widthCurve, put=set_widthCurve)) ::UnityEngine::AnimationCurve*  widthCurve;

 __declspec(property(get=get_widthMultiplier, put=set_widthMultiplier)) float_t  widthMultiplier;

/// [FreeFunction(Name = "TrailRendererScripting::AddPosition", HasExplicitThis = true)]
/// @brief Method AddPosition, addr 0xb5847e4, size 0x90, virtual false, abstract: false, final false
inline void AddPosition(::UnityEngine::Vector3  position) ;

/// @brief Method AddPosition_Injected, addr 0xb584874, size 0x44, virtual false, abstract: false, final false
static inline void AddPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position) ;

/// [FreeFunction(Name = "TrailRendererScripting::AddPositions", HasExplicitThis = true)]
/// @brief Method AddPositions, addr 0xb5848b8, size 0x124, virtual false, abstract: false, final false
inline void AddPositions(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector3>  positions) ;

/// @brief Method AddPositions, addr 0xb584f3c, size 0x74, virtual false, abstract: false, final false
inline void AddPositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions) ;

/// @brief Method AddPositions, addr 0xb585040, size 0xb0, virtual false, abstract: false, final false
inline void AddPositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions) ;

/// [FreeFunction(Name = "TrailRendererScripting::AddPositionsWithNativeContainer", HasExplicitThis = true)]
/// @brief Method AddPositionsWithNativeContainer, addr 0xb584fb0, size 0x90, virtual false, abstract: false, final false
inline void AddPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length) ;

/// @brief Method AddPositionsWithNativeContainer_Injected, addr 0xb5851ec, size 0x54, virtual false, abstract: false, final false
static inline void AddPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length) ;

/// @brief Method AddPositions_Injected, addr 0xb5849dc, size 0x44, virtual false, abstract: false, final false
static inline void AddPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions) ;

/// @brief Method BakeMesh, addr 0xb583d18, size 0x38, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh, bool  useTransform) ;

/// @brief Method BakeMesh, addr 0xb583d50, size 0x158, virtual false, abstract: false, final false
inline void BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, /* [NotNull] */ ::UnityEngine::Camera*  camera, bool  useTransform) ;

/// @brief Method BakeMesh_Injected, addr 0xb583ea8, size 0x5c, virtual false, abstract: false, final false
static inline void BakeMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, ::System::IntPtr  camera, bool  useTransform) ;

/// @brief Method Clear, addr 0xb583c64, size 0x78, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear_Injected, addr 0xb583cdc, size 0x3c, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetColorGradientCopy, addr 0xb584078, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* GetColorGradientCopy() ;

/// @brief Method GetColorGradientCopy_Injected, addr 0xb584264, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetColorGradientCopy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPosition, addr 0xb5830fc, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(int32_t  index) ;

/// @brief Method GetPosition_Injected, addr 0xb58319c, size 0x54, virtual false, abstract: false, final false
static inline void GetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [FreeFunction(Name = "TrailRendererScripting::GetPositions", HasExplicitThis = true)]
/// @brief Method GetPositions, addr 0xb5842e4, size 0x188, virtual false, abstract: false, final false
inline int32_t GetPositions(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetPositions, addr 0xb584bd4, size 0x74, virtual false, abstract: false, final false
inline int32_t GetPositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetPositions, addr 0xb584cd8, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetPositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions) ;

/// [FreeFunction(Name = "TrailRendererScripting::GetPositionsWithNativeContainer", HasExplicitThis = true)]
/// @brief Method GetPositionsWithNativeContainer, addr 0xb584c48, size 0x90, virtual false, abstract: false, final false
inline int32_t GetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetPositionsWithNativeContainer_Injected, addr 0xb585144, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetPositions_Injected, addr 0xb58446c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  positions) ;

/// [FreeFunction(Name = "TrailRendererScripting::GetVisiblePositions", HasExplicitThis = true)]
/// @brief Method GetVisiblePositions, addr 0xb5844b0, size 0x188, virtual false, abstract: false, final false
inline int32_t GetVisiblePositions(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetVisiblePositions, addr 0xb584d88, size 0x74, virtual false, abstract: false, final false
inline int32_t GetVisiblePositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetVisiblePositions, addr 0xb584e8c, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetVisiblePositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions) ;

/// [FreeFunction(Name = "TrailRendererScripting::GetVisiblePositionsWithNativeContainer", HasExplicitThis = true)]
/// @brief Method GetVisiblePositionsWithNativeContainer, addr 0xb584dfc, size 0x90, virtual false, abstract: false, final false
inline int32_t GetVisiblePositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetVisiblePositionsWithNativeContainer_Injected, addr 0xb585198, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetVisiblePositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetVisiblePositions_Injected, addr 0xb584638, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVisiblePositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  positions) ;

/// @brief Method GetWidthCurveCopy, addr 0xb583f08, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy() ;

/// @brief Method GetWidthCurveCopy_Injected, addr 0xb5841e4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWidthCurveCopy_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::TrailRenderer* New_ctor() ;

/// @brief Method SetColorGradient, addr 0xb58410c, size 0xd8, virtual false, abstract: false, final false
inline void SetColorGradient(/* [NotNull] */ ::UnityEngine::Gradient*  curve) ;

/// @brief Method SetColorGradient_Injected, addr 0xb5842a0, size 0x44, virtual false, abstract: false, final false
static inline void SetColorGradient_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve) ;

/// @brief Method SetPosition, addr 0xb583010, size 0x98, virtual false, abstract: false, final false
inline void SetPosition(int32_t  index, ::UnityEngine::Vector3  position) ;

/// @brief Method SetPosition_Injected, addr 0xb5830a8, size 0x54, virtual false, abstract: false, final false
static inline void SetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  position) ;

/// [FreeFunction(Name = "TrailRendererScripting::SetPositions", HasExplicitThis = true)]
/// @brief Method SetPositions, addr 0xb58467c, size 0x124, virtual false, abstract: false, final false
inline void SetPositions(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector3>  positions) ;

/// @brief Method SetPositions, addr 0xb584a20, size 0x74, virtual false, abstract: false, final false
inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions) ;

/// @brief Method SetPositions, addr 0xb584b24, size 0xb0, virtual false, abstract: false, final false
inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  positions) ;

/// [FreeFunction(Name = "TrailRendererScripting::SetPositionsWithNativeContainer", HasExplicitThis = true)]
/// @brief Method SetPositionsWithNativeContainer, addr 0xb584a94, size 0x90, virtual false, abstract: false, final false
inline void SetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  count) ;

/// @brief Method SetPositionsWithNativeContainer_Injected, addr 0xb5850f0, size 0x54, virtual false, abstract: false, final false
static inline void SetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  count) ;

/// @brief Method SetPositions_Injected, addr 0xb5847a0, size 0x44, virtual false, abstract: false, final false
static inline void SetPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions) ;

/// @brief Method SetWidthCurve, addr 0xb583f9c, size 0xd8, virtual false, abstract: false, final false
inline void SetWidthCurve(/* [NotNull] */ ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method SetWidthCurve_Injected, addr 0xb584220, size 0x44, virtual false, abstract: false, final false
static inline void SetWidthCurve_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve) ;

/// @brief Method .ctor, addr 0xb585240, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_alignment, addr 0xb583974, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::LineAlignment get_alignment() ;

/// @brief Method get_alignment_Injected, addr 0xb5839ec, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LineAlignment get_alignment_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_applyActiveColorSpace, addr 0xb583684, size 0x78, virtual false, abstract: false, final false
inline bool get_applyActiveColorSpace() ;

/// @brief Method get_applyActiveColorSpace_Injected, addr 0xb5836fc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_applyActiveColorSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_autodestruct, addr 0xb582514, size 0x78, virtual false, abstract: false, final false
inline bool get_autodestruct() ;

/// @brief Method get_autodestruct_Injected, addr 0xb58258c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_autodestruct_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colorGradient, addr 0xb584074, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_colorGradient() ;

/// @brief Method get_emitting, addr 0xb58268c, size 0x78, virtual false, abstract: false, final false
inline bool get_emitting() ;

/// @brief Method get_emitting_Injected, addr 0xb582704, size 0x3c, virtual false, abstract: false, final false
static inline bool get_emitting_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_endColor, addr 0xb582e28, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_endColor() ;

/// @brief Method get_endColor_Injected, addr 0xb582ebc, size 0x44, virtual false, abstract: false, final false
static inline void get_endColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_endWidth, addr 0xb582204, size 0x78, virtual false, abstract: false, final false
inline float_t get_endWidth() ;

/// @brief Method get_endWidth_Injected, addr 0xb58227c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_endWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_generateLightingData, addr 0xb58350c, size 0x78, virtual false, abstract: false, final false
inline bool get_generateLightingData() ;

/// @brief Method get_generateLightingData_Injected, addr 0xb583584, size 0x3c, virtual false, abstract: false, final false
static inline bool get_generateLightingData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maskInteraction, addr 0xb583aec, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction() ;

/// @brief Method get_maskInteraction_Injected, addr 0xb583b64, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_minVertexDistance, addr 0xb582af4, size 0x78, virtual false, abstract: false, final false
inline float_t get_minVertexDistance() ;

/// @brief Method get_minVertexDistance_Injected, addr 0xb582b6c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_minVertexDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numCapVertices, addr 0xb58297c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_numCapVertices() ;

/// @brief Method get_numCapVertices_Injected, addr 0xb5829f4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_numCapVertices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numCornerVertices, addr 0xb582804, size 0x78, virtual false, abstract: false, final false
inline int32_t get_numCornerVertices() ;

/// @brief Method get_numCornerVertices_Injected, addr 0xb58287c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_numCornerVertices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numPositions, addr 0xb581e78, size 0x4, virtual false, abstract: false, final false
inline int32_t get_numPositions() ;

/// @brief Method get_positionCount, addr 0xb581e7c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_positionCount() ;

/// @brief Method get_positionCount_Injected, addr 0xb582fd4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_positionCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowBias, addr 0xb583384, size 0x78, virtual false, abstract: false, final false
inline float_t get_shadowBias() ;

/// @brief Method get_shadowBias_Injected, addr 0xb5833fc, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_startColor, addr 0xb582c7c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_startColor() ;

/// @brief Method get_startColor_Injected, addr 0xb582d10, size 0x44, virtual false, abstract: false, final false
static inline void get_startColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_startWidth, addr 0xb58207c, size 0x78, virtual false, abstract: false, final false
inline float_t get_startWidth() ;

/// @brief Method get_startWidth_Injected, addr 0xb5820f4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_startWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_textureMode, addr 0xb5837fc, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::LineTextureMode get_textureMode() ;

/// @brief Method get_textureMode_Injected, addr 0xb583874, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LineTextureMode get_textureMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_textureScale, addr 0xb5831f0, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_textureScale() ;

/// @brief Method get_textureScale_Injected, addr 0xb583278, size 0x44, virtual false, abstract: false, final false
static inline void get_textureScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_time, addr 0xb581ef4, size 0x78, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_time_Injected, addr 0xb581f6c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_widthCurve, addr 0xb583f04, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_widthCurve() ;

/// @brief Method get_widthMultiplier, addr 0xb58238c, size 0x78, virtual false, abstract: false, final false
inline float_t get_widthMultiplier() ;

/// @brief Method get_widthMultiplier_Injected, addr 0xb582404, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_widthMultiplier_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_alignment, addr 0xb583a28, size 0x80, virtual false, abstract: false, final false
inline void set_alignment(::UnityEngine::LineAlignment  value) ;

/// @brief Method set_alignment_Injected, addr 0xb583aa8, size 0x44, virtual false, abstract: false, final false
static inline void set_alignment_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineAlignment  value) ;

/// @brief Method set_applyActiveColorSpace, addr 0xb583738, size 0x80, virtual false, abstract: false, final false
inline void set_applyActiveColorSpace(bool  value) ;

/// @brief Method set_applyActiveColorSpace_Injected, addr 0xb5837b8, size 0x44, virtual false, abstract: false, final false
static inline void set_applyActiveColorSpace_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_autodestruct, addr 0xb5825c8, size 0x80, virtual false, abstract: false, final false
inline void set_autodestruct(bool  value) ;

/// @brief Method set_autodestruct_Injected, addr 0xb582648, size 0x44, virtual false, abstract: false, final false
static inline void set_autodestruct_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_colorGradient, addr 0xb584108, size 0x4, virtual false, abstract: false, final false
inline void set_colorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_emitting, addr 0xb582740, size 0x80, virtual false, abstract: false, final false
inline void set_emitting(bool  value) ;

/// @brief Method set_emitting_Injected, addr 0xb5827c0, size 0x44, virtual false, abstract: false, final false
static inline void set_emitting_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_endColor, addr 0xb582f00, size 0x90, virtual false, abstract: false, final false
inline void set_endColor(::UnityEngine::Color  value) ;

/// @brief Method set_endColor_Injected, addr 0xb582f90, size 0x44, virtual false, abstract: false, final false
static inline void set_endColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_endWidth, addr 0xb5822b8, size 0x88, virtual false, abstract: false, final false
inline void set_endWidth(float_t  value) ;

/// @brief Method set_endWidth_Injected, addr 0xb582340, size 0x4c, virtual false, abstract: false, final false
static inline void set_endWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_generateLightingData, addr 0xb5835c0, size 0x80, virtual false, abstract: false, final false
inline void set_generateLightingData(bool  value) ;

/// @brief Method set_generateLightingData_Injected, addr 0xb583640, size 0x44, virtual false, abstract: false, final false
static inline void set_generateLightingData_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_maskInteraction, addr 0xb583ba0, size 0x80, virtual false, abstract: false, final false
inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_maskInteraction_Injected, addr 0xb583c20, size 0x44, virtual false, abstract: false, final false
static inline void set_maskInteraction_Injected(::System::IntPtr  _unity_self, ::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_minVertexDistance, addr 0xb582ba8, size 0x88, virtual false, abstract: false, final false
inline void set_minVertexDistance(float_t  value) ;

/// @brief Method set_minVertexDistance_Injected, addr 0xb582c30, size 0x4c, virtual false, abstract: false, final false
static inline void set_minVertexDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_numCapVertices, addr 0xb582a30, size 0x80, virtual false, abstract: false, final false
inline void set_numCapVertices(int32_t  value) ;

/// @brief Method set_numCapVertices_Injected, addr 0xb582ab0, size 0x44, virtual false, abstract: false, final false
static inline void set_numCapVertices_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_numCornerVertices, addr 0xb5828b8, size 0x80, virtual false, abstract: false, final false
inline void set_numCornerVertices(int32_t  value) ;

/// @brief Method set_numCornerVertices_Injected, addr 0xb582938, size 0x44, virtual false, abstract: false, final false
static inline void set_numCornerVertices_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_shadowBias, addr 0xb583438, size 0x88, virtual false, abstract: false, final false
inline void set_shadowBias(float_t  value) ;

/// @brief Method set_shadowBias_Injected, addr 0xb5834c0, size 0x4c, virtual false, abstract: false, final false
static inline void set_shadowBias_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_startColor, addr 0xb582d54, size 0x90, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_startColor_Injected, addr 0xb582de4, size 0x44, virtual false, abstract: false, final false
static inline void set_startColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_startWidth, addr 0xb582130, size 0x88, virtual false, abstract: false, final false
inline void set_startWidth(float_t  value) ;

/// @brief Method set_startWidth_Injected, addr 0xb5821b8, size 0x4c, virtual false, abstract: false, final false
static inline void set_startWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_textureMode, addr 0xb5838b0, size 0x80, virtual false, abstract: false, final false
inline void set_textureMode(::UnityEngine::LineTextureMode  value) ;

/// @brief Method set_textureMode_Injected, addr 0xb583930, size 0x44, virtual false, abstract: false, final false
static inline void set_textureMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineTextureMode  value) ;

/// @brief Method set_textureScale, addr 0xb5832bc, size 0x84, virtual false, abstract: false, final false
inline void set_textureScale(::UnityEngine::Vector2  value) ;

/// @brief Method set_textureScale_Injected, addr 0xb583340, size 0x44, virtual false, abstract: false, final false
static inline void set_textureScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_time, addr 0xb581fa8, size 0x88, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_time_Injected, addr 0xb582030, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_widthCurve, addr 0xb583f98, size 0x4, virtual false, abstract: false, final false
inline void set_widthCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_widthMultiplier, addr 0xb582440, size 0x88, virtual false, abstract: false, final false
inline void set_widthMultiplier(float_t  value) ;

/// @brief Method set_widthMultiplier_Injected, addr 0xb5824c8, size 0x4c, virtual false, abstract: false, final false
static inline void set_widthMultiplier_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrailRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrailRenderer(TrailRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrailRenderer(TrailRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14877};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TrailRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
