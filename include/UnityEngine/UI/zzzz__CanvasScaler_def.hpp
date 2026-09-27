#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasScaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_ScaleMode_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_ScreenMatchMode_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_Unit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasScaler)
namespace GlobalNamespace {
struct CanvasScaler_ScaleMode;
}
namespace GlobalNamespace {
struct CanvasScaler_ScreenMatchMode;
}
namespace GlobalNamespace {
struct CanvasScaler_Unit;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class CanvasScaler;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::CanvasScaler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::CanvasScaler*, "UnityEngine.UI", "CanvasScaler");
// [RequireComponent(typeof(UnityEngine.Canvas))]
// [ExecuteAlways]
// [AddComponentMenu("Layout/Canvas Scaler", 101)]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.CanvasScaler::ScaleMode, UnityEngine.UI.CanvasScaler::ScreenMatchMode, UnityEngine.UI.CanvasScaler::Unit, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.CanvasScaler
class CORDL_TYPE CanvasScaler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using ScaleMode = ::GlobalNamespace::CanvasScaler_ScaleMode;

using ScreenMatchMode = ::GlobalNamespace::CanvasScaler_ScreenMatchMode;

using Unit = ::GlobalNamespace::CanvasScaler_Unit;

 __declspec(property(get=get_defaultSpriteDPI, put=set_defaultSpriteDPI)) float_t  defaultSpriteDPI;

 __declspec(property(get=get_dynamicPixelsPerUnit, put=set_dynamicPixelsPerUnit)) float_t  dynamicPixelsPerUnit;

 __declspec(property(get=get_fallbackScreenDPI, put=set_fallbackScreenDPI)) float_t  fallbackScreenDPI;

/// @brief Field m_Canvas, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Canvas, put=__cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas>  m_Canvas;

/// @brief Field m_DefaultSpriteDPI, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultSpriteDPI, put=__cordl_internal_set_m_DefaultSpriteDPI)) float_t  m_DefaultSpriteDPI;

/// @brief Field m_DynamicPixelsPerUnit, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DynamicPixelsPerUnit, put=__cordl_internal_set_m_DynamicPixelsPerUnit)) float_t  m_DynamicPixelsPerUnit;

/// @brief Field m_FallbackScreenDPI, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FallbackScreenDPI, put=__cordl_internal_set_m_FallbackScreenDPI)) float_t  m_FallbackScreenDPI;

/// @brief Field m_MatchWidthOrHeight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MatchWidthOrHeight, put=__cordl_internal_set_m_MatchWidthOrHeight)) float_t  m_MatchWidthOrHeight;

/// @brief Field m_PhysicalUnit, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicalUnit, put=__cordl_internal_set_m_PhysicalUnit)) ::GlobalNamespace::CanvasScaler_Unit  m_PhysicalUnit;

/// @brief Field m_PresetInfoIsWorld, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PresetInfoIsWorld, put=__cordl_internal_set_m_PresetInfoIsWorld)) bool  m_PresetInfoIsWorld;

/// @brief Field m_PrevReferencePixelsPerUnit, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrevReferencePixelsPerUnit, put=__cordl_internal_set_m_PrevReferencePixelsPerUnit)) float_t  m_PrevReferencePixelsPerUnit;

/// @brief Field m_PrevScaleFactor, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrevScaleFactor, put=__cordl_internal_set_m_PrevScaleFactor)) float_t  m_PrevScaleFactor;

/// @brief Field m_ReferencePixelsPerUnit, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ReferencePixelsPerUnit, put=__cordl_internal_set_m_ReferencePixelsPerUnit)) float_t  m_ReferencePixelsPerUnit;

/// @brief Field m_ReferenceResolution, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReferenceResolution, put=__cordl_internal_set_m_ReferenceResolution)) ::UnityEngine::Vector2  m_ReferenceResolution;

/// @brief Field m_ScaleFactor, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScaleFactor, put=__cordl_internal_set_m_ScaleFactor)) float_t  m_ScaleFactor;

/// @brief Field m_ScreenMatchMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScreenMatchMode, put=__cordl_internal_set_m_ScreenMatchMode)) ::GlobalNamespace::CanvasScaler_ScreenMatchMode  m_ScreenMatchMode;

