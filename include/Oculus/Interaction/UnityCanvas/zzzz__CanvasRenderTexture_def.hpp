#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasRenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasRenderTexture_DriveMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRenderTexture)
namespace GlobalNamespace {
struct CanvasRenderTexture_DriveMode;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture_Properties;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture_TransformChangeListener;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture___c;
}
namespace Oculus::Interaction::UnityCanvas {
class TransformChangeListener_CanvasRenderTexture___c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture_Properties;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture_TransformChangeListener;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture___c;
}
namespace Oculus::Interaction::UnityCanvas {
class TransformChangeListener_CanvasRenderTexture___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*);
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_Properties*);
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener*);
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c*);
MARK_REF_T(::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_Properties*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/Properties");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/TransformChangeListener");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/TransformChangeListener/<>c");
// [DisallowMultipleComponent]
// Dependencies Oculus.Interaction.UnityCanvas.CanvasRenderTexture::DriveMode, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector2Int
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRenderTexture
class CORDL_TYPE CanvasRenderTexture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DriveMode = ::GlobalNamespace::CanvasRenderTexture_DriveMode;

using Properties = ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_Properties;

using TransformChangeListener = ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener;

using __c = ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c;

/// @brief Field DEFAULT_TEXTURE_RES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DEFAULT_TEXTURE_RES, put=setStaticF_DEFAULT_TEXTURE_RES)) ::UnityEngine::Vector2Int  DEFAULT_TEXTURE_RES;

/// @brief Field OnUpdateRenderTexture, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUpdateRenderTexture, put=__cordl_internal_set_OnUpdateRenderTexture)) ::System::Action_1<::UnityW<::UnityEngine::Texture>>*  OnUpdateRenderTexture;

 __declspec(property(get=get_OverlayCamera)) ::UnityW<::UnityEngine::Camera>  OverlayCamera;

 __declspec(property(get=get_RenderScale, put=set_RenderScale)) int32_t  RenderScale;

 __declspec(property(get=get_RenderingLayers)) ::UnityEngine::LayerMask  RenderingLayers;

 __declspec(property(get=get_Texture)) ::UnityW<::UnityEngine::Texture>  Texture;

/// @brief Field _camera, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _canvas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _dimensionsDriveMode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dimensionsDriveMode, put=__cordl_internal_set__dimensionsDriveMode)) ::GlobalNamespace::CanvasRenderTexture_DriveMode  _dimensionsDriveMode;

/// @brief Field _generateMipMaps, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__generateMipMaps, put=__cordl_internal_set__generateMipMaps)) bool  _generateMipMaps;

/// @brief Field _listener, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__listener, put=__cordl_internal_set__listener)) ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener>  _listener;

/// @brief Field _pixelsPerUnit, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pixelsPerUnit, put=__cordl_internal_set__pixelsPerUnit)) int32_t  _pixelsPerUnit;

/// @brief Field _renderScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderScale, put=__cordl_internal_set__renderScale)) int32_t  _renderScale;

/// @brief Field _renderingLayers, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderingLayers, put=__cordl_internal_set__renderingLayers)) ::UnityEngine::LayerMask  _renderingLayers;

/// @brief Field _resolution, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__resolution, put=__cordl_internal_set__resolution)) ::UnityEngine::Vector2Int  _resolution;

/// @brief Field _started, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _tex, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__tex, put=__cordl_internal_set__tex)) ::UnityW<::UnityEngine::RenderTexture>  _tex;

/// @brief Method CalcAutoResolution, addr 0xa4915a0, size 0x2d0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int CalcAutoResolution() ;

/// @brief Method CreateChildObject, addr 0xa491ce0, size 0x1a8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> CreateChildObject(::StringW  name) ;

/// @brief Method GetBaseResolutionToUse, addr 0xa48fd8c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int GetBaseResolutionToUse() ;

/// @brief Method GetScaledResolutionToUse, addr 0xa491880, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int GetScaledResolutionToUse() ;

/// @brief Method InjectAllCanvasRenderTexture, addr 0xa492260, size 0x48, virtual false, abstract: false, final false
inline void InjectAllCanvasRenderTexture(::UnityEngine::Canvas*  canvas, int32_t  pixelsPerUnit, int32_t  renderScale, ::UnityEngine::LayerMask  renderingLayers, bool  generateMipMaps) ;

