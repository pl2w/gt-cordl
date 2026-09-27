#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVROverlayCanvas_CanvasShape_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_DrawMode_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_OverlayType_def.hpp"
#include "GlobalNamespace/zzzz__OVRRayTransformer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayCanvas)
namespace GlobalNamespace {
struct OVROverlayCanvas_CanvasShape;
}
namespace GlobalNamespace {
struct OVROverlayCanvas_DrawMode;
}
namespace GlobalNamespace {
struct OVROverlayCanvas_ScopedCallback;
}
namespace GlobalNamespace {
template<typename T>
class OVROverlayCanvas___c__DisplayClass50_0_1;
}
namespace GlobalNamespace {
class OVROverlayCanvas___c__DisplayClass70_0;
}
namespace GlobalNamespace {
class OVROverlayMeshGenerator;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVROverlayCanvas;
}
namespace GlobalNamespace {
template<typename T>
class OVROverlayCanvas___c__DisplayClass50_0_1;
}
namespace GlobalNamespace {
class OVROverlayCanvas___c__DisplayClass70_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVROverlayCanvas*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1);
MARK_REF_T(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvas*, "", "OVROverlayCanvas");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1, "", "OVROverlayCanvas/<>c__DisplayClass50_0`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*, "", "OVROverlayCanvas/<>c__DisplayClass70_0");
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// [ExecuteAlways]
// Dependencies OVROverlay::OverlayType, OVROverlayCanvas::CanvasShape, OVROverlayCanvas::DrawMode, OVRRayTransformer, System.Nullable`1<T>, System.ValueTuple`2<T1, T2>, UnityEngine.Plane, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvas
class CORDL_TYPE OVROverlayCanvas : public ::GlobalNamespace::OVRRayTransformer {
public:
// Declarations
using CanvasShape = ::GlobalNamespace::OVROverlayCanvas_CanvasShape;

using DrawMode = ::GlobalNamespace::OVROverlayCanvas_DrawMode;

using ScopedCallback = ::GlobalNamespace::OVROverlayCanvas_ScopedCallback;

template<typename T>
using __c__DisplayClass50_0_1 = ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>;

using __c__DisplayClass70_0 = ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0;

 __declspec(property(get=get_CanvasRenderLayer)) int32_t  CanvasRenderLayer;

 __declspec(property(get=get_IsCanvasPriority)) bool  IsCanvasPriority;

 __declspec(property(get=get_Overlay)) ::UnityW<::GlobalNamespace::OVROverlay>  Overlay;

 __declspec(property(get=get_ShouldScaleViewport)) bool  ShouldScaleViewport;

