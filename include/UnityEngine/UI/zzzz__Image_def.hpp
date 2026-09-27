#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Image_FillMethod_def.hpp"
#include "UnityEngine/UI/zzzz__Image_Type_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/zzzz__SecondarySpriteTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Image)
namespace GlobalNamespace {
struct Image_FillMethod;
}
namespace GlobalNamespace {
struct Image_Origin180;
}
namespace GlobalNamespace {
struct Image_Origin360;
}
namespace GlobalNamespace {
struct Image_Origin90;
}
namespace GlobalNamespace {
struct Image_OriginHorizontal;
}
namespace GlobalNamespace {
struct Image_OriginVertical;
}
namespace GlobalNamespace {
struct Image_Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::U2D {
class SpriteAtlas;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct SecondarySpriteTexture;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture;
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
namespace UnityEngine::UI {
class Image;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::Image*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Image*, "UnityEngine.UI", "Image");
// [RequireComponent(typeof(UnityEngine.CanvasRenderer))]
// [AddComponentMenu("UI/Image", 11)]
// Dependencies UnityEngine.SecondarySpriteTexture, UnityEngine.UI.Image::FillMethod, UnityEngine.UI.Image::Type, UnityEngine.UI.MaskableGraphic, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Image
class CORDL_TYPE Image : public ::UnityEngine::UI::MaskableGraphic {
public:
// Declarations
using FillMethod = ::GlobalNamespace::Image_FillMethod;

using Origin180 = ::GlobalNamespace::Image_Origin180;

using Origin360 = ::GlobalNamespace::Image_Origin360;

using Origin90 = ::GlobalNamespace::Image_Origin90;

using OriginHorizontal = ::GlobalNamespace::Image_OriginHorizontal;

using OriginVertical = ::GlobalNamespace::Image_OriginVertical;

using Type = ::GlobalNamespace::Image_Type;

 __declspec(property(get=get_activeSprite)) ::UnityW<::UnityEngine::Sprite>  activeSprite;

 __declspec(property(get=get_alphaHitTestMinimumThreshold, put=set_alphaHitTestMinimumThreshold)) float_t  alphaHitTestMinimumThreshold;

/// @brief [Obsolete("eventAlphaThreshold has been deprecated. Use eventMinimumAlphaThreshold instead (UnityUpgradable) -> alphaHitTestMinimumThreshold")]
 __declspec(property(get=get_eventAlphaThreshold, put=set_eventAlphaThreshold)) float_t  eventAlphaThreshold;

 __declspec(property(get=get_fillAmount, put=set_fillAmount)) float_t  fillAmount;

 __declspec(property(get=get_fillCenter, put=set_fillCenter)) bool  fillCenter;

 __declspec(property(get=get_fillClockwise, put=set_fillClockwise)) bool  fillClockwise;

 __declspec(property(get=get_fillMethod, put=set_fillMethod)) ::GlobalNamespace::Image_FillMethod  fillMethod;

 __declspec(property(get=get_fillOrigin, put=set_fillOrigin)) int32_t  fillOrigin;

 __declspec(property(get=get_flexibleHeight)) float_t  flexibleHeight;

 __declspec(property(get=get_flexibleWidth)) float_t  flexibleWidth;

 __declspec(property(get=get_hasBorder)) bool  hasBorder;

