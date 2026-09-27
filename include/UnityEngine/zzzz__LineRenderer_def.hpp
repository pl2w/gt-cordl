#pragma once
// IWYU pragma private; include "UnityEngine/LineRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
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
class LineRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::LineRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// [NativeHeader("Runtime/Graphics/LineRenderer.h")]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_alignment, put=set_alignment)) ::UnityEngine::LineAlignment  alignment;

 __declspec(property(get=get_applyActiveColorSpace, put=set_applyActiveColorSpace)) bool  applyActiveColorSpace;

 __declspec(property(get=get_colorGradient, put=set_colorGradient)) ::UnityEngine::Gradient*  colorGradient;

 __declspec(property(get=get_endColor, put=set_endColor)) ::UnityEngine::Color  endColor;

 __declspec(property(get=get_endWidth, put=set_endWidth)) float_t  endWidth;

 __declspec(property(get=get_generateLightingData, put=set_generateLightingData)) bool  generateLightingData;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_maskInteraction, put=set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction  maskInteraction;

 __declspec(property(get=get_numCapVertices, put=set_numCapVertices)) int32_t  numCapVertices;

 __declspec(property(get=get_numCornerVertices, put=set_numCornerVertices)) int32_t  numCornerVertices;

/// @brief [Obsolete("Use positionCount instead (UnityUpgradable) -> positionCount", false)]
 __declspec(property(get=get_numPositions, put=set_numPositions)) int32_t  numPositions;

/// @brief [NativeProperty("PositionsCount")]
 __declspec(property(get=get_positionCount, put=set_positionCount)) int32_t  positionCount;

 __declspec(property(get=get_shadowBias, put=set_shadowBias)) float_t  shadowBias;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_startWidth, put=set_startWidth)) float_t  startWidth;

 __declspec(property(get=get_textureMode, put=set_textureMode)) ::UnityEngine::LineTextureMode  textureMode;

 __declspec(property(get=get_textureScale, put=set_textureScale)) ::UnityEngine::Vector2  textureScale;

 __declspec(property(get=get_useWorldSpace, put=set_useWorldSpace)) bool  useWorldSpace;

 __declspec(property(get=get_widthCurve, put=set_widthCurve)) ::UnityEngine::AnimationCurve*  widthCurve;

 __declspec(property(get=get_widthMultiplier, put=set_widthMultiplier)) float_t  widthMultiplier;

/// @brief Method BakeMesh, addr 0xb586f3c, size 0x38, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh, bool  useTransform) ;

/// @brief Method BakeMesh, addr 0xb586f74, size 0x158, virtual false, abstract: false, final false
inline void BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, /* [NotNull] */ ::UnityEngine::Camera*  camera, bool  useTransform) ;

/// @brief Method BakeMesh_Injected, addr 0xb5870cc, size 0x5c, virtual false, abstract: false, final false
static inline void BakeMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, ::System::IntPtr  camera, bool  useTransform) ;

/// @brief Method GetColorGradientCopy, addr 0xb58729c, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* GetColorGradientCopy() ;

/// @brief Method GetColorGradientCopy_Injected, addr 0xb587488, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetColorGradientCopy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPosition, addr 0xb586300, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(int32_t  index) ;

/// @brief Method GetPosition_Injected, addr 0xb5863a0, size 0x54, virtual false, abstract: false, final false
static inline void GetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [FreeFunction(Name = "LineRendererScripting::GetPositions", HasExplicitThis = true)]
/// @brief Method GetPositions, addr 0xb587508, size 0x188, virtual false, abstract: false, final false
inline int32_t GetPositions(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetPositions, addr 0xb5879f0, size 0x74, virtual false, abstract: false, final false
inline int32_t GetPositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetPositions, addr 0xb587af4, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetPositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions) ;

/// [FreeFunction(Name = "LineRendererScripting::GetPositionsWithNativeContainer", HasExplicitThis = true)]
/// @brief Method GetPositionsWithNativeContainer, addr 0xb587a64, size 0x90, virtual false, abstract: false, final false
inline int32_t GetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetPositionsWithNativeContainer_Injected, addr 0xb587bf8, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetPositions_Injected, addr 0xb587690, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  positions) ;

/// @brief Method GetWidthCurveCopy, addr 0xb58712c, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy() ;