 __declspec(property(get=get_ShouldShowImposter)) bool  ShouldShowImposter;

/// @brief Field _Corners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Corners, put=setStaticF__Corners)) ::ArrayW<::UnityEngine::Vector3>  _Corners;

/// @brief Field _FrustumPlanes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FrustumPlanes, put=setStaticF__FrustumPlanes)) ::ArrayW<::UnityEngine::Plane>  _FrustumPlanes;

/// @brief Field _camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _dynamicResolution, offset 0x77, size 0x1 
 __declspec(property(get=__cordl_internal_get__dynamicResolution, put=__cordl_internal_set__dynamicResolution)) bool  _dynamicResolution;

/// @brief Field _enableMipmapping, offset 0x76, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableMipmapping, put=__cordl_internal_set__enableMipmapping)) bool  _enableMipmapping;

/// @brief Field _frameIsReady, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__frameIsReady, put=__cordl_internal_set__frameIsReady)) bool  _frameIsReady;

/// @brief Field _imposterMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__imposterMaterial, put=__cordl_internal_set__imposterMaterial)) ::UnityW<::UnityEngine::Material>  _imposterMaterial;

/// @brief Field _imposterTextureOffset, offset 0x64, size 0x8 
 __declspec(property(get=__cordl_internal_get__imposterTextureOffset, put=__cordl_internal_set__imposterTextureOffset)) ::UnityEngine::Vector2  _imposterTextureOffset;

/// @brief Field _imposterTextureScale, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get__imposterTextureScale, put=__cordl_internal_set__imposterTextureScale)) ::UnityEngine::Vector2  _imposterTextureScale;

/// @brief Field _lastPixelHeight, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPixelHeight, put=__cordl_internal_set__lastPixelHeight)) int32_t  _lastPixelHeight;

/// @brief Field _lastPixelWidth, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPixelWidth, put=__cordl_internal_set__lastPixelWidth)) int32_t  _lastPixelWidth;

/// @brief Field _lastViewPriorityScore, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastViewPriorityScore, put=__cordl_internal_set__lastViewPriorityScore)) ::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>>  _lastViewPriorityScore;

/// @brief Field _meshGenerator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshGenerator, put=__cordl_internal_set__meshGenerator)) ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  _meshGenerator;

/// @brief Field _meshRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshRenderer, put=__cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _meshRenderer;

/// @brief Field _nonUniformScaleWarningShown, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get__nonUniformScaleWarningShown, put=__cordl_internal_set__nonUniformScaleWarningShown)) bool  _nonUniformScaleWarningShown;

/// @brief Field _optimalResolutionHeight, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__optimalResolutionHeight, put=__cordl_internal_set__optimalResolutionHeight)) float_t  _optimalResolutionHeight;

/// @brief Field _optimalResolutionInitialized, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__optimalResolutionInitialized, put=__cordl_internal_set__optimalResolutionInitialized)) bool  _optimalResolutionInitialized;

/// @brief Field _optimalResolutionWidth, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__optimalResolutionWidth, put=__cordl_internal_set__optimalResolutionWidth)) float_t  _optimalResolutionWidth;

/// @brief Field _overlay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlay, put=__cordl_internal_set__overlay)) ::UnityW<::GlobalNamespace::OVROverlay>  _overlay;

/// @brief Field _overlayEnabled, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__overlayEnabled, put=__cordl_internal_set__overlayEnabled)) bool  _overlayEnabled;

/// @brief Field _redrawResolutionThreshold, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__redrawResolutionThreshold, put=__cordl_internal_set__redrawResolutionThreshold)) int32_t  _redrawResolutionThreshold;

/// @brief Field _renderTexture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderTexture, put=__cordl_internal_set__renderTexture)) ::UnityW<::UnityEngine::RenderTexture>  _renderTexture;

/// @brief Field _useTempRT, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTempRT, put=__cordl_internal_set__useTempRT)) bool  _useTempRT;

/// @brief Field curveRadius, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_curveRadius, put=__cordl_internal_set_curveRadius)) float_t  curveRadius;

/// @brief Field expensive, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_expensive, put=__cordl_internal_set_expensive)) bool  expensive;

/// @brief Field layer, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) int32_t  layer;

/// @brief Field manualRedraw, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_manualRedraw, put=__cordl_internal_set_manualRedraw)) bool  manualRedraw;

/// @brief Field maxTextureSize, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTextureSize, put=__cordl_internal_set_maxTextureSize)) int32_t  maxTextureSize;

/// @brief Field opacity, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_opacity, put=__cordl_internal_set_opacity)) ::GlobalNamespace::OVROverlayCanvas_DrawMode  opacity;

/// @brief Field overlapMask, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_overlapMask, put=__cordl_internal_set_overlapMask)) bool  overlapMask;