 __declspec(property(get=get_layoutPriority)) int32_t  layoutPriority;

/// @brief Field m_AlphaHitTestMinimumThreshold, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AlphaHitTestMinimumThreshold, put=__cordl_internal_set_m_AlphaHitTestMinimumThreshold)) float_t  m_AlphaHitTestMinimumThreshold;

/// @brief Field m_CachedReferencePixelsPerUnit, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedReferencePixelsPerUnit, put=__cordl_internal_set_m_CachedReferencePixelsPerUnit)) float_t  m_CachedReferencePixelsPerUnit;

/// @brief Field m_FillAmount, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FillAmount, put=__cordl_internal_set_m_FillAmount)) float_t  m_FillAmount;

/// @brief Field m_FillCenter, offset 0xed, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FillCenter, put=__cordl_internal_set_m_FillCenter)) bool  m_FillCenter;

/// @brief Field m_FillClockwise, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FillClockwise, put=__cordl_internal_set_m_FillClockwise)) bool  m_FillClockwise;

/// @brief Field m_FillMethod, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FillMethod, put=__cordl_internal_set_m_FillMethod)) ::GlobalNamespace::Image_FillMethod  m_FillMethod;

/// @brief Field m_FillOrigin, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FillOrigin, put=__cordl_internal_set_m_FillOrigin)) int32_t  m_FillOrigin;

/// @brief Field m_OverrideSprite, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverrideSprite, put=__cordl_internal_set_m_OverrideSprite)) ::UnityW<::UnityEngine::Sprite>  m_OverrideSprite;

/// @brief Field m_PixelsPerUnitMultiplier, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PixelsPerUnitMultiplier, put=__cordl_internal_set_m_PixelsPerUnitMultiplier)) float_t  m_PixelsPerUnitMultiplier;

/// @brief Field m_PreserveAspect, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreserveAspect, put=__cordl_internal_set_m_PreserveAspect)) bool  m_PreserveAspect;

/// @brief Field m_SecondaryTextures, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecondaryTextures, put=__cordl_internal_set_m_SecondaryTextures)) ::ArrayW<::UnityEngine::SecondarySpriteTexture>  m_SecondaryTextures;

/// @brief Field m_Sprite, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Sprite, put=__cordl_internal_set_m_Sprite)) ::UnityW<::UnityEngine::Sprite>  m_Sprite;

/// @brief Field m_Tracked, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Tracked, put=__cordl_internal_set_m_Tracked)) bool  m_Tracked;

/// @brief Field m_TrackedTexturelessImages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_TrackedTexturelessImages, put=setStaticF_m_TrackedTexturelessImages)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  m_TrackedTexturelessImages;

/// @brief Field m_Type, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::GlobalNamespace::Image_Type  m_Type;

/// @brief Field m_UseSpriteMesh, offset 0x105, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseSpriteMesh, put=__cordl_internal_set_m_UseSpriteMesh)) bool  m_UseSpriteMesh;

 __declspec(property(get=get_mainTexture)) ::UnityW<::UnityEngine::Texture>  mainTexture;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(get=get_minHeight)) float_t  minHeight;

 __declspec(property(get=get_minWidth)) float_t  minWidth;

 __declspec(property(get=get_multipliedPixelsPerUnit)) float_t  multipliedPixelsPerUnit;

 __declspec(property(get=get_overrideSprite, put=set_overrideSprite)) ::UnityW<::UnityEngine::Sprite>  overrideSprite;

 __declspec(property(get=get_pixelsPerUnit)) float_t  pixelsPerUnit;

 __declspec(property(get=get_pixelsPerUnitMultiplier, put=set_pixelsPerUnitMultiplier)) float_t  pixelsPerUnitMultiplier;

 __declspec(property(get=get_preferredHeight)) float_t  preferredHeight;

 __declspec(property(get=get_preferredWidth)) float_t  preferredWidth;

 __declspec(property(get=get_preserveAspect, put=set_preserveAspect)) bool  preserveAspect;

/// @brief Field s_ETC1DefaultUI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ETC1DefaultUI, put=setStaticF_s_ETC1DefaultUI)) ::UnityW<::UnityEngine::Material>  s_ETC1DefaultUI;

/// @brief Field s_Initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_Initialized, put=setStaticF_s_Initialized)) bool  s_Initialized;

/// @brief Field s_TempNewSecondaryTextures, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TempNewSecondaryTextures, put=setStaticF_s_TempNewSecondaryTextures)) ::ArrayW<::UnityEngine::SecondarySpriteTexture>  s_TempNewSecondaryTextures;

/// @brief Field s_UVScratch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UVScratch, put=setStaticF_s_UVScratch)) ::ArrayW<::UnityEngine::Vector2>  s_UVScratch;

/// @brief Field s_Uv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Uv, put=setStaticF_s_Uv)) ::ArrayW<::UnityEngine::Vector3>  s_Uv;

/// @brief Field s_VertScratch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_VertScratch, put=setStaticF_s_VertScratch)) ::ArrayW<::UnityEngine::Vector2>  s_VertScratch;

/// @brief Field s_Xy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Xy, put=setStaticF_s_Xy)) ::ArrayW<::UnityEngine::Vector3>  s_Xy;