/// @brief Method InjectCanvas, addr 0xa4922a8, size 0x8, virtual false, abstract: false, final false
inline void InjectCanvas(::UnityEngine::Canvas*  canvas) ;

/// @brief Method InjectGenerateMipMaps, addr 0xa4922c8, size 0x8, virtual false, abstract: false, final false
inline void InjectGenerateMipMaps(bool  generateMipMaps) ;

/// @brief Method InjectPixelsPerUnit, addr 0xa4922b0, size 0x8, virtual false, abstract: false, final false
inline void InjectPixelsPerUnit(int32_t  pixelsPerUnit) ;

/// @brief Method InjectRenderScale, addr 0xa4922b8, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderScale(int32_t  renderScale) ;

/// @brief Method InjectRenderingLayers, addr 0xa4922c0, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderingLayers(::UnityEngine::LayerMask  renderingLayers) ;

static inline ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture* New_ctor() ;

/// @brief Method OnDisable, addr 0xa491ab4, size 0x190, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4918f4, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PixelsToUnits, addr 0xa48fda0, size 0x18, virtual false, abstract: false, final false
inline float_t PixelsToUnits(float_t  pixels) ;

/// @brief Method Start, addr 0xa4918c8, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnitsToPixels, addr 0xa491870, size 0x10, virtual false, abstract: false, final false
inline float_t UnitsToPixels(float_t  units) ;

/// @brief Method UpdateCamera, addr 0xa491398, size 0x1f8, virtual false, abstract: false, final false
inline void UpdateCamera() ;

/// @brief Method UpdateCameraCullingMask, addr 0xa4921c8, size 0x98, virtual false, abstract: false, final false
inline void UpdateCameraCullingMask() ;

/// @brief Method UpdateOrthoSize, addr 0xa492104, size 0xc4, virtual false, abstract: false, final false
inline void UpdateOrthoSize() ;

/// @brief Method UpdateRenderTexture, addr 0xa491e88, size 0x27c, virtual false, abstract: false, final false
inline void UpdateRenderTexture() ;

/// @brief Method WhenCanvasRectTransformDimensionsChanged, addr 0xa491ab0, size 0x4, virtual false, abstract: false, final false
inline void WhenCanvasRectTransformDimensionsChanged() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>* const& __cordl_internal_get_OnUpdateRenderTexture() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>*& __cordl_internal_get_OnUpdateRenderTexture() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr ::GlobalNamespace::CanvasRenderTexture_DriveMode const& __cordl_internal_get__dimensionsDriveMode() const;

constexpr ::GlobalNamespace::CanvasRenderTexture_DriveMode& __cordl_internal_get__dimensionsDriveMode() ;

constexpr bool const& __cordl_internal_get__generateMipMaps() const;

constexpr bool& __cordl_internal_get__generateMipMaps() ;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener> const& __cordl_internal_get__listener() const;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener>& __cordl_internal_get__listener() ;

constexpr int32_t const& __cordl_internal_get__pixelsPerUnit() const;

constexpr int32_t& __cordl_internal_get__pixelsPerUnit() ;

constexpr int32_t const& __cordl_internal_get__renderScale() const;

constexpr int32_t& __cordl_internal_get__renderScale() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__renderingLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__renderingLayers() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__resolution() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__resolution() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__tex() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__tex() ;

constexpr void __cordl_internal_set_OnUpdateRenderTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>*  value) ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__dimensionsDriveMode(::GlobalNamespace::CanvasRenderTexture_DriveMode  value) ;

constexpr void __cordl_internal_set__generateMipMaps(bool  value) ;

constexpr void __cordl_internal_set__listener(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener>  value) ;

constexpr void __cordl_internal_set__pixelsPerUnit(int32_t  value) ;

constexpr void __cordl_internal_set__renderScale(int32_t  value) ;