/// @brief Method GetWidthCurveCopy_Injected, addr 0xb587408, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWidthCurveCopy_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::LineRenderer* New_ctor() ;

/// @brief Method SetColorGradient, addr 0xb587330, size 0xd8, virtual false, abstract: false, final false
inline void SetColorGradient(/* [NotNull] */ ::UnityEngine::Gradient*  curve) ;

/// @brief Method SetColorGradient_Injected, addr 0xb5874c4, size 0x44, virtual false, abstract: false, final false
static inline void SetColorGradient_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve) ;

/// [Obsolete("Use startColor, endColor or colorGradient instead.", false)]
/// @brief Method SetColors, addr 0xb585388, size 0x48, virtual false, abstract: false, final false
inline void SetColors(::UnityEngine::Color  start, ::UnityEngine::Color  end) ;

/// @brief Method SetPosition, addr 0xb586214, size 0x98, virtual false, abstract: false, final false
inline void SetPosition(int32_t  index, ::UnityEngine::Vector3  position) ;

/// @brief Method SetPosition_Injected, addr 0xb5862ac, size 0x54, virtual false, abstract: false, final false
static inline void SetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  position) ;

/// [FreeFunction(Name = "LineRendererScripting::SetPositions", HasExplicitThis = true)]
/// @brief Method SetPositions, addr 0xb5876d4, size 0x124, virtual false, abstract: false, final false
inline void SetPositions(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector3>  positions) ;

/// @brief Method SetPositions, addr 0xb58783c, size 0x74, virtual false, abstract: false, final false
inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions) ;

/// @brief Method SetPositions, addr 0xb587940, size 0xb0, virtual false, abstract: false, final false
inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  positions) ;

/// [FreeFunction(Name = "LineRendererScripting::SetPositionsWithNativeContainer", HasExplicitThis = true)]
/// @brief Method SetPositionsWithNativeContainer, addr 0xb5878b0, size 0x90, virtual false, abstract: false, final false
inline void SetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  count) ;

/// @brief Method SetPositionsWithNativeContainer_Injected, addr 0xb587ba4, size 0x54, virtual false, abstract: false, final false
static inline void SetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  count) ;

/// @brief Method SetPositions_Injected, addr 0xb5877f8, size 0x44, virtual false, abstract: false, final false
static inline void SetPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions) ;

/// [Obsolete("Use positionCount instead.", false)]
/// @brief Method SetVertexCount, addr 0xb5854f0, size 0x4, virtual false, abstract: false, final false
inline void SetVertexCount(int32_t  count) ;

/// [Obsolete("Use startWidth, endWidth or widthCurve instead.", false)]
/// @brief Method SetWidth, addr 0xb585250, size 0x28, virtual false, abstract: false, final false
inline void SetWidth(float_t  start, float_t  end) ;

/// @brief Method SetWidthCurve, addr 0xb5871c0, size 0xd8, virtual false, abstract: false, final false
inline void SetWidthCurve(/* [NotNull] */ ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method SetWidthCurve_Injected, addr 0xb587444, size 0x44, virtual false, abstract: false, final false
static inline void SetWidthCurve_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve) ;

/// @brief Method Simplify, addr 0xb586e68, size 0x88, virtual false, abstract: false, final false
inline void Simplify(float_t  tolerance) ;

/// @brief Method Simplify_Injected, addr 0xb586ef0, size 0x4c, virtual false, abstract: false, final false
static inline void Simplify_Injected(::System::IntPtr  _unity_self, float_t  tolerance) ;

/// @brief Method .ctor, addr 0xb587c4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_alignment, addr 0xb586b78, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::LineAlignment get_alignment() ;

/// @brief Method get_alignment_Injected, addr 0xb586bf0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LineAlignment get_alignment_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_applyActiveColorSpace, addr 0xb586888, size 0x78, virtual false, abstract: false, final false
inline bool get_applyActiveColorSpace() ;

/// @brief Method get_applyActiveColorSpace_Injected, addr 0xb586900, size 0x3c, virtual false, abstract: false, final false
static inline bool get_applyActiveColorSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colorGradient, addr 0xb587298, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_colorGradient() ;

/// @brief Method get_endColor, addr 0xb586078, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_endColor() ;