 __declspec(property(get=get_secondaryTextures)) ::ArrayW<::UnityEngine::SecondarySpriteTexture>  secondaryTextures;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityW<::UnityEngine::Sprite>  sprite;

 __declspec(property(get=get_type, put=set_type)) ::GlobalNamespace::Image_Type  type;

 __declspec(property(get=get_useSpriteMesh, put=set_useSpriteMesh)) bool  useSpriteMesh;

/// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
constexpr operator  ::UnityEngine::ICanvasRaycastFilter*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr operator  ::UnityEngine::UI::ILayoutElement*() noexcept;

/// @brief Method AddQuad, addr 0xb71209c, size 0x14c, virtual false, abstract: false, final false
static inline void AddQuad(::UnityEngine::UI::VertexHelper*  vertexHelper, ::UnityEngine::Vector2  posMin, ::UnityEngine::Vector2  posMax, ::UnityEngine::Color32  color, ::UnityEngine::Vector2  uvMin, ::UnityEngine::Vector2  uvMax) ;

/// @brief Method AddQuad, addr 0xb7121e8, size 0xdc, virtual false, abstract: false, final false
static inline void AddQuad(::UnityEngine::UI::VertexHelper*  vertexHelper, ::ArrayW<::UnityEngine::Vector3>  quadPositions, ::UnityEngine::Color32  color, ::ArrayW<::UnityEngine::Vector3>  quadUVs) ;

/// @brief Method CalculateLayoutInputHorizontal, addr 0xb7127e4, size 0x4, virtual true, abstract: false, final false
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0xb7127e8, size 0x4, virtual true, abstract: false, final false
inline void CalculateLayoutInputVertical() ;

/// @brief Method CheckSecondaryTexturesChanged, addr 0xb70de90, size 0x8c, virtual false, abstract: false, final false
inline bool CheckSecondaryTexturesChanged(::UnityEngine::Sprite*  sprite) ;

/// @brief Method CheckSecondaryTexturesChanged, addr 0xb71186c, size 0x1c8, virtual false, abstract: false, final false
inline bool CheckSecondaryTexturesChanged(::UnityEngine::Sprite*  sprite, ::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>  newSecondaryTextures) ;

/// @brief Method ClearArray, addr 0xb7117cc, size 0xa0, virtual false, abstract: false, final false
static inline void ClearArray(::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>  array) ;

/// @brief Method DisableSpriteOptimizations, addr 0xb70e098, size 0x8, virtual false, abstract: false, final false
inline void DisableSpriteOptimizations() ;

/// @brief Method GenerateFilledSprite, addr 0xb710c6c, size 0x8e8, virtual false, abstract: false, final false
inline void GenerateFilledSprite(::UnityEngine::UI::VertexHelper*  toFill, bool  preserveAspect) ;

/// @brief Method GenerateSimpleSprite, addr 0xb70f3d0, size 0x2ac, virtual false, abstract: false, final false
inline void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper*  vh, bool  lPreserveAspect) ;

/// @brief Method GenerateSlicedSprite, addr 0xb70f964, size 0x5b4, virtual false, abstract: false, final false
inline void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper*  toFill) ;

/// @brief Method GenerateSprite, addr 0xb70f67c, size 0x2e8, virtual false, abstract: false, final false
inline void GenerateSprite(::UnityEngine::UI::VertexHelper*  vh, bool  lPreserveAspect) ;

/// @brief Method GenerateTiledSprite, addr 0xb70ff18, size 0xd54, virtual false, abstract: false, final false
inline void GenerateTiledSprite(::UnityEngine::UI::VertexHelper*  toFill) ;

/// @brief Method GetAdjustedBorders, addr 0xb711f18, size 0x184, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4  border, ::UnityEngine::Rect  adjustedRect) ;

/// @brief Method GetDrawingDimensions, addr 0xb70ed90, size 0x3b8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetDrawingDimensions(bool  shouldPreserveAspect) ;

/// @brief Method IsRaycastLocationValid, addr 0xb7129a4, size 0x3e0, virtual true, abstract: false, final false
inline bool IsRaycastLocationValid(::UnityEngine::Vector2  screenPoint, ::UnityEngine::Camera*  eventCamera) ;