/// @brief Field m_UiScaleMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UiScaleMode, put=__cordl_internal_set_m_UiScaleMode)) ::GlobalNamespace::CanvasScaler_ScaleMode  m_UiScaleMode;

 __declspec(property(get=get_matchWidthOrHeight, put=set_matchWidthOrHeight)) float_t  matchWidthOrHeight;

 __declspec(property(get=get_physicalUnit, put=set_physicalUnit)) ::GlobalNamespace::CanvasScaler_Unit  physicalUnit;

 __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit)) float_t  referencePixelsPerUnit;

 __declspec(property(get=get_referenceResolution, put=set_referenceResolution)) ::UnityEngine::Vector2  referenceResolution;

 __declspec(property(get=get_scaleFactor, put=set_scaleFactor)) float_t  scaleFactor;

 __declspec(property(get=get_screenMatchMode, put=set_screenMatchMode)) ::GlobalNamespace::CanvasScaler_ScreenMatchMode  screenMatchMode;

 __declspec(property(get=get_uiScaleMode, put=set_uiScaleMode)) ::GlobalNamespace::CanvasScaler_ScaleMode  uiScaleMode;

/// @brief Method Canvas_preWillRenderCanvases, addr 0xb8f4b70, size 0x10, virtual false, abstract: false, final false
inline void Canvas_preWillRenderCanvases() ;

/// @brief Method Handle, addr 0xb8f4cb8, size 0x104, virtual true, abstract: false, final false
inline void Handle() ;

/// @brief Method HandleConstantPhysicalSize, addr 0xb8f5034, size 0x68, virtual true, abstract: false, final false
inline void HandleConstantPhysicalSize() ;

/// @brief Method HandleConstantPixelSize, addr 0xb8f4ddc, size 0x20, virtual true, abstract: false, final false
inline void HandleConstantPixelSize() ;

/// @brief Method HandleScaleWithScreenSize, addr 0xb8f4dfc, size 0x238, virtual true, abstract: false, final false
inline void HandleScaleWithScreenSize() ;

/// @brief Method HandleWorldCanvas, addr 0xb8f4dbc, size 0x20, virtual true, abstract: false, final false
inline void HandleWorldCanvas() ;

static inline ::UnityEngine::UI::CanvasScaler* New_ctor() ;

/// @brief Method OnDisable, addr 0xb8f4b80, size 0xa8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb8f4aa0, size 0xd0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetReferencePixelsPerUnit, addr 0xb8f4c78, size 0x40, virtual false, abstract: false, final false
inline void SetReferencePixelsPerUnit(float_t  referencePixelsPerUnit) ;

/// @brief Method SetScaleFactor, addr 0xb8f4c28, size 0x50, virtual false, abstract: false, final false
inline void SetScaleFactor(float_t  scaleFactor) ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas() ;

constexpr float_t const& __cordl_internal_get_m_DefaultSpriteDPI() const;

constexpr float_t& __cordl_internal_get_m_DefaultSpriteDPI() ;

constexpr float_t const& __cordl_internal_get_m_DynamicPixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_DynamicPixelsPerUnit() ;

constexpr float_t const& __cordl_internal_get_m_FallbackScreenDPI() const;

constexpr float_t& __cordl_internal_get_m_FallbackScreenDPI() ;

constexpr float_t const& __cordl_internal_get_m_MatchWidthOrHeight() const;

constexpr float_t& __cordl_internal_get_m_MatchWidthOrHeight() ;

constexpr ::GlobalNamespace::CanvasScaler_Unit const& __cordl_internal_get_m_PhysicalUnit() const;

constexpr ::GlobalNamespace::CanvasScaler_Unit& __cordl_internal_get_m_PhysicalUnit() ;

constexpr bool const& __cordl_internal_get_m_PresetInfoIsWorld() const;

constexpr bool& __cordl_internal_get_m_PresetInfoIsWorld() ;

constexpr float_t const& __cordl_internal_get_m_PrevReferencePixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_PrevReferencePixelsPerUnit() ;

constexpr float_t const& __cordl_internal_get_m_PrevScaleFactor() const;

constexpr float_t& __cordl_internal_get_m_PrevScaleFactor() ;

constexpr float_t const& __cordl_internal_get_m_ReferencePixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_ReferencePixelsPerUnit() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ReferenceResolution() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ReferenceResolution() ;