/// @brief Method get_endColor_Injected, addr 0xb58610c, size 0x44, virtual false, abstract: false, final false
static inline void get_endColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_endWidth, addr 0xb5856f4, size 0x78, virtual false, abstract: false, final false
inline float_t get_endWidth() ;

/// @brief Method get_endWidth_Injected, addr 0xb58576c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_endWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_generateLightingData, addr 0xb586710, size 0x78, virtual false, abstract: false, final false
inline bool get_generateLightingData() ;

/// @brief Method get_generateLightingData_Injected, addr 0xb586788, size 0x3c, virtual false, abstract: false, final false
static inline bool get_generateLightingData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loop, addr 0xb585de4, size 0x78, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_loop_Injected, addr 0xb585e5c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loop_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maskInteraction, addr 0xb586cf0, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction() ;

/// @brief Method get_maskInteraction_Injected, addr 0xb586d68, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numCapVertices, addr 0xb585af4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_numCapVertices() ;

/// @brief Method get_numCapVertices_Injected, addr 0xb585b6c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_numCapVertices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numCornerVertices, addr 0xb58597c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_numCornerVertices() ;

/// @brief Method get_numCornerVertices_Injected, addr 0xb5859f4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_numCornerVertices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numPositions, addr 0xb585574, size 0x4, virtual false, abstract: false, final false
inline int32_t get_numPositions() ;

/// @brief Method get_positionCount, addr 0xb585578, size 0x78, virtual false, abstract: false, final false
inline int32_t get_positionCount() ;

/// @brief Method get_positionCount_Injected, addr 0xb586194, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_positionCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowBias, addr 0xb586588, size 0x78, virtual false, abstract: false, final false
inline float_t get_shadowBias() ;

/// @brief Method get_shadowBias_Injected, addr 0xb586600, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_startColor, addr 0xb585f5c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_startColor() ;

/// @brief Method get_startColor_Injected, addr 0xb585ff0, size 0x44, virtual false, abstract: false, final false
static inline void get_startColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_startWidth, addr 0xb5855f4, size 0x78, virtual false, abstract: false, final false
inline float_t get_startWidth() ;

/// @brief Method get_startWidth_Injected, addr 0xb58566c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_startWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_textureMode, addr 0xb586a00, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::LineTextureMode get_textureMode() ;

/// @brief Method get_textureMode_Injected, addr 0xb586a78, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LineTextureMode get_textureMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_textureScale, addr 0xb5863f4, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_textureScale() ;

/// @brief Method get_textureScale_Injected, addr 0xb58647c, size 0x44, virtual false, abstract: false, final false
static inline void get_textureScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_useWorldSpace, addr 0xb585c6c, size 0x78, virtual false, abstract: false, final false
inline bool get_useWorldSpace() ;

/// @brief Method get_useWorldSpace_Injected, addr 0xb585ce4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useWorldSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_widthCurve, addr 0xb587128, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_widthCurve() ;

/// @brief Method get_widthMultiplier, addr 0xb5857f4, size 0x78, virtual false, abstract: false, final false
inline float_t get_widthMultiplier() ;

/// @brief Method get_widthMultiplier_Injected, addr 0xb58586c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_widthMultiplier_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_alignment, addr 0xb586c2c, size 0x80, virtual false, abstract: false, final false
inline void set_alignment(::UnityEngine::LineAlignment  value) ;

/// @brief Method set_alignment_Injected, addr 0xb586cac, size 0x44, virtual false, abstract: false, final false
static inline void set_alignment_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineAlignment  value) ;

/// @brief Method set_applyActiveColorSpace, addr 0xb58693c, size 0x80, virtual false, abstract: false, final false
inline void set_applyActiveColorSpace(bool  value) ;

/// @brief Method set_applyActiveColorSpace_Injected, addr 0xb5869bc, size 0x44, virtual false, abstract: false, final false
static inline void set_applyActiveColorSpace_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_colorGradient, addr 0xb58732c, size 0x4, virtual false, abstract: false, final false
inline void set_colorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_endColor, addr 0xb585460, size 0x90, virtual false, abstract: false, final false
inline void set_endColor(::UnityEngine::Color  value) ;

/// @brief Method set_endColor_Injected, addr 0xb586150, size 0x44, virtual false, abstract: false, final false
static inline void set_endColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_endWidth, addr 0xb585300, size 0x88, virtual false, abstract: false, final false
inline void set_endWidth(float_t  value) ;