constexpr void __cordl_internal_set__renderingLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__resolution(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__tex(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0xa4922d0, size 0x148, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector2Int getStaticF_DEFAULT_TEXTURE_RES() ;

/// @brief Method get_OverlayCamera, addr 0xa491590, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_OverlayCamera() ;

/// @brief Method get_RenderScale, addr 0xa491278, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RenderScale() ;

/// @brief Method get_RenderingLayers, addr 0xa491270, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_RenderingLayers() ;

/// @brief Method get_Texture, addr 0xa491598, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_Texture() ;

static inline void setStaticF_DEFAULT_TEXTURE_RES(::UnityEngine::Vector2Int  value) ;

/// @brief Method set_RenderScale, addr 0xa491280, size 0x118, virtual false, abstract: false, final false
inline void set_RenderScale(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRenderTexture(CanvasRenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRenderTexture(CanvasRenderTexture const& ) = delete;

/// @brief Field DEFAULT_UI_LAYERMASK offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_UI_LAYERMASK{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16060};

/// [Tooltip("The Unity canvas that will be rendered.")]
/// [SerializeField]
/// @brief Field _canvas, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// [Tooltip("Used to increase resolution of rendered canvas. If you need extra resolution, you can use this as a whole-integer multiplier of the final resolution used to render the texture.")]
/// [Range(1, 3)]
/// [Delayed]
/// [SerializeField]
/// @brief Field _renderScale, offset: 0x28, size: 0x4, def value: None
 int32_t  ____renderScale;

/// [Tooltip("If set to auto, texture dimensions will take the size of the attached RectTransform into consideration, in addition to the configured pixel-per-unit ratio.")]
/// [SerializeField]
/// @brief Field _dimensionsDriveMode, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::CanvasRenderTexture_DriveMode  ____dimensionsDriveMode;

/// [Tooltip("The exact pixel resolution of the texture used for interface rendering.")]
/// [Delayed]
/// [SerializeField]
/// @brief Field _resolution, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ____resolution;

/// [Tooltip("Whether or not mip-maps should be auto-generated for the texture. Can help aliasing if the texture can be viewed from many difference distances.")]
/// [SerializeField]
/// @brief Field _generateMipMaps, offset: 0x38, size: 0x1, def value: None
 bool  ____generateMipMaps;

/// [Tooltip("Pixels per unit ratio used to drive the texture dimensions. Determines the RenderTexture size from the canvas world size.")]
/// [SerializeField]
/// @brief Field _pixelsPerUnit, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____pixelsPerUnit;

/// [Header("Rendering Settings")]
/// [Tooltip("The layers to render when the rendering texture is created. All child renderers should be part of this mask.")]
/// [SerializeField]
/// @brief Field _renderingLayers, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____renderingLayers;

/// @brief Field OnUpdateRenderTexture, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Texture>>*  ___OnUpdateRenderTexture;

/// @brief Field _listener, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener>  ____listener;

/// @brief Field _tex, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____tex;

/// @brief Field _camera, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _started, offset: 0x68, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____canvas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____renderScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____dimensionsDriveMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____resolution) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____generateMipMaps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____pixelsPerUnit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____renderingLayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ___OnUpdateRenderTexture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____listener) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____tex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____camera) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture, ____started) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/<>c
class CORDL_TYPE CanvasRenderTexture___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c*  __9;

/// @brief Field <>9__46_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__46_0, put=setStaticF___9__46_0)) ::System::Action_1<::UnityW<::UnityEngine::Texture>>*  __9__46_0;

static inline ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c* New_ctor() ;

/// @brief Method <.ctor>b__46_0, addr 0xa4927d0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__46_0(::UnityEngine::Texture*  _p0_) ;

/// @brief Method .ctor, addr 0xa4927c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Texture>>* getStaticF___9__46_0() ;

static inline void setStaticF___9(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c*  value) ;

static inline void setStaticF___9__46_0(::System::Action_1<::UnityW<::UnityEngine::Texture>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderTexture___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRenderTexture___c(CanvasRenderTexture___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRenderTexture___c(CanvasRenderTexture___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16059};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
// Dependencies System.Object
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/Properties
class CORDL_TYPE CanvasRenderTexture_Properties : public ::System::Object {
public:
// Declarations
/// @brief Field Canvas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Canvas, put=setStaticF_Canvas)) ::StringW  Canvas;

/// @brief Field DimensionDriveMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DimensionDriveMode, put=setStaticF_DimensionDriveMode)) ::StringW  DimensionDriveMode;

/// @brief Field GenerateMipMaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GenerateMipMaps, put=setStaticF_GenerateMipMaps)) ::StringW  GenerateMipMaps;

/// @brief Field PixelsPerUnit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PixelsPerUnit, put=setStaticF_PixelsPerUnit)) ::StringW  PixelsPerUnit;

/// @brief Field RenderLayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RenderLayers, put=setStaticF_RenderLayers)) ::StringW  RenderLayers;

/// @brief Field RenderScale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RenderScale, put=setStaticF_RenderScale)) ::StringW  RenderScale;

/// @brief Field Resolution, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Resolution, put=setStaticF_Resolution)) ::StringW  Resolution;

static inline ::StringW getStaticF_Canvas() ;

static inline ::StringW getStaticF_DimensionDriveMode() ;

static inline ::StringW getStaticF_GenerateMipMaps() ;

static inline ::StringW getStaticF_PixelsPerUnit() ;

static inline ::StringW getStaticF_RenderLayers() ;

static inline ::StringW getStaticF_RenderScale() ;

static inline ::StringW getStaticF_Resolution() ;

static inline void setStaticF_Canvas(::StringW  value) ;

static inline void setStaticF_DimensionDriveMode(::StringW  value) ;

static inline void setStaticF_GenerateMipMaps(::StringW  value) ;

static inline void setStaticF_PixelsPerUnit(::StringW  value) ;

static inline void setStaticF_RenderLayers(::StringW  value) ;

static inline void setStaticF_RenderScale(::StringW  value) ;

static inline void setStaticF_Resolution(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderTexture_Properties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture_Properties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRenderTexture_Properties(CanvasRenderTexture_Properties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture_Properties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRenderTexture_Properties(CanvasRenderTexture_Properties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16058};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_Properties) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener
class CORDL_TYPE CanvasRenderTexture_TransformChangeListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c;

/// @brief Field WhenRectTransformDimensionsChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenRectTransformDimensionsChanged, put=__cordl_internal_set_WhenRectTransformDimensionsChanged)) ::System::Action*  WhenRectTransformDimensionsChanged;

static inline ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener* New_ctor() ;

/// @brief Method OnRectTransformDimensionsChange, addr 0xa492464, size 0x20, virtual false, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenRectTransformDimensionsChanged() const;

constexpr ::System::Action*& __cordl_internal_get_WhenRectTransformDimensionsChanged() ;

constexpr void __cordl_internal_set_WhenRectTransformDimensionsChanged(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa492484, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenRectTransformDimensionsChanged, addr 0xa491a14, size 0x9c, virtual false, abstract: false, final false
inline void add_WhenRectTransformDimensionsChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenRectTransformDimensionsChanged, addr 0xa491c44, size 0x9c, virtual false, abstract: false, final false
inline void remove_WhenRectTransformDimensionsChanged(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderTexture_TransformChangeListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture_TransformChangeListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRenderTexture_TransformChangeListener(CanvasRenderTexture_TransformChangeListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderTexture_TransformChangeListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRenderTexture_TransformChangeListener(CanvasRenderTexture_TransformChangeListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16056};

/// [CompilerGenerated]
/// @brief Field WhenRectTransformDimensionsChanged, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___WhenRectTransformDimensionsChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener, ___WhenRectTransformDimensionsChanged) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture_TransformChangeListener) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c
class CORDL_TYPE TransformChangeListener_CanvasRenderTexture___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Action*  __9__4_0;

static inline ::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c* New_ctor() ;

/// @brief Method <.ctor>b__4_0, addr 0xa4925ec, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__4_0() ;

/// @brief Method .ctor, addr 0xa4925e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c*  value) ;

static inline void setStaticF___9__4_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformChangeListener_CanvasRenderTexture___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformChangeListener_CanvasRenderTexture___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformChangeListener_CanvasRenderTexture___c(TransformChangeListener_CanvasRenderTexture___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformChangeListener_CanvasRenderTexture___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformChangeListener_CanvasRenderTexture___c(TransformChangeListener_CanvasRenderTexture___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::TransformChangeListener_CanvasRenderTexture___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
