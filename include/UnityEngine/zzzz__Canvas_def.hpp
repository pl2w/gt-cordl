#pragma once
// IWYU pragma private; include "UnityEngine/Canvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Canvas)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas_WillRenderCanvases;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderMode;
}
namespace UnityEngine {
struct StandaloneRenderResize;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Canvas_WillRenderCanvases;
}
// Write type traits
MARK_REF_T(::UnityEngine::Canvas*);
MARK_REF_T(::UnityEngine::Canvas_WillRenderCanvases*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Canvas*, "UnityEngine", "Canvas");
DEFINE_IL2CPP_CLASS(::UnityEngine::Canvas_WillRenderCanvases*, "UnityEngine", "Canvas/WillRenderCanvases");
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// [NativeHeader("Modules/UI/UIStructs.h")]
// [NativeHeader("Modules/UI/CanvasManager.h")]
// [NativeHeader("Modules/UI/Canvas.h")]
// [NativeClass("UI::Canvas")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Canvas
class CORDL_TYPE Canvas : public ::UnityEngine::Behaviour {
public:
// Declarations
using WillRenderCanvases = ::UnityEngine::Canvas_WillRenderCanvases;

/// @brief Field <externBeginRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externBeginRenderOverlays_k__BackingField, put=setStaticF__externBeginRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externBeginRenderOverlays_k__BackingField;

/// @brief Field <externEndRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externEndRenderOverlays_k__BackingField, put=setStaticF__externEndRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externEndRenderOverlays_k__BackingField;

/// @brief Field <externRenderOverlaysBefore>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externRenderOverlaysBefore_k__BackingField, put=setStaticF__externRenderOverlaysBefore_k__BackingField)) ::System::Action_2<int32_t,int32_t>*  _externRenderOverlaysBefore_k__BackingField;

 __declspec(property(get=get_additionalShaderChannels, put=set_additionalShaderChannels)) ::UnityEngine::AdditionalCanvasShaderChannels  additionalShaderChannels;

 __declspec(property(get=get_cachedSortingLayerValue)) int32_t  cachedSortingLayerValue;

 __declspec(property(get=get_isRootCanvas)) bool  isRootCanvas;

/// @brief [NativeProperty("SortingBucketNormalizedSize", false, (UnityEngine.Bindings.TargetType)0)]
 __declspec(property(get=get_normalizedSortingGridSize, put=set_normalizedSortingGridSize)) float_t  normalizedSortingGridSize;

 __declspec(property(get=get_overridePixelPerfect, put=set_overridePixelPerfect)) bool  overridePixelPerfect;

 __declspec(property(get=get_overrideSorting, put=set_overrideSorting)) bool  overrideSorting;

 __declspec(property(get=get_pixelPerfect, put=set_pixelPerfect)) bool  pixelPerfect;

 __declspec(property(get=get_pixelRect)) ::UnityEngine::Rect  pixelRect;

 __declspec(property(get=get_planeDistance, put=set_planeDistance)) float_t  planeDistance;

/// @brief Field preWillRenderCanvases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preWillRenderCanvases, put=setStaticF_preWillRenderCanvases)) ::UnityEngine::Canvas_WillRenderCanvases*  preWillRenderCanvases;

 __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit)) float_t  referencePixelsPerUnit;

 __declspec(property(get=get_renderMode, put=set_renderMode)) ::UnityEngine::RenderMode  renderMode;

 __declspec(property(get=get_renderOrder)) int32_t  renderOrder;

 __declspec(property(get=get_renderingDisplaySize)) ::UnityEngine::Vector2  renderingDisplaySize;

 __declspec(property(get=get_rootCanvas)) ::UnityW<::UnityEngine::Canvas>  rootCanvas;

 __declspec(property(get=get_scaleFactor, put=set_scaleFactor)) float_t  scaleFactor;

/// [Obsolete("Setting normalizedSize via a int is not supported. Please use normalizedSortingGridSize", false)]
/// @brief [NativeProperty("SortingBucketNormalizedSize", false, (UnityEngine.Bindings.TargetType)0)]
 __declspec(property(get=get_sortingGridNormalizedSize, put=set_sortingGridNormalizedSize)) int32_t  sortingGridNormalizedSize;

 __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingLayerName, put=set_sortingLayerName)) ::StringW  sortingLayerName;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) int32_t  sortingOrder;

 __declspec(property(get=get_targetDisplay, put=set_targetDisplay)) int32_t  targetDisplay;

 __declspec(property(get=get_updateRectTransformForStandalone, put=set_updateRectTransformForStandalone)) ::UnityEngine::StandaloneRenderResize  updateRectTransformForStandalone;

 __declspec(property(get=get_vertexColorAlwaysGammaSpace, put=set_vertexColorAlwaysGammaSpace)) bool  vertexColorAlwaysGammaSpace;