/// @brief Method set_endWidth_Injected, addr 0xb5857a8, size 0x4c, virtual false, abstract: false, final false
static inline void set_endWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_generateLightingData, addr 0xb5867c4, size 0x80, virtual false, abstract: false, final false
inline void set_generateLightingData(bool  value) ;

/// @brief Method set_generateLightingData_Injected, addr 0xb586844, size 0x44, virtual false, abstract: false, final false
static inline void set_generateLightingData_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_loop, addr 0xb585e98, size 0x80, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_loop_Injected, addr 0xb585f18, size 0x44, virtual false, abstract: false, final false
static inline void set_loop_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_maskInteraction, addr 0xb586da4, size 0x80, virtual false, abstract: false, final false
inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_maskInteraction_Injected, addr 0xb586e24, size 0x44, virtual false, abstract: false, final false
static inline void set_maskInteraction_Injected(::System::IntPtr  _unity_self, ::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_numCapVertices, addr 0xb585ba8, size 0x80, virtual false, abstract: false, final false
inline void set_numCapVertices(int32_t  value) ;

/// @brief Method set_numCapVertices_Injected, addr 0xb585c28, size 0x44, virtual false, abstract: false, final false
static inline void set_numCapVertices_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_numCornerVertices, addr 0xb585a30, size 0x80, virtual false, abstract: false, final false
inline void set_numCornerVertices(int32_t  value) ;

/// @brief Method set_numCornerVertices_Injected, addr 0xb585ab0, size 0x44, virtual false, abstract: false, final false
static inline void set_numCornerVertices_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_numPositions, addr 0xb5855f0, size 0x4, virtual false, abstract: false, final false
inline void set_numPositions(int32_t  value) ;

/// @brief Method set_positionCount, addr 0xb5854f4, size 0x80, virtual false, abstract: false, final false
inline void set_positionCount(int32_t  value) ;

/// @brief Method set_positionCount_Injected, addr 0xb5861d0, size 0x44, virtual false, abstract: false, final false
static inline void set_positionCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_shadowBias, addr 0xb58663c, size 0x88, virtual false, abstract: false, final false
inline void set_shadowBias(float_t  value) ;

/// @brief Method set_shadowBias_Injected, addr 0xb5866c4, size 0x4c, virtual false, abstract: false, final false
static inline void set_shadowBias_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_startColor, addr 0xb5853d0, size 0x90, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_startColor_Injected, addr 0xb586034, size 0x44, virtual false, abstract: false, final false
static inline void set_startColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_startWidth, addr 0xb585278, size 0x88, virtual false, abstract: false, final false
inline void set_startWidth(float_t  value) ;

/// @brief Method set_startWidth_Injected, addr 0xb5856a8, size 0x4c, virtual false, abstract: false, final false
static inline void set_startWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_textureMode, addr 0xb586ab4, size 0x80, virtual false, abstract: false, final false
inline void set_textureMode(::UnityEngine::LineTextureMode  value) ;

/// @brief Method set_textureMode_Injected, addr 0xb586b34, size 0x44, virtual false, abstract: false, final false
static inline void set_textureMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineTextureMode  value) ;

/// @brief Method set_textureScale, addr 0xb5864c0, size 0x84, virtual false, abstract: false, final false
inline void set_textureScale(::UnityEngine::Vector2  value) ;

/// @brief Method set_textureScale_Injected, addr 0xb586544, size 0x44, virtual false, abstract: false, final false
static inline void set_textureScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_useWorldSpace, addr 0xb585d20, size 0x80, virtual false, abstract: false, final false
inline void set_useWorldSpace(bool  value) ;

/// @brief Method set_useWorldSpace_Injected, addr 0xb585da0, size 0x44, virtual false, abstract: false, final false
static inline void set_useWorldSpace_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_widthCurve, addr 0xb5871bc, size 0x4, virtual false, abstract: false, final false
inline void set_widthCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_widthMultiplier, addr 0xb5858a8, size 0x88, virtual false, abstract: false, final false
inline void set_widthMultiplier(float_t  value) ;

/// @brief Method set_widthMultiplier_Injected, addr 0xb585930, size 0x4c, virtual false, abstract: false, final false
static inline void set_widthMultiplier_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRenderer(LineRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRenderer(LineRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14878};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LineRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