/// @brief Method MapCoordinate, addr 0xb712d84, size 0x290, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 MapCoordinate(::UnityEngine::Vector2  local, ::UnityEngine::Rect  rect) ;

static inline ::UnityEngine::UI::Image* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb70eca0, size 0x54, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb70ec9c, size 0x4, virtual true, abstract: false, final false
inline void OnBeforeSerialize() ;

/// @brief Method OnCanvasHierarchyChanged, addr 0xb711e10, size 0x108, virtual true, abstract: false, final false
inline void OnCanvasHierarchyChanged() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0xb7131b4, size 0x38, virtual true, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0xb7116d0, size 0x74, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb7116b4, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPopulateMesh, addr 0xb70f288, size 0x148, virtual true, abstract: false, final false
inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper*  toFill) ;

/// @brief Method PreserveSpriteAspectRatio, addr 0xb70ecf4, size 0x9c, virtual false, abstract: false, final false
inline void PreserveSpriteAspectRatio(::by_ref<::UnityEngine::Rect>  rect, ::UnityEngine::Vector2  spriteSize) ;

/// @brief Method RadialCut, addr 0xb7122c4, size 0x130, virtual false, abstract: false, final false
static inline bool RadialCut(::ArrayW<::UnityEngine::Vector3>  xy, ::ArrayW<::UnityEngine::Vector3>  uv, float_t  fill, bool  invert, int32_t  corner) ;

/// @brief Method RadialCut, addr 0xb7123f4, size 0x3f0, virtual false, abstract: false, final false
static inline void RadialCut(::ArrayW<::UnityEngine::Vector3>  xy, float_t  cos, float_t  sin, bool  invert, int32_t  corner) ;

/// @brief Method RebuildImage, addr 0xb713014, size 0x1a0, virtual false, abstract: false, final false
static inline void RebuildImage(::UnityEngine::U2D::SpriteAtlas*  spriteAtlas) ;

/// @brief Method SetNativeSize, addr 0xb70f148, size 0x140, virtual true, abstract: false, final false
inline void SetNativeSize() ;

/// @brief Method SetSecondaryTextures, addr 0xb711ae8, size 0x220, virtual false, abstract: false, final false
inline void SetSecondaryTextures(::UnityEngine::CanvasRenderer*  renderer) ;

/// @brief Method TrackImage, addr 0xb711554, size 0x160, virtual false, abstract: false, final false
static inline void TrackImage(::UnityEngine::UI::Image*  g) ;

/// @brief Method TrackSprite, addr 0xb70dfac, size 0xec, virtual false, abstract: false, final false
inline void TrackSprite() ;

/// @brief Method UnTrackImage, addr 0xb711744, size 0x80, virtual false, abstract: false, final false
static inline void UnTrackImage(::UnityEngine::UI::Image*  g) ;

/// @brief Method UpdateMaterial, addr 0xb711d08, size 0x108, virtual true, abstract: false, final false
inline void UpdateMaterial() ;

/// [CompilerGenerated]
/// @brief Method <CheckSecondaryTexturesChanged>g__Compare|93_0, addr 0xb711a34, size 0xb4, virtual false, abstract: false, final false
static inline bool _CheckSecondaryTexturesChanged_g__Compare_93_0(::ArrayW<::UnityEngine::SecondarySpriteTexture>  array1, ::ArrayW<::UnityEngine::SecondarySpriteTexture>  array2) ;

constexpr float_t const& __cordl_internal_get_m_AlphaHitTestMinimumThreshold() const;

constexpr float_t& __cordl_internal_get_m_AlphaHitTestMinimumThreshold() ;

constexpr float_t const& __cordl_internal_get_m_CachedReferencePixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_CachedReferencePixelsPerUnit() ;

constexpr float_t const& __cordl_internal_get_m_FillAmount() const;

constexpr float_t& __cordl_internal_get_m_FillAmount() ;

constexpr bool const& __cordl_internal_get_m_FillCenter() const;

constexpr bool& __cordl_internal_get_m_FillCenter() ;

constexpr bool const& __cordl_internal_get_m_FillClockwise() const;

constexpr bool& __cordl_internal_get_m_FillClockwise() ;