constexpr float_t const& __cordl_internal_get_m_ScaleFactor() const;

constexpr float_t& __cordl_internal_get_m_ScaleFactor() ;

constexpr ::GlobalNamespace::CanvasScaler_ScreenMatchMode const& __cordl_internal_get_m_ScreenMatchMode() const;

constexpr ::GlobalNamespace::CanvasScaler_ScreenMatchMode& __cordl_internal_get_m_ScreenMatchMode() ;

constexpr ::GlobalNamespace::CanvasScaler_ScaleMode const& __cordl_internal_get_m_UiScaleMode() const;

constexpr ::GlobalNamespace::CanvasScaler_ScaleMode& __cordl_internal_get_m_UiScaleMode() ;

constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set_m_DefaultSpriteDPI(float_t  value) ;

constexpr void __cordl_internal_set_m_DynamicPixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_FallbackScreenDPI(float_t  value) ;

constexpr void __cordl_internal_set_m_MatchWidthOrHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_PhysicalUnit(::GlobalNamespace::CanvasScaler_Unit  value) ;

constexpr void __cordl_internal_set_m_PresetInfoIsWorld(bool  value) ;

constexpr void __cordl_internal_set_m_PrevReferencePixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_PrevScaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_ReferencePixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_ScaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_ScreenMatchMode(::GlobalNamespace::CanvasScaler_ScreenMatchMode  value) ;

constexpr void __cordl_internal_set_m_UiScaleMode(::GlobalNamespace::CanvasScaler_ScaleMode  value) ;

/// @brief Method .ctor, addr 0xb8f4a58, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_defaultSpriteDPI, addr 0xb8f4a2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_defaultSpriteDPI() ;

/// @brief Method get_dynamicPixelsPerUnit, addr 0xb8f4a48, size 0x8, virtual false, abstract: false, final false
inline float_t get_dynamicPixelsPerUnit() ;

/// @brief Method get_fallbackScreenDPI, addr 0xb8f4a1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_fallbackScreenDPI() ;

/// @brief Method get_matchWidthOrHeight, addr 0xb8f49fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_matchWidthOrHeight() ;

/// @brief Method get_physicalUnit, addr 0xb8f4a0c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CanvasScaler_Unit get_physicalUnit() ;

/// @brief Method get_referencePixelsPerUnit, addr 0xb8f4948, size 0x8, virtual false, abstract: false, final false
inline float_t get_referencePixelsPerUnit() ;

/// @brief Method get_referenceResolution, addr 0xb8f4978, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_referenceResolution() ;

/// @brief Method get_scaleFactor, addr 0xb8f4958, size 0x8, virtual false, abstract: false, final false
inline float_t get_scaleFactor() ;

/// @brief Method get_screenMatchMode, addr 0xb8f49ec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CanvasScaler_ScreenMatchMode get_screenMatchMode() ;

/// @brief Method get_uiScaleMode, addr 0xb8f4938, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CanvasScaler_ScaleMode get_uiScaleMode() ;

/// @brief Method set_defaultSpriteDPI, addr 0xb8f4a34, size 0x14, virtual false, abstract: false, final false
inline void set_defaultSpriteDPI(float_t  value) ;

/// @brief Method set_dynamicPixelsPerUnit, addr 0xb8f4a50, size 0x8, virtual false, abstract: false, final false
inline void set_dynamicPixelsPerUnit(float_t  value) ;

/// @brief Method set_fallbackScreenDPI, addr 0xb8f4a24, size 0x8, virtual false, abstract: false, final false
inline void set_fallbackScreenDPI(float_t  value) ;

/// @brief Method set_matchWidthOrHeight, addr 0xb8f4a04, size 0x8, virtual false, abstract: false, final false
inline void set_matchWidthOrHeight(float_t  value) ;

/// @brief Method set_physicalUnit, addr 0xb8f4a14, size 0x8, virtual false, abstract: false, final false
inline void set_physicalUnit(::GlobalNamespace::CanvasScaler_Unit  value) ;

/// @brief Method set_referencePixelsPerUnit, addr 0xb8f4950, size 0x8, virtual false, abstract: false, final false
inline void set_referencePixelsPerUnit(float_t  value) ;