 __declspec(property(get=get_overlayEnabled, put=set_overlayEnabled)) bool  overlayEnabled;

/// @brief Field overlayType, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlayType, put=__cordl_internal_set_overlayType)) ::GlobalNamespace::OVROverlay_OverlayType  overlayType;

/// @brief Field rectTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectTransform, put=__cordl_internal_set_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Field renderInterval, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderInterval, put=__cordl_internal_set_renderInterval)) int32_t  renderInterval;

/// @brief Field renderIntervalFrameOffset, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderIntervalFrameOffset, put=__cordl_internal_set_renderIntervalFrameOffset)) int32_t  renderIntervalFrameOffset;

/// @brief Field shape, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::GlobalNamespace::OVROverlayCanvas_CanvasShape  shape;

/// @brief Method ApplyViewportScale, addr 0xa6029b4, size 0x33c, virtual false, abstract: false, final false
inline void ApplyViewportScale() ;

/// @brief Method CalcImposterColor, addr 0xa601724, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Color CalcImposterColor() ;

/// @brief Method CalculateCurveViewBillboardMatrix, addr 0xa603b6c, size 0x2f0, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CalculateCurveViewBillboardMatrix(::UnityEngine::Camera*  mainCamera) ;

/// @brief Method CalculateScaledResolution, addr 0xa601c94, size 0x824, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::ValueTuple_2<int32_t,int32_t>> CalculateScaledResolution() ;

/// @brief Method GetRectTransformScale, addr 0xa6014a8, size 0x24c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRectTransformScale() ;

/// @brief Method GetViewPriorityScore, addr 0xa603464, size 0xa4, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> GetViewPriorityScore() ;

/// @brief Method GetViewPriorityScoreImpl, addr 0xa603508, size 0x3d0, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> GetViewPriorityScoreImpl() ;

/// @brief Method GetWorldToViewportMatrix, addr 0xa6039d8, size 0x194, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetWorldToViewportMatrix(::UnityEngine::Camera*  mainCamera) ;

/// @brief Method InitializeRenderTexture, addr 0xa600a80, size 0xa28, virtual false, abstract: false, final false
inline void InitializeRenderTexture() ;

/// @brief Method IsInFrustum, addr 0xa6024b8, size 0x4a4, virtual false, abstract: false, final false
inline bool IsInFrustum() ;

/// @brief Method LateUpdate, addr 0xa6033d4, size 0x90, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LineCircleIntersection, addr 0xa6041dc, size 0xcc, virtual false, abstract: false, final false
static inline bool LineCircleIntersection(::UnityEngine::Vector2  p1, ::UnityEngine::Vector2  dp, ::UnityEngine::Vector2  center, float_t  radius, ::by_ref<float_t>  distance) ;

static inline ::GlobalNamespace::OVROverlayCanvas* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa601798, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa601a24, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa60185c, size 0x10c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xa6039d4, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RenderCamera, addr 0xa602cf0, size 0x6e4, virtual false, abstract: false, final false
inline void RenderCamera() ;

/// @brief Method SetCanvasLayer, addr 0xa6042b8, size 0xa4, virtual false, abstract: false, final false
inline void SetCanvasLayer(int32_t  layer, bool  forceUpdate) ;

/// @brief Method SetFrameDirty, addr 0xa6042b0, size 0x8, virtual false, abstract: false, final false
inline void SetFrameDirty() ;

/// @brief Method SetLayerRecursive, addr 0xa60435c, size 0x144, virtual false, abstract: false, final false
static inline void SetLayerRecursive(::UnityEngine::GameObject*  gameObject, int32_t  layer, int32_t  previousLayer, bool  forceUpdate) ;

/// @brief Method ShouldRender, addr 0xa601b48, size 0x14c, virtual true, abstract: false, final false
inline bool ShouldRender() ;

/// @brief Method Start, addr 0xa6004d8, size 0x4f8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToSimpleJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToSimpleJson(T  value) ;

/// @brief Method TransformRay, addr 0xa603f00, size 0x2dc, virtual true, abstract: false, final false
inline ::UnityEngine::Ray TransformRay(::UnityEngine::Ray  ray) ;

/// @brief Method TriangleArea, addr 0xa6038d8, size 0xfc, virtual false, abstract: false, final false
static inline float_t TriangleArea(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c) ;

/// @brief Method Update, addr 0xa60295c, size 0x58, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateOverlaySettings, addr 0xa6009d0, size 0xb0, virtual false, abstract: false, final false
inline void UpdateOverlaySettings() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr bool const& __cordl_internal_get__dynamicResolution() const;

constexpr bool& __cordl_internal_get__dynamicResolution() ;

constexpr bool const& __cordl_internal_get__enableMipmapping() const;

constexpr bool& __cordl_internal_get__enableMipmapping() ;

constexpr bool const& __cordl_internal_get__frameIsReady() const;

constexpr bool& __cordl_internal_get__frameIsReady() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__imposterMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__imposterMaterial() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__imposterTextureOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__imposterTextureOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__imposterTextureScale() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__imposterTextureScale() ;

constexpr int32_t const& __cordl_internal_get__lastPixelHeight() const;

constexpr int32_t& __cordl_internal_get__lastPixelHeight() ;

constexpr int32_t const& __cordl_internal_get__lastPixelWidth() const;

constexpr int32_t& __cordl_internal_get__lastPixelWidth() ;

constexpr ::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>> const& __cordl_internal_get__lastViewPriorityScore() const;

constexpr ::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>>& __cordl_internal_get__lastViewPriorityScore() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator> const& __cordl_internal_get__meshGenerator() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>& __cordl_internal_get__meshGenerator() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer() ;

constexpr bool const& __cordl_internal_get__nonUniformScaleWarningShown() const;

constexpr bool& __cordl_internal_get__nonUniformScaleWarningShown() ;

constexpr float_t const& __cordl_internal_get__optimalResolutionHeight() const;

constexpr float_t& __cordl_internal_get__optimalResolutionHeight() ;

constexpr bool const& __cordl_internal_get__optimalResolutionInitialized() const;

constexpr bool& __cordl_internal_get__optimalResolutionInitialized() ;

constexpr float_t const& __cordl_internal_get__optimalResolutionWidth() const;

constexpr float_t& __cordl_internal_get__optimalResolutionWidth() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get__overlay() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get__overlay() ;

constexpr bool const& __cordl_internal_get__overlayEnabled() const;

constexpr bool& __cordl_internal_get__overlayEnabled() ;

constexpr int32_t const& __cordl_internal_get__redrawResolutionThreshold() const;

constexpr int32_t& __cordl_internal_get__redrawResolutionThreshold() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__renderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__renderTexture() ;

constexpr bool const& __cordl_internal_get__useTempRT() const;

constexpr bool& __cordl_internal_get__useTempRT() ;

constexpr float_t const& __cordl_internal_get_curveRadius() const;

constexpr float_t& __cordl_internal_get_curveRadius() ;

constexpr bool const& __cordl_internal_get_expensive() const;

constexpr bool& __cordl_internal_get_expensive() ;

constexpr int32_t const& __cordl_internal_get_layer() const;

constexpr int32_t& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_manualRedraw() const;

constexpr bool& __cordl_internal_get_manualRedraw() ;

constexpr int32_t const& __cordl_internal_get_maxTextureSize() const;

constexpr int32_t& __cordl_internal_get_maxTextureSize() ;

constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode const& __cordl_internal_get_opacity() const;

constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode& __cordl_internal_get_opacity() ;

constexpr bool const& __cordl_internal_get_overlapMask() const;

constexpr bool& __cordl_internal_get_overlapMask() ;

constexpr ::GlobalNamespace::OVROverlay_OverlayType const& __cordl_internal_get_overlayType() const;

constexpr ::GlobalNamespace::OVROverlay_OverlayType& __cordl_internal_get_overlayType() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_rectTransform() ;

constexpr int32_t const& __cordl_internal_get_renderInterval() const;

constexpr int32_t& __cordl_internal_get_renderInterval() ;

constexpr int32_t const& __cordl_internal_get_renderIntervalFrameOffset() const;

constexpr int32_t& __cordl_internal_get_renderIntervalFrameOffset() ;

constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape const& __cordl_internal_get_shape() const;

constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape& __cordl_internal_get_shape() ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__dynamicResolution(bool  value) ;

constexpr void __cordl_internal_set__enableMipmapping(bool  value) ;

constexpr void __cordl_internal_set__frameIsReady(bool  value) ;

constexpr void __cordl_internal_set__imposterMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__imposterTextureOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__imposterTextureScale(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__lastPixelHeight(int32_t  value) ;

constexpr void __cordl_internal_set__lastPixelWidth(int32_t  value) ;

constexpr void __cordl_internal_set__lastViewPriorityScore(::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>>  value) ;

constexpr void __cordl_internal_set__meshGenerator(::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  value) ;

constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__nonUniformScaleWarningShown(bool  value) ;

constexpr void __cordl_internal_set__optimalResolutionHeight(float_t  value) ;

constexpr void __cordl_internal_set__optimalResolutionInitialized(bool  value) ;

constexpr void __cordl_internal_set__optimalResolutionWidth(float_t  value) ;

constexpr void __cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay>  value) ;

constexpr void __cordl_internal_set__overlayEnabled(bool  value) ;

constexpr void __cordl_internal_set__redrawResolutionThreshold(int32_t  value) ;

constexpr void __cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__useTempRT(bool  value) ;

constexpr void __cordl_internal_set_curveRadius(float_t  value) ;

constexpr void __cordl_internal_set_expensive(bool  value) ;

constexpr void __cordl_internal_set_layer(int32_t  value) ;

constexpr void __cordl_internal_set_manualRedraw(bool  value) ;

constexpr void __cordl_internal_set_maxTextureSize(int32_t  value) ;

constexpr void __cordl_internal_set_opacity(::GlobalNamespace::OVROverlayCanvas_DrawMode  value) ;

constexpr void __cordl_internal_set_overlapMask(bool  value) ;

constexpr void __cordl_internal_set_overlayType(::GlobalNamespace::OVROverlay_OverlayType  value) ;

constexpr void __cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_renderInterval(int32_t  value) ;

constexpr void __cordl_internal_set_renderIntervalFrameOffset(int32_t  value) ;

constexpr void __cordl_internal_set_shape(::GlobalNamespace::OVROverlayCanvas_CanvasShape  value) ;

/// @brief Method .ctor, addr 0xa6044a0, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF__Corners() ;

static inline ::ArrayW<::UnityEngine::Plane> getStaticF__FrustumPlanes() ;

/// @brief Method get_CanvasRenderLayer, addr 0xa600060, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_CanvasRenderLayer() ;

/// @brief Method get_IsCanvasPriority, addr 0xa600130, size 0x94, virtual false, abstract: false, final false
inline bool get_IsCanvasPriority() ;

/// @brief Method get_Overlay, addr 0xa6042a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OVROverlay> get_Overlay() ;

/// @brief Method get_ShouldScaleViewport, addr 0xa600128, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldScaleViewport() ;

/// @brief Method get_ShouldShowImposter, addr 0xa6003b0, size 0x34, virtual false, abstract: false, final false
inline bool get_ShouldShowImposter() ;

/// @brief Method get_overlayEnabled, addr 0xa6003e4, size 0x8, virtual false, abstract: false, final false
inline bool get_overlayEnabled() ;

static inline void setStaticF__Corners(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF__FrustumPlanes(::ArrayW<::UnityEngine::Plane>  value) ;

/// @brief Method set_overlayEnabled, addr 0xa6003ec, size 0xec, virtual false, abstract: false, final false
inline void set_overlayEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvas(OVROverlayCanvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvas(OVROverlayCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12013};

/// @brief Field kOptimalResolutionScale offset 0xffffffff size 0x4
static constexpr float_t  kOptimalResolutionScale{static_cast<float_t>(2.0f)};

/// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _overlay, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlay>  ____overlay;

/// @brief Field _meshRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____meshRenderer;

/// @brief Field _meshGenerator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  ____meshGenerator;

/// @brief Field _renderTexture, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____renderTexture;

/// @brief Field _imposterMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____imposterMaterial;

/// @brief Field _optimalResolutionInitialized, offset: 0x50, size: 0x1, def value: None
 bool  ____optimalResolutionInitialized;

/// @brief Field _optimalResolutionWidth, offset: 0x54, size: 0x4, def value: None
 float_t  ____optimalResolutionWidth;

/// @brief Field _optimalResolutionHeight, offset: 0x58, size: 0x4, def value: None
 float_t  ____optimalResolutionHeight;

/// @brief Field _lastPixelWidth, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____lastPixelWidth;

/// @brief Field _lastPixelHeight, offset: 0x60, size: 0x4, def value: None
 int32_t  ____lastPixelHeight;

/// @brief Field _imposterTextureOffset, offset: 0x64, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____imposterTextureOffset;

/// @brief Field _imposterTextureScale, offset: 0x6c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____imposterTextureScale;

/// @brief Field _frameIsReady, offset: 0x74, size: 0x1, def value: None
 bool  ____frameIsReady;

/// @brief Field _useTempRT, offset: 0x75, size: 0x1, def value: None
 bool  ____useTempRT;

/// [SerializeField]
/// @brief Field _enableMipmapping, offset: 0x76, size: 0x1, def value: None
 bool  ____enableMipmapping;

/// [SerializeField]
/// @brief Field _dynamicResolution, offset: 0x77, size: 0x1, def value: None
 bool  ____dynamicResolution;

/// [SerializeField]
/// @brief Field _redrawResolutionThreshold, offset: 0x78, size: 0x4, def value: None
 int32_t  ____redrawResolutionThreshold;

/// @brief Field rectTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___rectTransform;

/// [FormerlySerializedAs("MaxTextureSize")]
/// @brief Field maxTextureSize, offset: 0x88, size: 0x4, def value: None
 int32_t  ___maxTextureSize;

/// @brief Field manualRedraw, offset: 0x8c, size: 0x1, def value: None
 bool  ___manualRedraw;

/// [FormerlySerializedAs("DrawRate")]
/// @brief Field renderInterval, offset: 0x90, size: 0x4, def value: None
 int32_t  ___renderInterval;

/// [FormerlySerializedAs("DrawFrameOffset")]
/// @brief Field renderIntervalFrameOffset, offset: 0x94, size: 0x4, def value: None
 int32_t  ___renderIntervalFrameOffset;

/// [FormerlySerializedAs("Expensive")]
/// @brief Field expensive, offset: 0x98, size: 0x1, def value: None
 bool  ___expensive;

/// [FormerlySerializedAs("Layer")]
/// @brief Field layer, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___layer;

/// [FormerlySerializedAs("Opacity")]
/// @brief Field opacity, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlayCanvas_DrawMode  ___opacity;

/// @brief Field shape, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlayCanvas_CanvasShape  ___shape;

/// @brief Field curveRadius, offset: 0xa8, size: 0x4, def value: None
 float_t  ___curveRadius;

/// @brief Field overlapMask, offset: 0xac, size: 0x1, def value: None
 bool  ___overlapMask;

/// @brief Field overlayType, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlay_OverlayType  ___overlayType;

/// [SerializeField]
/// @brief Field _overlayEnabled, offset: 0xb4, size: 0x1, def value: None
 bool  ____overlayEnabled;

/// @brief Field _nonUniformScaleWarningShown, offset: 0xb5, size: 0x1, def value: None
 bool  ____nonUniformScaleWarningShown;

/// [TupleElementNames(new[] { "frameCount", "score" })]
/// @brief Field _lastViewPriorityScore, offset: 0xb8, size: 0x10, def value: None
 ::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>>  ____lastViewPriorityScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____overlay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____meshRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____meshGenerator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____renderTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____imposterMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____optimalResolutionInitialized) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____optimalResolutionWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____optimalResolutionHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____lastPixelWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____lastPixelHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____imposterTextureOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____imposterTextureScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____frameIsReady) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____useTempRT) == 0x75, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____enableMipmapping) == 0x76, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____dynamicResolution) == 0x77, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____redrawResolutionThreshold) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___rectTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___maxTextureSize) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___manualRedraw) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___renderInterval) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___renderIntervalFrameOffset) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___expensive) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___layer) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___opacity) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___shape) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___curveRadius) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___overlapMask) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___overlayType) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____overlayEnabled) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____nonUniformScaleWarningShown) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____lastViewPriorityScore) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvas) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvas/<>c__DisplayClass70_0