constexpr ::GlobalNamespace::Image_FillMethod const& __cordl_internal_get_m_FillMethod() const;

constexpr ::GlobalNamespace::Image_FillMethod& __cordl_internal_get_m_FillMethod() ;

constexpr int32_t const& __cordl_internal_get_m_FillOrigin() const;

constexpr int32_t& __cordl_internal_get_m_FillOrigin() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_OverrideSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_OverrideSprite() ;

constexpr float_t const& __cordl_internal_get_m_PixelsPerUnitMultiplier() const;

constexpr float_t& __cordl_internal_get_m_PixelsPerUnitMultiplier() ;

constexpr bool const& __cordl_internal_get_m_PreserveAspect() const;

constexpr bool& __cordl_internal_get_m_PreserveAspect() ;

constexpr ::ArrayW<::UnityEngine::SecondarySpriteTexture> const& __cordl_internal_get_m_SecondaryTextures() const;

constexpr ::ArrayW<::UnityEngine::SecondarySpriteTexture>& __cordl_internal_get_m_SecondaryTextures() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Sprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Sprite() ;

constexpr bool const& __cordl_internal_get_m_Tracked() const;

constexpr bool& __cordl_internal_get_m_Tracked() ;

constexpr ::GlobalNamespace::Image_Type const& __cordl_internal_get_m_Type() const;

constexpr ::GlobalNamespace::Image_Type& __cordl_internal_get_m_Type() ;

constexpr bool const& __cordl_internal_get_m_UseSpriteMesh() const;

constexpr bool& __cordl_internal_get_m_UseSpriteMesh() ;

constexpr void __cordl_internal_set_m_AlphaHitTestMinimumThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_CachedReferencePixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_FillAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_FillCenter(bool  value) ;

constexpr void __cordl_internal_set_m_FillClockwise(bool  value) ;

constexpr void __cordl_internal_set_m_FillMethod(::GlobalNamespace::Image_FillMethod  value) ;

constexpr void __cordl_internal_set_m_FillOrigin(int32_t  value) ;

constexpr void __cordl_internal_set_m_OverrideSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_m_PixelsPerUnitMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_PreserveAspect(bool  value) ;

constexpr void __cordl_internal_set_m_SecondaryTextures(::ArrayW<::UnityEngine::SecondarySpriteTexture>  value) ;

constexpr void __cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_m_Tracked(bool  value) ;

constexpr void __cordl_internal_set_m_Type(::GlobalNamespace::Image_Type  value) ;

constexpr void __cordl_internal_set_m_UseSpriteMesh(bool  value) ;

/// @brief Method .ctor, addr 0xb70e6d4, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method <set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0, addr 0xb70df1c, size 0x90, virtual false, abstract: false, final false
inline void _set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0() ;

/// [CompilerGenerated]
/// @brief Method <set_sprite>g__SpriteSupportsAlphaHitTest|11_1, addr 0xb713390, size 0x12c, virtual false, abstract: false, final false
inline bool _set_sprite_g__SpriteSupportsAlphaHitTest_11_1() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* getStaticF_m_TrackedTexturelessImages() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_ETC1DefaultUI() ;

static inline bool getStaticF_s_Initialized() ;

static inline ::ArrayW<::UnityEngine::SecondarySpriteTexture> getStaticF_s_TempNewSecondaryTextures() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_s_UVScratch() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_s_Uv() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_s_VertScratch() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_s_Xy() ;

/// @brief Method get_activeSprite, addr 0xb70e0a4, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_activeSprite() ;

/// @brief Method get_alphaHitTestMinimumThreshold, addr 0xb70e644, size 0x8, virtual false, abstract: false, final false
inline float_t get_alphaHitTestMinimumThreshold() ;

/// @brief Method get_defaultETC1GraphicMaterial, addr 0xb70e714, size 0xec, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_defaultETC1GraphicMaterial() ;

/// @brief Method get_eventAlphaThreshold, addr 0xb70e4e8, size 0x10, virtual false, abstract: false, final false
inline float_t get_eventAlphaThreshold() ;

/// @brief Method get_fillAmount, addr 0xb70e33c, size 0x8, virtual false, abstract: false, final false
inline float_t get_fillAmount() ;