/// @brief Field willRenderCanvases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_willRenderCanvases, put=setStaticF_willRenderCanvases)) ::UnityEngine::Canvas_WillRenderCanvases*  willRenderCanvases;

/// @brief [NativeProperty("Camera", false, (UnityEngine.Bindings.TargetType)0)]
 __declspec(property(get=get_worldCamera, put=set_worldCamera)) ::UnityW<::UnityEngine::Camera>  worldCamera;

/// [RequiredByNativeCode]
/// @brief Method BeginRenderExtraOverlays, addr 0xb8e9a14, size 0x6c, virtual false, abstract: false, final false
static inline void BeginRenderExtraOverlays(int32_t  displayIndex) ;

/// [RequiredByNativeCode]
/// @brief Method EndRenderExtraOverlays, addr 0xb8e9af4, size 0x6c, virtual false, abstract: false, final false
static inline void EndRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method ForceUpdateCanvases, addr 0xb8e993c, size 0x10, virtual false, abstract: false, final false
static inline void ForceUpdateCanvases() ;

/// [FreeFunction("UI::GetDefaultUIMaterial")]
/// @brief Method GetDefaultCanvasMaterial, addr 0xb8e9768, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultCanvasMaterial() ;

/// @brief Method GetDefaultCanvasMaterial_Injected, addr 0xb8e97c8, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDefaultCanvasMaterial_Injected() ;

/// [Obsolete("Shared default material now used for text and general UI elements, call Canvas.GetDefaultCanvasMaterial()", false)]
/// [FreeFunction("UI::GetDefaultUIMaterial")]
/// @brief Method GetDefaultCanvasTextMaterial, addr 0xb8e96e0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultCanvasTextMaterial() ;

/// @brief Method GetDefaultCanvasTextMaterial_Injected, addr 0xb8e9740, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDefaultCanvasTextMaterial_Injected() ;

/// [FreeFunction("UI::GetETC1SupportedCanvasMaterial")]
/// @brief Method GetETC1SupportedCanvasMaterial, addr 0xb8e97f0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetETC1SupportedCanvasMaterial() ;

/// @brief Method GetETC1SupportedCanvasMaterial_Injected, addr 0xb8e9850, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetETC1SupportedCanvasMaterial_Injected() ;

static inline ::UnityEngine::Canvas* New_ctor() ;

/// [RequiredByNativeCode]
/// @brief Method RenderExtraOverlaysBefore, addr 0xb8e9a80, size 0x74, virtual false, abstract: false, final false
static inline void RenderExtraOverlaysBefore(int32_t  displayIndex, int32_t  sortingOrder) ;

/// [RequiredByNativeCode]
/// @brief Method SendPreWillRenderCanvases, addr 0xb8e994c, size 0x64, virtual false, abstract: false, final false
static inline void SendPreWillRenderCanvases() ;

/// [RequiredByNativeCode]
/// @brief Method SendWillRenderCanvases, addr 0xb8e99b0, size 0x64, virtual false, abstract: false, final false
static inline void SendWillRenderCanvases() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// [FreeFunction("UI::CanvasManager::SetExternalCanvasEnabled")]
/// @brief Method SetExternalCanvasEnabled, addr 0xb8e91dc, size 0x3c, virtual false, abstract: false, final false
static inline void SetExternalCanvasEnabled(bool  enabled) ;

/// @brief Method UpdateCanvasRectTransform, addr 0xb8e9878, size 0x80, virtual false, abstract: false, final false
inline void UpdateCanvasRectTransform(bool  alignWithCamera) ;

/// @brief Method UpdateCanvasRectTransform_Injected, addr 0xb8e98f8, size 0x44, virtual false, abstract: false, final false
static inline void UpdateCanvasRectTransform_Injected(::System::IntPtr  _unity_self, bool  alignWithCamera) ;

/// @brief Method .ctor, addr 0xb8e9b60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_preWillRenderCanvases, addr 0xb8e7204, size 0xb8, virtual false, abstract: false, final false
static inline void add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// [CompilerGenerated]
/// @brief Method add_willRenderCanvases, addr 0xb8e7374, size 0xbc, virtual false, abstract: false, final false
static inline void add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline ::System::Action_1<int32_t>* getStaticF__externBeginRenderOverlays_k__BackingField() ;