class CORDL_TYPE OVROverlayCanvas___c__DisplayClass70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVROverlayCanvas>  __4__this;

/// @brief Field targetLayer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetLayer, put=__cordl_internal_set_targetLayer)) int32_t  targetLayer;

/// @brief Field transforms, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transforms, put=__cordl_internal_set_transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  transforms;

static inline ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0* New_ctor() ;

/// @brief Method <RenderCamera>b__0, addr 0xa6046c4, size 0xb8, virtual false, abstract: false, final false
inline void _RenderCamera_b__0() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_targetLayer() const;

constexpr int32_t& __cordl_internal_get_targetLayer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_transforms() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVROverlayCanvas>  value) ;

constexpr void __cordl_internal_set_targetLayer(int32_t  value) ;

constexpr void __cordl_internal_set_transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0xa603e5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas___c__DisplayClass70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas___c__DisplayClass70_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvas___c__DisplayClass70_0(OVROverlayCanvas___c__DisplayClass70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas___c__DisplayClass70_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvas___c__DisplayClass70_0(OVROverlayCanvas___c__DisplayClass70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12012};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlayCanvas>  _____4__this;

/// @brief Field transforms, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___transforms;

/// @brief Field targetLayer, offset: 0x20, size: 0x4, def value: None
 int32_t  ___targetLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0, ___transforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0, ___targetLayer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: OVROverlayCanvas/<>c__DisplayClass50_0`1<T>
class CORDL_TYPE OVROverlayCanvas___c__DisplayClass50_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

static inline ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>* New_ctor() ;

/// @brief Method <ToSimpleJson>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW _ToSimpleJson_b__0(::System::Reflection::PropertyInfo*  p) ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas___c__DisplayClass50_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas___c__DisplayClass50_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvas___c__DisplayClass50_0_1(OVROverlayCanvas___c__DisplayClass50_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas___c__DisplayClass50_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvas___c__DisplayClass50_0_1(OVROverlayCanvas___c__DisplayClass50_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12011};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 T  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
