#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ResolvedStyleAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResolvedStyleAccess)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct EditorTextRenderingMode;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
class IResolvedStyle;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct SliceType;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGeneratorType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ResolvedStyleAccess;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccess*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccess*, "UnityEngine.UIElements", "ResolvedStyleAccess");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccess
class CORDL_TYPE ResolvedStyleAccess : public ::System::Object {
public:
// Declarations
/// @brief Field <ve>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ve_k__BackingField, put=__cordl_internal_set__ve_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _ve_k__BackingField;

 __declspec(property(get=get_alignContent)) ::UnityEngine::UIElements::Align  alignContent;

 __declspec(property(get=get_alignItems)) ::UnityEngine::UIElements::Align  alignItems;

 __declspec(property(get=get_alignSelf)) ::UnityEngine::UIElements::Align  alignSelf;

 __declspec(property(get=get_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(get=get_backgroundImage)) ::UnityEngine::UIElements::Background  backgroundImage;

 __declspec(property(get=get_backgroundPositionX)) ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX;

 __declspec(property(get=get_backgroundPositionY)) ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY;

 __declspec(property(get=get_backgroundRepeat)) ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat;

 __declspec(property(get=get_backgroundSize)) ::UnityEngine::UIElements::BackgroundSize  backgroundSize;

 __declspec(property(get=get_borderBottomColor)) ::UnityEngine::Color  borderBottomColor;

 __declspec(property(get=get_borderBottomLeftRadius)) float_t  borderBottomLeftRadius;

 __declspec(property(get=get_borderBottomRightRadius)) float_t  borderBottomRightRadius;

 __declspec(property(get=get_borderBottomWidth)) float_t  borderBottomWidth;

 __declspec(property(get=get_borderLeftColor)) ::UnityEngine::Color  borderLeftColor;

 __declspec(property(get=get_borderLeftWidth)) float_t  borderLeftWidth;

 __declspec(property(get=get_borderRightColor)) ::UnityEngine::Color  borderRightColor;

 __declspec(property(get=get_borderRightWidth)) float_t  borderRightWidth;

 __declspec(property(get=get_borderTopColor)) ::UnityEngine::Color  borderTopColor;

 __declspec(property(get=get_borderTopLeftRadius)) float_t  borderTopLeftRadius;

 __declspec(property(get=get_borderTopRightRadius)) float_t  borderTopRightRadius;

 __declspec(property(get=get_borderTopWidth)) float_t  borderTopWidth;

 __declspec(property(get=get_bottom)) float_t  bottom;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_display)) ::UnityEngine::UIElements::DisplayStyle  display;

 __declspec(property(get=get_flexBasis)) ::UnityEngine::UIElements::StyleFloat  flexBasis;

 __declspec(property(get=get_flexDirection)) ::UnityEngine::UIElements::FlexDirection  flexDirection;

 __declspec(property(get=get_flexGrow)) float_t  flexGrow;

 __declspec(property(get=get_flexShrink)) float_t  flexShrink;

 __declspec(property(get=get_flexWrap)) ::UnityEngine::UIElements::Wrap  flexWrap;

 __declspec(property(get=get_fontSize)) float_t  fontSize;

 __declspec(property(get=get_height)) float_t  height;

 __declspec(property(get=get_justifyContent)) ::UnityEngine::UIElements::Justify  justifyContent;

 __declspec(property(get=get_left)) float_t  left;

 __declspec(property(get=get_letterSpacing)) float_t  letterSpacing;

 __declspec(property(get=get_marginBottom)) float_t  marginBottom;

 __declspec(property(get=get_marginLeft)) float_t  marginLeft;

 __declspec(property(get=get_marginRight)) float_t  marginRight;

 __declspec(property(get=get_marginTop)) float_t  marginTop;

 __declspec(property(get=get_maxHeight)) ::UnityEngine::UIElements::StyleFloat  maxHeight;

 __declspec(property(get=get_maxWidth)) ::UnityEngine::UIElements::StyleFloat  maxWidth;

 __declspec(property(get=get_minHeight)) ::UnityEngine::UIElements::StyleFloat  minHeight;

 __declspec(property(get=get_minWidth)) ::UnityEngine::UIElements::StyleFloat  minWidth;

 __declspec(property(get=get_opacity)) float_t  opacity;

 __declspec(property(get=get_paddingBottom)) float_t  paddingBottom;

 __declspec(property(get=get_paddingLeft)) float_t  paddingLeft;

 __declspec(property(get=get_paddingRight)) float_t  paddingRight;

 __declspec(property(get=get_paddingTop)) float_t  paddingTop;

 __declspec(property(get=get_position)) ::UnityEngine::UIElements::Position  position;

 __declspec(property(get=get_right)) float_t  right;

 __declspec(property(get=get_rotate)) ::UnityEngine::UIElements::Rotate  rotate;

 __declspec(property(get=get_scale)) ::UnityEngine::UIElements::Scale  scale;

 __declspec(property(get=get_textOverflow)) ::UnityEngine::UIElements::TextOverflow  textOverflow;

 __declspec(property(get=get_top)) float_t  top;

 __declspec(property(get=get_transformOrigin)) ::UnityEngine::Vector3  transformOrigin;

 __declspec(property(get=get_transitionDelay)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>*  transitionDelay;

 __declspec(property(get=get_transitionDuration)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>*  transitionDuration;

 __declspec(property(get=get_transitionProperty)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*  transitionProperty;

 __declspec(property(get=get_transitionTimingFunction)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>*  transitionTimingFunction;

 __declspec(property(get=get_translate)) ::UnityEngine::Vector3  translate;

 __declspec(property(get=get_unityBackgroundImageTintColor)) ::UnityEngine::Color  unityBackgroundImageTintColor;

 __declspec(property(get=get_unityEditorTextRenderingMode)) ::UnityEngine::UIElements::EditorTextRenderingMode  unityEditorTextRenderingMode;

 __declspec(property(get=get_unityFont)) ::UnityW<::UnityEngine::Font>  unityFont;

 __declspec(property(get=get_unityFontDefinition)) ::UnityEngine::UIElements::FontDefinition  unityFontDefinition;

 __declspec(property(get=get_unityFontStyleAndWeight)) ::UnityEngine::FontStyle  unityFontStyleAndWeight;

 __declspec(property(get=get_unityParagraphSpacing)) float_t  unityParagraphSpacing;

 __declspec(property(get=get_unitySliceBottom)) int32_t  unitySliceBottom;

 __declspec(property(get=get_unitySliceLeft)) int32_t  unitySliceLeft;

 __declspec(property(get=get_unitySliceRight)) int32_t  unitySliceRight;

 __declspec(property(get=get_unitySliceScale)) float_t  unitySliceScale;

 __declspec(property(get=get_unitySliceTop)) int32_t  unitySliceTop;

 __declspec(property(get=get_unitySliceType)) ::UnityEngine::UIElements::SliceType  unitySliceType;

 __declspec(property(get=get_unityTextAlign)) ::UnityEngine::TextAnchor  unityTextAlign;

 __declspec(property(get=get_unityTextGenerator)) ::UnityEngine::TextGeneratorType  unityTextGenerator;

 __declspec(property(get=get_unityTextOutlineColor)) ::UnityEngine::Color  unityTextOutlineColor;

 __declspec(property(get=get_unityTextOutlineWidth)) float_t  unityTextOutlineWidth;

 __declspec(property(get=get_unityTextOverflowPosition)) ::UnityEngine::UIElements::TextOverflowPosition  unityTextOverflowPosition;

 __declspec(property(get=get_ve)) ::UnityEngine::UIElements::VisualElement*  ve;

 __declspec(property(get=get_visibility)) ::UnityEngine::UIElements::Visibility  visibility;

 __declspec(property(get=get_whiteSpace)) ::UnityEngine::UIElements::WhiteSpace  whiteSpace;

 __declspec(property(get=get_width)) float_t  width;

 __declspec(property(get=get_wordSpacing)) float_t  wordSpacing;

/// @brief Convert operator to "::UnityEngine::UIElements::IResolvedStyle"
constexpr operator  ::UnityEngine::UIElements::IResolvedStyle*() noexcept;

static inline ::UnityEngine::UIElements::ResolvedStyleAccess* New_ctor(::UnityEngine::UIElements::VisualElement*  ve) ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__ve_k__BackingField() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__ve_k__BackingField() ;

constexpr void __cordl_internal_set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method .ctor, addr 0xb75fc68, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method get_alignContent, addr 0xb75eb4c, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Align get_alignContent() ;

/// @brief Method get_alignItems, addr 0xb75eb70, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Align get_alignItems() ;

/// @brief Method get_alignSelf, addr 0xb75eb8c, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Align get_alignSelf() ;

/// @brief Method get_backgroundColor, addr 0xb75eba8, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundImage, addr 0xb75ebc4, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Background get_backgroundImage() ;

/// @brief Method get_backgroundPositionX, addr 0xb75ec00, size 0x28, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::BackgroundPosition get_backgroundPositionX() ;

/// @brief Method get_backgroundPositionY, addr 0xb75ec28, size 0x28, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::BackgroundPosition get_backgroundPositionY() ;

/// @brief Method get_backgroundRepeat, addr 0xb75ec50, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::BackgroundRepeat get_backgroundRepeat() ;

/// @brief Method get_backgroundSize, addr 0xb75ec6c, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::BackgroundSize get_backgroundSize() ;

/// @brief Method get_borderBottomColor, addr 0xb75ecb0, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_borderBottomColor() ;

/// @brief Method get_borderBottomLeftRadius, addr 0xb75eccc, size 0x28, virtual true, abstract: false, final true
inline float_t get_borderBottomLeftRadius() ;

/// @brief Method get_borderBottomRightRadius, addr 0xb75ecf4, size 0x28, virtual true, abstract: false, final true
inline float_t get_borderBottomRightRadius() ;

/// @brief Method get_borderBottomWidth, addr 0xb75ed1c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_borderBottomWidth() ;

/// @brief Method get_borderLeftColor, addr 0xb75ed40, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_borderLeftColor() ;

/// @brief Method get_borderLeftWidth, addr 0xb75ed5c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_borderLeftWidth() ;

/// @brief Method get_borderRightColor, addr 0xb75ed78, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_borderRightColor() ;

/// @brief Method get_borderRightWidth, addr 0xb75ed94, size 0x1c, virtual true, abstract: false, final true
inline float_t get_borderRightWidth() ;

/// @brief Method get_borderTopColor, addr 0xb75edb0, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_borderTopColor() ;

/// @brief Method get_borderTopLeftRadius, addr 0xb75edcc, size 0x28, virtual true, abstract: false, final true
inline float_t get_borderTopLeftRadius() ;

/// @brief Method get_borderTopRightRadius, addr 0xb75edf4, size 0x28, virtual true, abstract: false, final true
inline float_t get_borderTopRightRadius() ;

/// @brief Method get_borderTopWidth, addr 0xb75ee1c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_borderTopWidth() ;

/// @brief Method get_bottom, addr 0xb75ee38, size 0x1c, virtual true, abstract: false, final true
inline float_t get_bottom() ;

/// @brief Method get_color, addr 0xb75ee54, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_display, addr 0xb75ee70, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::DisplayStyle get_display() ;

/// @brief Method get_flexBasis, addr 0xb75ee8c, size 0x38, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat get_flexBasis() ;

/// @brief Method get_flexDirection, addr 0xb75eec4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::FlexDirection get_flexDirection() ;

/// @brief Method get_flexGrow, addr 0xb75eee0, size 0x1c, virtual true, abstract: false, final true
inline float_t get_flexGrow() ;

/// @brief Method get_flexShrink, addr 0xb75eefc, size 0x1c, virtual true, abstract: false, final true
inline float_t get_flexShrink() ;

/// @brief Method get_flexWrap, addr 0xb75ef18, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Wrap get_flexWrap() ;

/// @brief Method get_fontSize, addr 0xb75ef34, size 0x28, virtual true, abstract: false, final true
inline float_t get_fontSize() ;

/// @brief Method get_height, addr 0xb75ef5c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_height() ;

/// @brief Method get_justifyContent, addr 0xb75ef78, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Justify get_justifyContent() ;

/// @brief Method get_left, addr 0xb75ef94, size 0x1c, virtual true, abstract: false, final true
inline float_t get_left() ;

/// @brief Method get_letterSpacing, addr 0xb75efb0, size 0x28, virtual true, abstract: false, final true
inline float_t get_letterSpacing() ;

/// @brief Method get_marginBottom, addr 0xb75efd8, size 0x1c, virtual true, abstract: false, final true
inline float_t get_marginBottom() ;

/// @brief Method get_marginLeft, addr 0xb75eff4, size 0x1c, virtual true, abstract: false, final true
inline float_t get_marginLeft() ;

/// @brief Method get_marginRight, addr 0xb75f010, size 0x1c, virtual true, abstract: false, final true
inline float_t get_marginRight() ;

/// @brief Method get_marginTop, addr 0xb75f02c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_marginTop() ;

/// @brief Method get_maxHeight, addr 0xb75f048, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat get_maxHeight() ;

/// @brief Method get_maxWidth, addr 0xb75f23c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat get_maxWidth() ;

/// @brief Method get_minHeight, addr 0xb75f26c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat get_minHeight() ;

/// @brief Method get_minWidth, addr 0xb75f29c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat get_minWidth() ;

/// @brief Method get_opacity, addr 0xb75f2cc, size 0x1c, virtual true, abstract: false, final true
inline float_t get_opacity() ;

/// @brief Method get_paddingBottom, addr 0xb75f2e8, size 0x1c, virtual true, abstract: false, final true
inline float_t get_paddingBottom() ;

/// @brief Method get_paddingLeft, addr 0xb75f304, size 0x1c, virtual true, abstract: false, final true
inline float_t get_paddingLeft() ;

/// @brief Method get_paddingRight, addr 0xb75f320, size 0x1c, virtual true, abstract: false, final true
inline float_t get_paddingRight() ;

/// @brief Method get_paddingTop, addr 0xb75f33c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_paddingTop() ;

/// @brief Method get_position, addr 0xb75f358, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Position get_position() ;

/// @brief Method get_right, addr 0xb75f374, size 0x1c, virtual true, abstract: false, final true
inline float_t get_right() ;

/// @brief Method get_rotate, addr 0xb75f390, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Rotate get_rotate() ;

/// @brief Method get_scale, addr 0xb75f3d4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Scale get_scale() ;

/// @brief Method get_textOverflow, addr 0xb75f3f0, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::TextOverflow get_textOverflow() ;

/// @brief Method get_top, addr 0xb75f40c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_top() ;

/// @brief Method get_transformOrigin, addr 0xb75f428, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_transformOrigin() ;

/// @brief Method get_transitionDelay, addr 0xb75f76c, size 0x1c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* get_transitionDelay() ;

/// @brief Method get_transitionDuration, addr 0xb75f788, size 0x1c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* get_transitionDuration() ;

/// @brief Method get_transitionProperty, addr 0xb75f7a4, size 0x1c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* get_transitionProperty() ;

/// @brief Method get_transitionTimingFunction, addr 0xb75f7c0, size 0x1c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>* get_transitionTimingFunction() ;

/// @brief Method get_translate, addr 0xb75f7dc, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_translate() ;

/// @brief Method get_unityBackgroundImageTintColor, addr 0xb75f9fc, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_unityBackgroundImageTintColor() ;

/// @brief Method get_unityEditorTextRenderingMode, addr 0xb75fa18, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::EditorTextRenderingMode get_unityEditorTextRenderingMode() ;

/// @brief Method get_unityFont, addr 0xb75fa34, size 0x1c, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Font> get_unityFont() ;

/// @brief Method get_unityFontDefinition, addr 0xb75fa50, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::FontDefinition get_unityFontDefinition() ;

/// @brief Method get_unityFontStyleAndWeight, addr 0xb75fa6c, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::FontStyle get_unityFontStyleAndWeight() ;

/// @brief Method get_unityParagraphSpacing, addr 0xb75fa88, size 0x28, virtual true, abstract: false, final true
inline float_t get_unityParagraphSpacing() ;

/// @brief Method get_unitySliceBottom, addr 0xb75fab0, size 0x1c, virtual true, abstract: false, final true
inline int32_t get_unitySliceBottom() ;

/// @brief Method get_unitySliceLeft, addr 0xb75facc, size 0x1c, virtual true, abstract: false, final true
inline int32_t get_unitySliceLeft() ;

/// @brief Method get_unitySliceRight, addr 0xb75fae8, size 0x1c, virtual true, abstract: false, final true
inline int32_t get_unitySliceRight() ;

/// @brief Method get_unitySliceScale, addr 0xb75fb04, size 0x1c, virtual true, abstract: false, final true
inline float_t get_unitySliceScale() ;

/// @brief Method get_unitySliceTop, addr 0xb75fb20, size 0x1c, virtual true, abstract: false, final true
inline int32_t get_unitySliceTop() ;

/// @brief Method get_unitySliceType, addr 0xb75fb3c, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::SliceType get_unitySliceType() ;

/// @brief Method get_unityTextAlign, addr 0xb75fb58, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::TextAnchor get_unityTextAlign() ;

/// @brief Method get_unityTextGenerator, addr 0xb75fb74, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::TextGeneratorType get_unityTextGenerator() ;

/// @brief Method get_unityTextOutlineColor, addr 0xb75fb90, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_unityTextOutlineColor() ;

/// @brief Method get_unityTextOutlineWidth, addr 0xb75fbac, size 0x1c, virtual true, abstract: false, final true
inline float_t get_unityTextOutlineWidth() ;

/// @brief Method get_unityTextOverflowPosition, addr 0xb75fbc8, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition() ;

/// [CompilerGenerated]
/// @brief Method get_ve, addr 0xb75fc60, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_ve() ;

/// @brief Method get_visibility, addr 0xb75fbe4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Visibility get_visibility() ;

/// @brief Method get_whiteSpace, addr 0xb75fc00, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::WhiteSpace get_whiteSpace() ;

/// @brief Method get_width, addr 0xb75fc1c, size 0x1c, virtual true, abstract: false, final true
inline float_t get_width() ;

/// @brief Method get_wordSpacing, addr 0xb75fc38, size 0x28, virtual true, abstract: false, final true
inline float_t get_wordSpacing() ;

/// @brief Convert to "::UnityEngine::UIElements::IResolvedStyle"
constexpr ::UnityEngine::UIElements::IResolvedStyle* i___UnityEngine__UIElements__IResolvedStyle() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResolvedStyleAccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccess", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ResolvedStyleAccess(ResolvedStyleAccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccess", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResolvedStyleAccess(ResolvedStyleAccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8032};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ve>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ____ve_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ResolvedStyleAccess, ____ve_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccess) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