static inline ::System::Action_1<int32_t>* getStaticF__externEndRenderOverlays_k__BackingField() ;

static inline ::System::Action_2<int32_t,int32_t>* getStaticF__externRenderOverlaysBefore_k__BackingField() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* getStaticF_preWillRenderCanvases() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* getStaticF_willRenderCanvases() ;

/// @brief Method get_additionalShaderChannels, addr 0xb8e8838, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() ;

/// @brief Method get_additionalShaderChannels_Injected, addr 0xb8e88b0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cachedSortingLayerValue, addr 0xb8e8784, size 0x78, virtual false, abstract: false, final false
inline int32_t get_cachedSortingLayerValue() ;

/// @brief Method get_cachedSortingLayerValue_Injected, addr 0xb8e87fc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_cachedSortingLayerValue_Injected(::System::IntPtr  _unity_self) ;

/// [CompilerGenerated]
/// @brief Method get_externBeginRenderOverlays, addr 0xb8e9014, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externBeginRenderOverlays() ;

/// [CompilerGenerated]
/// @brief Method get_externEndRenderOverlays, addr 0xb8e9144, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externEndRenderOverlays() ;

/// [CompilerGenerated]
/// @brief Method get_externRenderOverlaysBefore, addr 0xb8e90ac, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_2<int32_t,int32_t>* get_externRenderOverlaysBefore() ;

/// @brief Method get_isRootCanvas, addr 0xb8e7664, size 0x78, virtual false, abstract: false, final false
inline bool get_isRootCanvas() ;

/// @brief Method get_isRootCanvas_Injected, addr 0xb8e76dc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isRootCanvas_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_normalizedSortingGridSize, addr 0xb8e93e0, size 0x78, virtual false, abstract: false, final false
inline float_t get_normalizedSortingGridSize() ;

/// @brief Method get_normalizedSortingGridSize_Injected, addr 0xb8e9458, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_normalizedSortingGridSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_overridePixelPerfect, addr 0xb8e7b00, size 0x78, virtual false, abstract: false, final false
inline bool get_overridePixelPerfect() ;

/// @brief Method get_overridePixelPerfect_Injected, addr 0xb8e7b78, size 0x3c, virtual false, abstract: false, final false
static inline bool get_overridePixelPerfect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_overrideSorting, addr 0xb8e81a4, size 0x78, virtual false, abstract: false, final false
inline bool get_overrideSorting() ;

/// @brief Method get_overrideSorting_Injected, addr 0xb8e821c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_overrideSorting_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pixelPerfect, addr 0xb8e7df0, size 0x78, virtual false, abstract: false, final false
inline bool get_pixelPerfect() ;

/// @brief Method get_pixelPerfect_Injected, addr 0xb8e7e68, size 0x3c, virtual false, abstract: false, final false
static inline bool get_pixelPerfect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pixelRect, addr 0xb8e7718, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0xb8e77ac, size 0x44, virtual false, abstract: false, final false
static inline void get_pixelRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_planeDistance, addr 0xb8e7f68, size 0x78, virtual false, abstract: false, final false
inline float_t get_planeDistance() ;

/// @brief Method get_planeDistance_Injected, addr 0xb8e7fe0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_planeDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_referencePixelsPerUnit, addr 0xb8e7978, size 0x78, virtual false, abstract: false, final false
inline float_t get_referencePixelsPerUnit() ;

/// @brief Method get_referencePixelsPerUnit_Injected, addr 0xb8e79f0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_referencePixelsPerUnit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderMode, addr 0xb8e74ec, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::RenderMode get_renderMode() ;

/// @brief Method get_renderMode_Injected, addr 0xb8e7564, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderMode get_renderMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderOrder, addr 0xb8e80f0, size 0x78, virtual false, abstract: false, final false
inline int32_t get_renderOrder() ;

/// @brief Method get_renderOrder_Injected, addr 0xb8e8168, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_renderOrder_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderingDisplaySize, addr 0xb8e8dd0, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_renderingDisplaySize() ;

/// @brief Method get_renderingDisplaySize_Injected, addr 0xb8e8e58, size 0x44, virtual false, abstract: false, final false
static inline void get_renderingDisplaySize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rootCanvas, addr 0xb8e8d00, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get_rootCanvas() ;

/// @brief Method get_rootCanvas_Injected, addr 0xb8e8d94, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_rootCanvas_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_scaleFactor, addr 0xb8e77f0, size 0x78, virtual false, abstract: false, final false
inline float_t get_scaleFactor() ;

/// @brief Method get_scaleFactor_Injected, addr 0xb8e7868, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_scaleFactor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingGridNormalizedSize, addr 0xb8e9568, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingGridNormalizedSize() ;

