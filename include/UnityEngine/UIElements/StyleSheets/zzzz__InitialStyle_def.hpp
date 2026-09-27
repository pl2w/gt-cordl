#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/InitialStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InitialStyle)
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct Cursor;
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
struct Justify;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
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
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TextAutoSize;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct Visibility;
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
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class InitialStyle;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::InitialStyle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::InitialStyle*, "UnityEngine.UIElements.StyleSheets", "InitialStyle");
// Dependencies System.Object, UnityEngine.UIElements.ComputedStyle
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.InitialStyle
class CORDL_TYPE InitialStyle : public ::System::Object {
public:
// Declarations
/// @brief Field s_InitialStyle, offset 0xffffffff, size 0x50 
 __declspec(property(get=getStaticF_s_InitialStyle, put=setStaticF_s_InitialStyle)) ::UnityEngine::UIElements::ComputedStyle  s_InitialStyle;

/// @brief Method Acquire, addr 0xb802858, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::ComputedStyle Acquire() ;

/// @brief Method Get, addr 0xb802804, size 0x54, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::UIElements::ComputedStyle> Get() ;

static inline ::UnityEngine::UIElements::ComputedStyle getStaticF_s_InitialStyle() ;

/// @brief Method get_alignContent, addr 0xb8037a4, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Align get_alignContent() ;

/// @brief Method get_alignItems, addr 0xb80381c, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Align get_alignItems() ;

/// @brief Method get_alignSelf, addr 0xb803894, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Align get_alignSelf() ;

/// @brief Method get_backgroundColor, addr 0xb80390c, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundImage, addr 0xb803988, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Background get_backgroundImage() ;

/// @brief Method get_backgroundPositionX, addr 0xb803a08, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BackgroundPosition get_backgroundPositionX() ;

/// @brief Method get_backgroundPositionY, addr 0xb803a88, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BackgroundPosition get_backgroundPositionY() ;

/// @brief Method get_backgroundRepeat, addr 0xb803b08, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BackgroundRepeat get_backgroundRepeat() ;

/// @brief Method get_backgroundSize, addr 0xb803b80, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BackgroundSize get_backgroundSize() ;

/// @brief Method get_borderBottomColor, addr 0xb803c08, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_borderBottomColor() ;

/// @brief Method get_borderBottomLeftRadius, addr 0xb803c84, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_borderBottomLeftRadius() ;

/// @brief Method get_borderBottomRightRadius, addr 0xb803cfc, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_borderBottomRightRadius() ;

/// @brief Method get_borderBottomWidth, addr 0xb803d74, size 0x78, virtual false, abstract: false, final false
static inline float_t get_borderBottomWidth() ;

/// @brief Method get_borderLeftColor, addr 0xb803dec, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_borderLeftColor() ;

/// @brief Method get_borderLeftWidth, addr 0xb803e68, size 0x78, virtual false, abstract: false, final false
static inline float_t get_borderLeftWidth() ;

/// @brief Method get_borderRightColor, addr 0xb803ee0, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_borderRightColor() ;

/// @brief Method get_borderRightWidth, addr 0xb803f5c, size 0x78, virtual false, abstract: false, final false
static inline float_t get_borderRightWidth() ;

/// @brief Method get_borderTopColor, addr 0xb803fd4, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_borderTopColor() ;

/// @brief Method get_borderTopLeftRadius, addr 0xb804050, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_borderTopLeftRadius() ;

/// @brief Method get_borderTopRightRadius, addr 0xb8040c8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_borderTopRightRadius() ;

/// @brief Method get_borderTopWidth, addr 0xb804140, size 0x78, virtual false, abstract: false, final false
static inline float_t get_borderTopWidth() ;

/// @brief Method get_bottom, addr 0xb8041b8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_bottom() ;

/// @brief Method get_color, addr 0xb804230, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_color() ;

/// @brief Method get_cursor, addr 0xb8042a8, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Cursor get_cursor() ;

/// @brief Method get_display, addr 0xb804330, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::DisplayStyle get_display() ;

/// @brief Method get_flexBasis, addr 0xb8043a8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_flexBasis() ;

/// @brief Method get_flexDirection, addr 0xb804420, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::FlexDirection get_flexDirection() ;

/// @brief Method get_flexGrow, addr 0xb804498, size 0x78, virtual false, abstract: false, final false
static inline float_t get_flexGrow() ;

/// @brief Method get_flexShrink, addr 0xb804510, size 0x78, virtual false, abstract: false, final false
static inline float_t get_flexShrink() ;

/// @brief Method get_flexWrap, addr 0xb804588, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Wrap get_flexWrap() ;

/// @brief Method get_fontSize, addr 0xb804600, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_fontSize() ;

/// @brief Method get_height, addr 0xb804674, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_height() ;

/// @brief Method get_justifyContent, addr 0xb8046ec, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Justify get_justifyContent() ;

/// @brief Method get_left, addr 0xb804764, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_left() ;

/// @brief Method get_letterSpacing, addr 0xb8047dc, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_letterSpacing() ;

/// @brief Method get_marginBottom, addr 0xb804850, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_marginBottom() ;

/// @brief Method get_marginLeft, addr 0xb8048c8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_marginLeft() ;

/// @brief Method get_marginRight, addr 0xb804940, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_marginRight() ;

/// @brief Method get_marginTop, addr 0xb8049b8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_marginTop() ;

/// @brief Method get_maxHeight, addr 0xb804a30, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_maxHeight() ;

/// @brief Method get_maxWidth, addr 0xb804aa8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_maxWidth() ;

/// @brief Method get_minHeight, addr 0xb804b20, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_minHeight() ;

/// @brief Method get_minWidth, addr 0xb804b98, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_minWidth() ;

/// @brief Method get_opacity, addr 0xb804c10, size 0x78, virtual false, abstract: false, final false
static inline float_t get_opacity() ;

/// @brief Method get_overflow, addr 0xb804c88, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::OverflowInternal get_overflow() ;

/// @brief Method get_paddingBottom, addr 0xb804d00, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_paddingBottom() ;

/// @brief Method get_paddingLeft, addr 0xb804d78, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_paddingLeft() ;

/// @brief Method get_paddingRight, addr 0xb804df0, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_paddingRight() ;

/// @brief Method get_paddingTop, addr 0xb804e68, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_paddingTop() ;

/// @brief Method get_position, addr 0xb804ee0, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Position get_position() ;

/// @brief Method get_right, addr 0xb804f58, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_right() ;

/// @brief Method get_rotate, addr 0xb804fd0, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Rotate get_rotate() ;

/// @brief Method get_scale, addr 0xb805058, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Scale get_scale() ;

/// @brief Method get_textOverflow, addr 0xb8050d4, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TextOverflow get_textOverflow() ;

/// @brief Method get_textShadow, addr 0xb80514c, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TextShadow get_textShadow() ;

/// @brief Method get_top, addr 0xb8051d0, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_top() ;

/// @brief Method get_transformOrigin, addr 0xb805248, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TransformOrigin get_transformOrigin() ;

/// @brief Method get_transitionDelay, addr 0xb8052d0, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* get_transitionDelay() ;

/// @brief Method get_transitionDuration, addr 0xb805348, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* get_transitionDuration() ;

/// @brief Method get_transitionProperty, addr 0xb8053c0, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* get_transitionProperty() ;

/// @brief Method get_transitionTimingFunction, addr 0xb805438, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* get_transitionTimingFunction() ;

/// @brief Method get_translate, addr 0xb8054b0, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Translate get_translate() ;

/// @brief Method get_unityBackgroundImageTintColor, addr 0xb805538, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_unityBackgroundImageTintColor() ;

/// @brief Method get_unityEditorTextRenderingMode, addr 0xb8055b4, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::EditorTextRenderingMode get_unityEditorTextRenderingMode() ;

/// @brief Method get_unityFont, addr 0xb805628, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Font> get_unityFont() ;

/// @brief Method get_unityFontDefinition, addr 0xb80569c, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::FontDefinition get_unityFontDefinition() ;

/// @brief Method get_unityFontStyleAndWeight, addr 0xb805714, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::FontStyle get_unityFontStyleAndWeight() ;

/// @brief Method get_unityOverflowClipBox, addr 0xb805788, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::OverflowClipBox get_unityOverflowClipBox() ;

/// @brief Method get_unityParagraphSpacing, addr 0xb805800, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_unityParagraphSpacing() ;

/// @brief Method get_unitySliceBottom, addr 0xb805874, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_unitySliceBottom() ;

/// @brief Method get_unitySliceLeft, addr 0xb8058ec, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_unitySliceLeft() ;

/// @brief Method get_unitySliceRight, addr 0xb805964, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_unitySliceRight() ;

/// @brief Method get_unitySliceScale, addr 0xb8059dc, size 0x78, virtual false, abstract: false, final false
static inline float_t get_unitySliceScale() ;

/// @brief Method get_unitySliceTop, addr 0xb805a54, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_unitySliceTop() ;

/// @brief Method get_unitySliceType, addr 0xb805acc, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::SliceType get_unitySliceType() ;

/// @brief Method get_unityTextAlign, addr 0xb805b44, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::TextAnchor get_unityTextAlign() ;

/// @brief Method get_unityTextAutoSize, addr 0xb805bb8, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TextAutoSize get_unityTextAutoSize() ;

/// @brief Method get_unityTextGenerator, addr 0xb805c40, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::TextGeneratorType get_unityTextGenerator() ;

/// @brief Method get_unityTextOutlineColor, addr 0xb805cb4, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_unityTextOutlineColor() ;

/// @brief Method get_unityTextOutlineWidth, addr 0xb805d2c, size 0x74, virtual false, abstract: false, final false
static inline float_t get_unityTextOutlineWidth() ;

/// @brief Method get_unityTextOverflowPosition, addr 0xb805da0, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition() ;

/// @brief Method get_visibility, addr 0xb805e18, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Visibility get_visibility() ;

/// @brief Method get_whiteSpace, addr 0xb805e8c, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::WhiteSpace get_whiteSpace() ;

/// @brief Method get_width, addr 0xb805f00, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_width() ;

/// @brief Method get_wordSpacing, addr 0xb805f78, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length get_wordSpacing() ;

static inline void setStaticF_s_InitialStyle(::UnityEngine::UIElements::ComputedStyle  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitialStyle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitialStyle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitialStyle(InitialStyle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitialStyle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitialStyle(InitialStyle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::InitialStyle) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