/// @brief Method set_referenceResolution, addr 0xb8f4980, size 0x6c, virtual false, abstract: false, final false
inline void set_referenceResolution(::UnityEngine::Vector2  value) ;

/// @brief Method set_scaleFactor, addr 0xb8f4960, size 0x18, virtual false, abstract: false, final false
inline void set_scaleFactor(float_t  value) ;

/// @brief Method set_screenMatchMode, addr 0xb8f49f4, size 0x8, virtual false, abstract: false, final false
inline void set_screenMatchMode(::GlobalNamespace::CanvasScaler_ScreenMatchMode  value) ;

/// @brief Method set_uiScaleMode, addr 0xb8f4940, size 0x8, virtual false, abstract: false, final false
inline void set_uiScaleMode(::GlobalNamespace::CanvasScaler_ScaleMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasScaler(CanvasScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasScaler(CanvasScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26053};

/// @brief Field kLogBase offset 0xffffffff size 0x4
static constexpr float_t  kLogBase{static_cast<float_t>(2.0f)};

/// [Tooltip("Determines how UI elements in the Canvas are scaled.")]
/// [SerializeField]
/// @brief Field m_UiScaleMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CanvasScaler_ScaleMode  ___m_UiScaleMode;

/// [Tooltip("If a sprite has this \'Pixels Per Unit\' setting, then one pixel in the sprite will cover one unit in the UI.")]
/// [SerializeField]
/// @brief Field m_ReferencePixelsPerUnit, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_ReferencePixelsPerUnit;

/// [Tooltip("Scales all UI elements in the Canvas by this factor.")]
/// [SerializeField]
/// @brief Field m_ScaleFactor, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_ScaleFactor;

/// [Tooltip("The resolution the UI layout is designed for. If the screen resolution is larger, the UI will be scaled up, and if it\'s smaller, the UI will be scaled down. This is done in accordance with the Screen Match Mode.")]
/// [SerializeField]
/// @brief Field m_ReferenceResolution, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_ReferenceResolution;

/// [Tooltip("A mode used to scale the canvas area if the aspect ratio of the current resolution doesn\'t fit the reference resolution.")]
/// [SerializeField]
/// @brief Field m_ScreenMatchMode, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::CanvasScaler_ScreenMatchMode  ___m_ScreenMatchMode;

/// [Tooltip("Determines if the scaling is using the width or height as reference, or a mix in between.")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field m_MatchWidthOrHeight, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_MatchWidthOrHeight;

/// [Tooltip("The physical unit to specify positions and sizes in.")]
/// [SerializeField]
/// @brief Field m_PhysicalUnit, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::CanvasScaler_Unit  ___m_PhysicalUnit;

/// [Tooltip("The DPI to assume if the screen DPI is not known.")]
/// [SerializeField]
/// @brief Field m_FallbackScreenDPI, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_FallbackScreenDPI;

/// [Tooltip("The pixels per inch to use for sprites that have a \'Pixels Per Unit\' setting that matches the \'Reference Pixels Per Unit\' setting.")]
/// [SerializeField]
/// @brief Field m_DefaultSpriteDPI, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_DefaultSpriteDPI;

/// [Tooltip("The amount of pixels per unit to use for dynamically created bitmaps in the UI, such as Text.")]
/// [SerializeField]
/// @brief Field m_DynamicPixelsPerUnit, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_DynamicPixelsPerUnit;

/// @brief Field m_Canvas, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ___m_Canvas;

/// @brief Field m_PrevScaleFactor, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_PrevScaleFactor;

/// @brief Field m_PrevReferencePixelsPerUnit, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_PrevReferencePixelsPerUnit;

/// [SerializeField]
/// @brief Field m_PresetInfoIsWorld, offset: 0x60, size: 0x1, def value: None
 bool  ___m_PresetInfoIsWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_UiScaleMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ReferencePixelsPerUnit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ScaleFactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ReferenceResolution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ScreenMatchMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_MatchWidthOrHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PhysicalUnit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_FallbackScreenDPI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_DefaultSpriteDPI) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_DynamicPixelsPerUnit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_Canvas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PrevScaleFactor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PrevReferencePixelsPerUnit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PresetInfoIsWorld) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::CanvasScaler) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::UI