/// @brief Method get_sortingGridNormalizedSize_Injected, addr 0xb8e95e0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingGridNormalizedSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingLayerID, addr 0xb8e860c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingLayerID_Injected, addr 0xb8e8684, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingLayerID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingLayerName, addr 0xb8e89b0, size 0x12c, virtual false, abstract: false, final false
inline ::StringW get_sortingLayerName() ;

/// @brief Method get_sortingLayerName_Injected, addr 0xb8e8adc, size 0x44, virtual false, abstract: false, final false
static inline void get_sortingLayerName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_sortingOrder, addr 0xb8e831c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_sortingOrder_Injected, addr 0xb8e8394, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingOrder_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetDisplay, addr 0xb8e8494, size 0x78, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_targetDisplay_Injected, addr 0xb8e850c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_targetDisplay_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_updateRectTransformForStandalone, addr 0xb8e8e9c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::StandaloneRenderResize get_updateRectTransformForStandalone() ;

/// @brief Method get_updateRectTransformForStandalone_Injected, addr 0xb8e8f14, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::StandaloneRenderResize get_updateRectTransformForStandalone_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertexColorAlwaysGammaSpace, addr 0xb8e7c78, size 0x78, virtual false, abstract: false, final false
inline bool get_vertexColorAlwaysGammaSpace() ;

/// @brief Method get_vertexColorAlwaysGammaSpace_Injected, addr 0xb8e7cf0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_vertexColorAlwaysGammaSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldCamera, addr 0xb8e9218, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_worldCamera() ;

/// @brief Method get_worldCamera_Injected, addr 0xb8e92ac, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_worldCamera_Injected(::System::IntPtr  _unity_self) ;

/// [CompilerGenerated]
/// @brief Method remove_preWillRenderCanvases, addr 0xb8e72bc, size 0xb8, virtual false, abstract: false, final false
static inline void remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_willRenderCanvases, addr 0xb8e7430, size 0xbc, virtual false, abstract: false, final false
static inline void remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline void setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline void setStaticF_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method set_additionalShaderChannels, addr 0xb8e88ec, size 0x80, virtual false, abstract: false, final false
inline void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels  value) ;

/// @brief Method set_additionalShaderChannels_Injected, addr 0xb8e896c, size 0x44, virtual false, abstract: false, final false
static inline void set_additionalShaderChannels_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AdditionalCanvasShaderChannels  value) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// [CompilerGenerated]
/// @brief Method set_externBeginRenderOverlays, addr 0xb8e905c, size 0x50, virtual false, abstract: false, final false
static inline void set_externBeginRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method set_externEndRenderOverlays, addr 0xb8e918c, size 0x50, virtual false, abstract: false, final false
static inline void set_externEndRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method set_externRenderOverlaysBefore, addr 0xb8e90f4, size 0x50, virtual false, abstract: false, final false
static inline void set_externRenderOverlaysBefore(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method set_normalizedSortingGridSize, addr 0xb8e9494, size 0x88, virtual false, abstract: false, final false
inline void set_normalizedSortingGridSize(float_t  value) ;

/// @brief Method set_normalizedSortingGridSize_Injected, addr 0xb8e951c, size 0x4c, virtual false, abstract: false, final false
static inline void set_normalizedSortingGridSize_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_overridePixelPerfect, addr 0xb8e7bb4, size 0x80, virtual false, abstract: false, final false
inline void set_overridePixelPerfect(bool  value) ;

/// @brief Method set_overridePixelPerfect_Injected, addr 0xb8e7c34, size 0x44, virtual false, abstract: false, final false
static inline void set_overridePixelPerfect_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_overrideSorting, addr 0xb8e8258, size 0x80, virtual false, abstract: false, final false
inline void set_overrideSorting(bool  value) ;

/// @brief Method set_overrideSorting_Injected, addr 0xb8e82d8, size 0x44, virtual false, abstract: false, final false
static inline void set_overrideSorting_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_pixelPerfect, addr 0xb8e7ea4, size 0x80, virtual false, abstract: false, final false
inline void set_pixelPerfect(bool  value) ;

/// @brief Method set_pixelPerfect_Injected, addr 0xb8e7f24, size 0x44, virtual false, abstract: false, final false
static inline void set_pixelPerfect_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_planeDistance, addr 0xb8e801c, size 0x88, virtual false, abstract: false, final false
inline void set_planeDistance(float_t  value) ;

/// @brief Method set_planeDistance_Injected, addr 0xb8e80a4, size 0x4c, virtual false, abstract: false, final false
static inline void set_planeDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_referencePixelsPerUnit, addr 0xb8e7a2c, size 0x88, virtual false, abstract: false, final false
inline void set_referencePixelsPerUnit(float_t  value) ;

/// @brief Method set_referencePixelsPerUnit_Injected, addr 0xb8e7ab4, size 0x4c, virtual false, abstract: false, final false
static inline void set_referencePixelsPerUnit_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_renderMode, addr 0xb8e75a0, size 0x80, virtual false, abstract: false, final false
inline void set_renderMode(::UnityEngine::RenderMode  value) ;

/// @brief Method set_renderMode_Injected, addr 0xb8e7620, size 0x44, virtual false, abstract: false, final false
static inline void set_renderMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RenderMode  value) ;