/// @brief Method get_fillCenter, addr 0xb70e234, size 0x8, virtual false, abstract: false, final false
inline bool get_fillCenter() ;

/// @brief Method get_fillClockwise, addr 0xb70e3d8, size 0x8, virtual false, abstract: false, final false
inline bool get_fillClockwise() ;

/// @brief Method get_fillMethod, addr 0xb70e2bc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Image_FillMethod get_fillMethod() ;

/// @brief Method get_fillOrigin, addr 0xb70e460, size 0x8, virtual false, abstract: false, final false
inline int32_t get_fillOrigin() ;

/// @brief Method get_flexibleHeight, addr 0xb712994, size 0x8, virtual true, abstract: false, final false
inline float_t get_flexibleHeight() ;

/// @brief Method get_flexibleWidth, addr 0xb7128bc, size 0x8, virtual true, abstract: false, final false
inline float_t get_flexibleWidth() ;

/// @brief Method get_hasBorder, addr 0xb70e978, size 0xb8, virtual false, abstract: false, final false
inline bool get_hasBorder() ;

/// @brief Method get_layoutPriority, addr 0xb71299c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_layoutPriority() ;

/// @brief Method get_mainTexture, addr 0xb70e800, size 0x178, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_mainTexture() ;

/// @brief Method get_material, addr 0xb70eb6c, size 0x12c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_minHeight, addr 0xb7128c4, size 0x8, virtual true, abstract: false, final false
inline float_t get_minHeight() ;

/// @brief Method get_minWidth, addr 0xb7127ec, size 0x8, virtual true, abstract: false, final false
inline float_t get_minWidth() ;

/// @brief Method get_multipliedPixelsPerUnit, addr 0xb70eb50, size 0x1c, virtual false, abstract: false, final false
inline float_t get_multipliedPixelsPerUnit() ;

/// @brief Method get_overrideSprite, addr 0xb70e0a0, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_overrideSprite() ;

/// @brief Method get_pixelsPerUnit, addr 0xb70ea5c, size 0xf4, virtual false, abstract: false, final false
inline float_t get_pixelsPerUnit() ;

/// @brief Method get_pixelsPerUnitMultiplier, addr 0xb70ea30, size 0x8, virtual false, abstract: false, final false
inline float_t get_pixelsPerUnitMultiplier() ;

/// @brief Method get_preferredHeight, addr 0xb7128cc, size 0xc8, virtual true, abstract: false, final false
inline float_t get_preferredHeight() ;

/// @brief Method get_preferredWidth, addr 0xb7127f4, size 0xc8, virtual true, abstract: false, final false
inline float_t get_preferredWidth() ;

/// @brief Method get_preserveAspect, addr 0xb70e1ac, size 0x8, virtual false, abstract: false, final false
inline bool get_preserveAspect() ;

/// @brief Method get_secondaryTextures, addr 0xb7117c4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::SecondarySpriteTexture> get_secondaryTextures() ;

/// @brief Method get_sprite, addr 0xb70de88, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_sprite() ;

/// @brief Method get_type, addr 0xb70e1a4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Image_Type get_type() ;

/// @brief Method get_useSpriteMesh, addr 0xb70e64c, size 0x8, virtual false, abstract: false, final false
inline bool get_useSpriteMesh() ;

/// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

static inline void setStaticF_m_TrackedTexturelessImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value) ;

static inline void setStaticF_s_ETC1DefaultUI(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_Initialized(bool  value) ;

static inline void setStaticF_s_TempNewSecondaryTextures(::ArrayW<::UnityEngine::SecondarySpriteTexture>  value) ;

static inline void setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_alphaHitTestMinimumThreshold, addr 0xb70e504, size 0x140, virtual false, abstract: false, final false
inline void set_alphaHitTestMinimumThreshold(float_t  value) ;

/// @brief Method set_eventAlphaThreshold, addr 0xb70e4f8, size 0xc, virtual false, abstract: false, final false
inline void set_eventAlphaThreshold(float_t  value) ;

/// @brief Method set_fillAmount, addr 0xb70e344, size 0x94, virtual false, abstract: false, final false
inline void set_fillAmount(float_t  value) ;

/// @brief Method set_fillCenter, addr 0xb70e23c, size 0x80, virtual false, abstract: false, final false
inline void set_fillCenter(bool  value) ;

/// @brief Method set_fillClockwise, addr 0xb70e3e0, size 0x80, virtual false, abstract: false, final false
inline void set_fillClockwise(bool  value) ;

/// @brief Method set_fillMethod, addr 0xb70e2c4, size 0x78, virtual false, abstract: false, final false
inline void set_fillMethod(::GlobalNamespace::Image_FillMethod  value) ;

/// @brief Method set_fillOrigin, addr 0xb70e468, size 0x80, virtual false, abstract: false, final false
inline void set_fillOrigin(int32_t  value) ;

/// @brief Method set_material, addr 0xb70ec98, size 0x4, virtual true, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_overrideSprite, addr 0xb70e11c, size 0x88, virtual false, abstract: false, final false
inline void set_overrideSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method set_pixelsPerUnitMultiplier, addr 0xb70ea38, size 0x24, virtual false, abstract: false, final false
inline void set_pixelsPerUnitMultiplier(float_t  value) ;

/// @brief Method set_preserveAspect, addr 0xb70e1b4, size 0x80, virtual false, abstract: false, final false
inline void set_preserveAspect(bool  value) ;

/// @brief Method set_sprite, addr 0xb700f54, size 0x310, virtual false, abstract: false, final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method set_type, addr 0xb701264, size 0x80, virtual false, abstract: false, final false
inline void set_type(::GlobalNamespace::Image_Type  value) ;

/// @brief Method set_useSpriteMesh, addr 0xb70e654, size 0x80, virtual false, abstract: false, final false
inline void set_useSpriteMesh(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Image() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Image(Image && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Image(Image const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26033};

/// [FormerlySerializedAs("m_Frame")]
/// [SerializeField]
/// @brief Field m_Sprite, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___m_Sprite;

/// @brief Field m_OverrideSprite, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___m_OverrideSprite;

/// [SerializeField]
/// @brief Field m_Type, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::Image_Type  ___m_Type;

/// [SerializeField]
/// @brief Field m_PreserveAspect, offset: 0xec, size: 0x1, def value: None
 bool  ___m_PreserveAspect;

/// [SerializeField]
/// @brief Field m_FillCenter, offset: 0xed, size: 0x1, def value: None
 bool  ___m_FillCenter;

/// [SerializeField]
/// @brief Field m_FillMethod, offset: 0xf0, size: 0x4, def value: None
 ::GlobalNamespace::Image_FillMethod  ___m_FillMethod;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field m_FillAmount, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_FillAmount;

/// [SerializeField]
/// @brief Field m_FillClockwise, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_FillClockwise;

/// [SerializeField]
/// @brief Field m_FillOrigin, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___m_FillOrigin;

/// @brief Field m_AlphaHitTestMinimumThreshold, offset: 0x100, size: 0x4, def value: None
 float_t  ___m_AlphaHitTestMinimumThreshold;

/// @brief Field m_Tracked, offset: 0x104, size: 0x1, def value: None
 bool  ___m_Tracked;

/// [SerializeField]
/// @brief Field m_UseSpriteMesh, offset: 0x105, size: 0x1, def value: None
 bool  ___m_UseSpriteMesh;

/// [SerializeField]
/// @brief Field m_PixelsPerUnitMultiplier, offset: 0x108, size: 0x4, def value: None
 float_t  ___m_PixelsPerUnitMultiplier;

/// @brief Field m_CachedReferencePixelsPerUnit, offset: 0x10c, size: 0x4, def value: None
 float_t  ___m_CachedReferencePixelsPerUnit;

/// @brief Field m_SecondaryTextures, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::SecondarySpriteTexture>  ___m_SecondaryTextures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image, ___m_Sprite) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_OverrideSprite) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Type) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_PreserveAspect) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillCenter) == 0xed, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillMethod) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillAmount) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillClockwise) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillOrigin) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_AlphaHitTestMinimumThreshold) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Tracked) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_UseSpriteMesh) == 0x105, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_PixelsPerUnitMultiplier) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_CachedReferencePixelsPerUnit) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_SecondaryTextures) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::Image) == 0x118, "Size mismatch!");

} // namespace end def UnityEngine::UI