/// @brief Method set_scaleFactor, addr 0xb8e78a4, size 0x88, virtual false, abstract: false, final false
inline void set_scaleFactor(float_t  value) ;

/// @brief Method set_scaleFactor_Injected, addr 0xb8e792c, size 0x4c, virtual false, abstract: false, final false
static inline void set_scaleFactor_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_sortingGridNormalizedSize, addr 0xb8e961c, size 0x80, virtual false, abstract: false, final false
inline void set_sortingGridNormalizedSize(int32_t  value) ;

/// @brief Method set_sortingGridNormalizedSize_Injected, addr 0xb8e969c, size 0x44, virtual false, abstract: false, final false
static inline void set_sortingGridNormalizedSize_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_sortingLayerID, addr 0xb8e86c0, size 0x80, virtual false, abstract: false, final false
inline void set_sortingLayerID(int32_t  value) ;

/// @brief Method set_sortingLayerID_Injected, addr 0xb8e8740, size 0x44, virtual false, abstract: false, final false
static inline void set_sortingLayerID_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_sortingLayerName, addr 0xb8e8b20, size 0x19c, virtual false, abstract: false, final false
inline void set_sortingLayerName(::StringW  value) ;

/// @brief Method set_sortingLayerName_Injected, addr 0xb8e8cbc, size 0x44, virtual false, abstract: false, final false
static inline void set_sortingLayerName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_sortingOrder, addr 0xb8e83d0, size 0x80, virtual false, abstract: false, final false
inline void set_sortingOrder(int32_t  value) ;

/// @brief Method set_sortingOrder_Injected, addr 0xb8e8450, size 0x44, virtual false, abstract: false, final false
static inline void set_sortingOrder_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_targetDisplay, addr 0xb8e8548, size 0x80, virtual false, abstract: false, final false
inline void set_targetDisplay(int32_t  value) ;

/// @brief Method set_targetDisplay_Injected, addr 0xb8e85c8, size 0x44, virtual false, abstract: false, final false
static inline void set_targetDisplay_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_updateRectTransformForStandalone, addr 0xb8e8f50, size 0x80, virtual false, abstract: false, final false
inline void set_updateRectTransformForStandalone(::UnityEngine::StandaloneRenderResize  value) ;

/// @brief Method set_updateRectTransformForStandalone_Injected, addr 0xb8e8fd0, size 0x44, virtual false, abstract: false, final false
static inline void set_updateRectTransformForStandalone_Injected(::System::IntPtr  _unity_self, ::UnityEngine::StandaloneRenderResize  value) ;

/// @brief Method set_vertexColorAlwaysGammaSpace, addr 0xb8e7d2c, size 0x80, virtual false, abstract: false, final false
inline void set_vertexColorAlwaysGammaSpace(bool  value) ;

/// @brief Method set_vertexColorAlwaysGammaSpace_Injected, addr 0xb8e7dac, size 0x44, virtual false, abstract: false, final false
static inline void set_vertexColorAlwaysGammaSpace_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_worldCamera, addr 0xb8e92e8, size 0xb4, virtual false, abstract: false, final false
inline void set_worldCamera(::UnityEngine::Camera*  value) ;

/// @brief Method set_worldCamera_Injected, addr 0xb8e939c, size 0x44, virtual false, abstract: false, final false
static inline void set_worldCamera_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas(Canvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas(Canvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Canvas) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Canvas/WillRenderCanvases
class CORDL_TYPE Canvas_WillRenderCanvases : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb8e9c04, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb8e9b68, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas_WillRenderCanvases() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas_WillRenderCanvases", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas_WillRenderCanvases(Canvas_WillRenderCanvases && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas_WillRenderCanvases", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas_WillRenderCanvases(Canvas_WillRenderCanvases const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32089};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Canvas_WillRenderCanvases) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
