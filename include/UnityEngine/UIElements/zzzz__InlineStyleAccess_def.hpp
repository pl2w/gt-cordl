#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IConvertible_def.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_InlineRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextAutoSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueCollection_def.hpp"
CORDL_MODULE_EXPORT(InlineStyleAccess)
namespace GlobalNamespace {
struct InlineStyleAccess_InlineRule;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
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
class IStyle;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct Overflow;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct SliceType;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundPosition;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundSize;
}
namespace UnityEngine::UIElements {
struct StyleBackground;
}
namespace UnityEngine::UIElements {
struct StyleColor;
}
namespace UnityEngine::UIElements {
struct StyleCursor;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StyleFontDefinition;
}
namespace UnityEngine::UIElements {
struct StyleFont;
}
namespace UnityEngine::UIElements {
struct StyleInt;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleList_1;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleTextAutoSize;
}
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
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
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGeneratorType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class InlineStyleAccess;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccess*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccess*, "UnityEngine.UIElements", "InlineStyleAccess");
// Dependencies System.IConvertible, UnityEngine.UIElements.InlineStyleAccess::InlineRule, UnityEngine.UIElements.StyleBackgroundSize, UnityEngine.UIElements.StyleCursor, UnityEngine.UIElements.StyleRotate, UnityEngine.UIElements.StyleScale, UnityEngine.UIElements.StyleTextAutoSize, UnityEngine.UIElements.StyleTextShadow, UnityEngine.UIElements.StyleTransformOrigin, UnityEngine.UIElements.StyleTranslate, UnityEngine.UIElements.StyleValueCollection
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccess
class CORDL_TYPE InlineStyleAccess : public ::UnityEngine::UIElements::StyleValueCollection {
public:
// Declarations
using InlineRule = ::GlobalNamespace::InlineStyleAccess_InlineRule;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_alignContent, put=UnityEngine_UIElements_IStyle_set_alignContent)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  UnityEngine_UIElements_IStyle_alignContent;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_alignItems, put=UnityEngine_UIElements_IStyle_set_alignItems)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  UnityEngine_UIElements_IStyle_alignItems;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_alignSelf, put=UnityEngine_UIElements_IStyle_set_alignSelf)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  UnityEngine_UIElements_IStyle_alignSelf;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_backgroundColor, put=UnityEngine_UIElements_IStyle_set_backgroundColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_backgroundColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_backgroundImage, put=UnityEngine_UIElements_IStyle_set_backgroundImage)) ::UnityEngine::UIElements::StyleBackground  UnityEngine_UIElements_IStyle_backgroundImage;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_backgroundPositionX, put=UnityEngine_UIElements_IStyle_set_backgroundPositionX)) ::UnityEngine::UIElements::StyleBackgroundPosition  UnityEngine_UIElements_IStyle_backgroundPositionX;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_backgroundPositionY, put=UnityEngine_UIElements_IStyle_set_backgroundPositionY)) ::UnityEngine::UIElements::StyleBackgroundPosition  UnityEngine_UIElements_IStyle_backgroundPositionY;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_backgroundRepeat, put=UnityEngine_UIElements_IStyle_set_backgroundRepeat)) ::UnityEngine::UIElements::StyleBackgroundRepeat  UnityEngine_UIElements_IStyle_backgroundRepeat;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_backgroundSize, put=UnityEngine_UIElements_IStyle_set_backgroundSize)) ::UnityEngine::UIElements::StyleBackgroundSize  UnityEngine_UIElements_IStyle_backgroundSize;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderBottomColor, put=UnityEngine_UIElements_IStyle_set_borderBottomColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_borderBottomColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius, put=UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_borderBottomLeftRadius;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderBottomRightRadius, put=UnityEngine_UIElements_IStyle_set_borderBottomRightRadius)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_borderBottomRightRadius;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderBottomWidth, put=UnityEngine_UIElements_IStyle_set_borderBottomWidth)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_borderBottomWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderLeftColor, put=UnityEngine_UIElements_IStyle_set_borderLeftColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_borderLeftColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderLeftWidth, put=UnityEngine_UIElements_IStyle_set_borderLeftWidth)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_borderLeftWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderRightColor, put=UnityEngine_UIElements_IStyle_set_borderRightColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_borderRightColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderRightWidth, put=UnityEngine_UIElements_IStyle_set_borderRightWidth)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_borderRightWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderTopColor, put=UnityEngine_UIElements_IStyle_set_borderTopColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_borderTopColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderTopLeftRadius, put=UnityEngine_UIElements_IStyle_set_borderTopLeftRadius)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_borderTopLeftRadius;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderTopRightRadius, put=UnityEngine_UIElements_IStyle_set_borderTopRightRadius)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_borderTopRightRadius;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_borderTopWidth, put=UnityEngine_UIElements_IStyle_set_borderTopWidth)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_borderTopWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_bottom, put=UnityEngine_UIElements_IStyle_set_bottom)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_bottom;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_color, put=UnityEngine_UIElements_IStyle_set_color)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_color;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_cursor, put=UnityEngine_UIElements_IStyle_set_cursor)) ::UnityEngine::UIElements::StyleCursor  UnityEngine_UIElements_IStyle_cursor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_display, put=UnityEngine_UIElements_IStyle_set_display)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>  UnityEngine_UIElements_IStyle_display;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_flexBasis, put=UnityEngine_UIElements_IStyle_set_flexBasis)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_flexBasis;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_flexDirection, put=UnityEngine_UIElements_IStyle_set_flexDirection)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>  UnityEngine_UIElements_IStyle_flexDirection;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_flexGrow, put=UnityEngine_UIElements_IStyle_set_flexGrow)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_flexGrow;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_flexShrink, put=UnityEngine_UIElements_IStyle_set_flexShrink)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_flexShrink;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_flexWrap, put=UnityEngine_UIElements_IStyle_set_flexWrap)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>  UnityEngine_UIElements_IStyle_flexWrap;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_fontSize, put=UnityEngine_UIElements_IStyle_set_fontSize)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_fontSize;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_height, put=UnityEngine_UIElements_IStyle_set_height)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_height;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_justifyContent, put=UnityEngine_UIElements_IStyle_set_justifyContent)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>  UnityEngine_UIElements_IStyle_justifyContent;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_left, put=UnityEngine_UIElements_IStyle_set_left)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_left;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_letterSpacing, put=UnityEngine_UIElements_IStyle_set_letterSpacing)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_letterSpacing;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_marginBottom, put=UnityEngine_UIElements_IStyle_set_marginBottom)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_marginBottom;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_marginLeft, put=UnityEngine_UIElements_IStyle_set_marginLeft)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_marginLeft;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_marginRight, put=UnityEngine_UIElements_IStyle_set_marginRight)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_marginRight;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_marginTop, put=UnityEngine_UIElements_IStyle_set_marginTop)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_marginTop;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_maxHeight, put=UnityEngine_UIElements_IStyle_set_maxHeight)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_maxHeight;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_maxWidth, put=UnityEngine_UIElements_IStyle_set_maxWidth)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_maxWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_minHeight, put=UnityEngine_UIElements_IStyle_set_minHeight)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_minHeight;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_minWidth, put=UnityEngine_UIElements_IStyle_set_minWidth)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_minWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_opacity, put=UnityEngine_UIElements_IStyle_set_opacity)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_opacity;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_overflow, put=UnityEngine_UIElements_IStyle_set_overflow)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>  UnityEngine_UIElements_IStyle_overflow;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_paddingBottom, put=UnityEngine_UIElements_IStyle_set_paddingBottom)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_paddingBottom;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_paddingLeft, put=UnityEngine_UIElements_IStyle_set_paddingLeft)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_paddingLeft;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_paddingRight, put=UnityEngine_UIElements_IStyle_set_paddingRight)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_paddingRight;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_paddingTop, put=UnityEngine_UIElements_IStyle_set_paddingTop)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_paddingTop;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_position, put=UnityEngine_UIElements_IStyle_set_position)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>  UnityEngine_UIElements_IStyle_position;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_right, put=UnityEngine_UIElements_IStyle_set_right)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_right;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_rotate, put=UnityEngine_UIElements_IStyle_set_rotate)) ::UnityEngine::UIElements::StyleRotate  UnityEngine_UIElements_IStyle_rotate;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_scale, put=UnityEngine_UIElements_IStyle_set_scale)) ::UnityEngine::UIElements::StyleScale  UnityEngine_UIElements_IStyle_scale;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_textOverflow, put=UnityEngine_UIElements_IStyle_set_textOverflow)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>  UnityEngine_UIElements_IStyle_textOverflow;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_textShadow, put=UnityEngine_UIElements_IStyle_set_textShadow)) ::UnityEngine::UIElements::StyleTextShadow  UnityEngine_UIElements_IStyle_textShadow;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_top, put=UnityEngine_UIElements_IStyle_set_top)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_top;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_transformOrigin, put=UnityEngine_UIElements_IStyle_set_transformOrigin)) ::UnityEngine::UIElements::StyleTransformOrigin  UnityEngine_UIElements_IStyle_transformOrigin;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_transitionDelay, put=UnityEngine_UIElements_IStyle_set_transitionDelay)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>  UnityEngine_UIElements_IStyle_transitionDelay;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_transitionDuration, put=UnityEngine_UIElements_IStyle_set_transitionDuration)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>  UnityEngine_UIElements_IStyle_transitionDuration;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_transitionProperty, put=UnityEngine_UIElements_IStyle_set_transitionProperty)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>  UnityEngine_UIElements_IStyle_transitionProperty;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_transitionTimingFunction, put=UnityEngine_UIElements_IStyle_set_transitionTimingFunction)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>  UnityEngine_UIElements_IStyle_transitionTimingFunction;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_translate, put=UnityEngine_UIElements_IStyle_set_translate)) ::UnityEngine::UIElements::StyleTranslate  UnityEngine_UIElements_IStyle_translate;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor, put=UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_unityBackgroundImageTintColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode, put=UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>  UnityEngine_UIElements_IStyle_unityEditorTextRenderingMode;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityFont, put=UnityEngine_UIElements_IStyle_set_unityFont)) ::UnityEngine::UIElements::StyleFont  UnityEngine_UIElements_IStyle_unityFont;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityFontDefinition, put=UnityEngine_UIElements_IStyle_set_unityFontDefinition)) ::UnityEngine::UIElements::StyleFontDefinition  UnityEngine_UIElements_IStyle_unityFontDefinition;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight, put=UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>  UnityEngine_UIElements_IStyle_unityFontStyleAndWeight;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityOverflowClipBox, put=UnityEngine_UIElements_IStyle_set_unityOverflowClipBox)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>  UnityEngine_UIElements_IStyle_unityOverflowClipBox;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityParagraphSpacing, put=UnityEngine_UIElements_IStyle_set_unityParagraphSpacing)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_unityParagraphSpacing;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unitySliceBottom, put=UnityEngine_UIElements_IStyle_set_unitySliceBottom)) ::UnityEngine::UIElements::StyleInt  UnityEngine_UIElements_IStyle_unitySliceBottom;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unitySliceLeft, put=UnityEngine_UIElements_IStyle_set_unitySliceLeft)) ::UnityEngine::UIElements::StyleInt  UnityEngine_UIElements_IStyle_unitySliceLeft;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unitySliceRight, put=UnityEngine_UIElements_IStyle_set_unitySliceRight)) ::UnityEngine::UIElements::StyleInt  UnityEngine_UIElements_IStyle_unitySliceRight;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unitySliceScale, put=UnityEngine_UIElements_IStyle_set_unitySliceScale)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_unitySliceScale;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unitySliceTop, put=UnityEngine_UIElements_IStyle_set_unitySliceTop)) ::UnityEngine::UIElements::StyleInt  UnityEngine_UIElements_IStyle_unitySliceTop;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unitySliceType, put=UnityEngine_UIElements_IStyle_set_unitySliceType)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>  UnityEngine_UIElements_IStyle_unitySliceType;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityTextAlign, put=UnityEngine_UIElements_IStyle_set_unityTextAlign)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>  UnityEngine_UIElements_IStyle_unityTextAlign;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityTextAutoSize, put=UnityEngine_UIElements_IStyle_set_unityTextAutoSize)) ::UnityEngine::UIElements::StyleTextAutoSize  UnityEngine_UIElements_IStyle_unityTextAutoSize;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityTextGenerator, put=UnityEngine_UIElements_IStyle_set_unityTextGenerator)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>  UnityEngine_UIElements_IStyle_unityTextGenerator;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityTextOutlineColor, put=UnityEngine_UIElements_IStyle_set_unityTextOutlineColor)) ::UnityEngine::UIElements::StyleColor  UnityEngine_UIElements_IStyle_unityTextOutlineColor;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth, put=UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth)) ::UnityEngine::UIElements::StyleFloat  UnityEngine_UIElements_IStyle_unityTextOutlineWidth;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition, put=UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>  UnityEngine_UIElements_IStyle_unityTextOverflowPosition;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_visibility, put=UnityEngine_UIElements_IStyle_set_visibility)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>  UnityEngine_UIElements_IStyle_visibility;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_whiteSpace, put=UnityEngine_UIElements_IStyle_set_whiteSpace)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>  UnityEngine_UIElements_IStyle_whiteSpace;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_width, put=UnityEngine_UIElements_IStyle_set_width)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_width;

 __declspec(property(get=UnityEngine_UIElements_IStyle_get_wordSpacing, put=UnityEngine_UIElements_IStyle_set_wordSpacing)) ::UnityEngine::UIElements::StyleLength  UnityEngine_UIElements_IStyle_wordSpacing;

/// @brief Field <ve>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ve_k__BackingField, put=__cordl_internal_set__ve_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _ve_k__BackingField;

/// @brief Field m_HasInlineBackgroundSize, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineBackgroundSize, put=__cordl_internal_set_m_HasInlineBackgroundSize)) bool  m_HasInlineBackgroundSize;

/// @brief Field m_HasInlineCursor, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineCursor, put=__cordl_internal_set_m_HasInlineCursor)) bool  m_HasInlineCursor;

/// @brief Field m_HasInlineRotate, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineRotate, put=__cordl_internal_set_m_HasInlineRotate)) bool  m_HasInlineRotate;

/// @brief Field m_HasInlineScale, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineScale, put=__cordl_internal_set_m_HasInlineScale)) bool  m_HasInlineScale;

/// @brief Field m_HasInlineTextAutoSize, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineTextAutoSize, put=__cordl_internal_set_m_HasInlineTextAutoSize)) bool  m_HasInlineTextAutoSize;

/// @brief Field m_HasInlineTextShadow, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineTextShadow, put=__cordl_internal_set_m_HasInlineTextShadow)) bool  m_HasInlineTextShadow;

/// @brief Field m_HasInlineTransformOrigin, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineTransformOrigin, put=__cordl_internal_set_m_HasInlineTransformOrigin)) bool  m_HasInlineTransformOrigin;

/// @brief Field m_HasInlineTranslate, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInlineTranslate, put=__cordl_internal_set_m_HasInlineTranslate)) bool  m_HasInlineTranslate;

/// @brief Field m_InlineBackgroundSize, offset 0x108, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_InlineBackgroundSize, put=__cordl_internal_set_m_InlineBackgroundSize)) ::UnityEngine::UIElements::StyleBackgroundSize  m_InlineBackgroundSize;

/// @brief Field m_InlineCursor, offset 0x30, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_InlineCursor, put=__cordl_internal_set_m_InlineCursor)) ::UnityEngine::UIElements::StyleCursor  m_InlineCursor;

/// @brief Field m_InlineRotateOperation, offset 0xd0, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_InlineRotateOperation, put=__cordl_internal_set_m_InlineRotateOperation)) ::UnityEngine::UIElements::StyleRotate  m_InlineRotateOperation;

/// @brief Field m_InlineRule, offset 0x120, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_InlineRule, put=__cordl_internal_set_m_InlineRule)) ::GlobalNamespace::InlineStyleAccess_InlineRule  m_InlineRule;

/// @brief Field m_InlineScale, offset 0xf0, size 0x14 
 __declspec(property(get=__cordl_internal_get_m_InlineScale, put=__cordl_internal_set_m_InlineScale)) ::UnityEngine::UIElements::StyleScale  m_InlineScale;

/// @brief Field m_InlineTextAutoSize, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_InlineTextAutoSize, put=__cordl_internal_set_m_InlineTextAutoSize)) ::UnityEngine::UIElements::StyleTextAutoSize  m_InlineTextAutoSize;

/// @brief Field m_InlineTextShadow, offset 0x54, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_InlineTextShadow, put=__cordl_internal_set_m_InlineTextShadow)) ::UnityEngine::UIElements::StyleTextShadow  m_InlineTextShadow;

/// @brief Field m_InlineTransformOrigin, offset 0x94, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_InlineTransformOrigin, put=__cordl_internal_set_m_InlineTransformOrigin)) ::UnityEngine::UIElements::StyleTransformOrigin  m_InlineTransformOrigin;

/// @brief Field m_InlineTranslateOperation, offset 0xb0, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_InlineTranslateOperation, put=__cordl_internal_set_m_InlineTranslateOperation)) ::UnityEngine::UIElements::StyleTranslate  m_InlineTranslateOperation;

/// @brief Field m_ValuesManaged, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValuesManaged, put=__cordl_internal_set_m_ValuesManaged)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*  m_ValuesManaged;

/// @brief Field s_StylePropertyReader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StylePropertyReader, put=setStaticF_s_StylePropertyReader)) ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  s_StylePropertyReader;

 __declspec(property(get=get_ve, put=set_ve)) ::UnityEngine::UIElements::VisualElement*  ve;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyle"
constexpr operator  ::UnityEngine::UIElements::IStyle*() noexcept;

/// @brief Method ApplyFromComputedStyle, addr 0xb7508a8, size 0x21c, virtual false, abstract: false, final false
inline void ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  newStyle) ;

/// @brief Method ApplyInlineStyles, addr 0xb74d0a0, size 0xc10, virtual false, abstract: false, final false
inline void ApplyInlineStyles(::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyStyleBackgroundSize, addr 0xb7505b8, size 0x21c, virtual false, abstract: false, final false
inline void ApplyStyleBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize  backgroundSize) ;

/// @brief Method ApplyStyleCursor, addr 0xb74f8c0, size 0x1b0, virtual false, abstract: false, final false
inline void ApplyStyleCursor(::UnityEngine::UIElements::StyleCursor  cursor) ;

/// @brief Method ApplyStyleRotate, addr 0xb750338, size 0x280, virtual false, abstract: false, final false
inline void ApplyStyleRotate(::UnityEngine::UIElements::StyleRotate  rotate) ;

/// @brief Method ApplyStyleScale, addr 0xb750124, size 0x214, virtual false, abstract: false, final false
inline void ApplyStyleScale(::UnityEngine::UIElements::StyleScale  scale) ;

/// @brief Method ApplyStyleTextAutoSize, addr 0xb74fc84, size 0x68, virtual false, abstract: false, final false
inline void ApplyStyleTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize  textAutoSize) ;

/// @brief Method ApplyStyleTextShadow, addr 0xb74fa70, size 0x214, virtual false, abstract: false, final false
inline void ApplyStyleTextShadow(::UnityEngine::UIElements::StyleTextShadow  textShadow) ;

/// @brief Method ApplyStyleTransformOrigin, addr 0xb74fcec, size 0x21c, virtual false, abstract: false, final false
inline void ApplyStyleTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin  transformOrigin) ;

/// @brief Method ApplyStyleTranslate, addr 0xb74ff08, size 0x21c, virtual false, abstract: false, final false
inline void ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate  translate) ;

/// @brief Method ApplyStyleValue, addr 0xb74f5d4, size 0x2ec, virtual false, abstract: false, final false
inline void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue  value) ;

/// @brief Method ApplyStyleValue, addr 0xb7507d4, size 0xd4, virtual false, abstract: false, final false
inline void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValueManaged  value) ;

/// @brief Method Finalize, addr 0xb74ceac, size 0x13c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetStyleList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::UIElements::StyleList_1<T> GetStyleList(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method IsValueSet, addr 0xb74dcb0, size 0x370, virtual false, abstract: false, final false
inline bool IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

static inline ::UnityEngine::UIElements::InlineStyleAccess* New_ctor(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveInlineStyle, addr 0xb74f4e8, size 0xec, virtual false, abstract: false, final false
inline bool RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method SetInlineBackgroundSize, addr 0xb74e7f4, size 0x148, virtual false, abstract: false, final false
inline bool SetInlineBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize  inlineValue) ;

/// @brief Method SetInlineCursor, addr 0xb74e0f8, size 0x194, virtual false, abstract: false, final false
inline bool SetInlineCursor(::UnityEngine::UIElements::StyleCursor  inlineValue) ;

/// @brief Method SetInlineRotate, addr 0xb74f1a4, size 0x148, virtual false, abstract: false, final false
inline bool SetInlineRotate(::UnityEngine::UIElements::StyleRotate  inlineValue) ;

/// @brief Method SetInlineRule, addr 0xb74cfe8, size 0xb8, virtual false, abstract: false, final false
inline void SetInlineRule(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleRule*  rule) ;

/// @brief Method SetInlineScale, addr 0xb74f3b8, size 0x130, virtual false, abstract: false, final false
inline bool SetInlineScale(::UnityEngine::UIElements::StyleScale  inlineValue) ;

/// @brief Method SetInlineTextAutoSize, addr 0xb74e590, size 0x190, virtual false, abstract: false, final false
inline bool SetInlineTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize  inlineValue) ;

/// @brief Method SetInlineTextShadow, addr 0xb74e340, size 0x184, virtual false, abstract: false, final false
inline bool SetInlineTextShadow(::UnityEngine::UIElements::StyleTextShadow  inlineValue) ;

/// @brief Method SetInlineTransformOrigin, addr 0xb74ed68, size 0x140, virtual false, abstract: false, final false
inline bool SetInlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin  inlineValue) ;

/// @brief Method SetInlineTranslate, addr 0xb74ef80, size 0x14c, virtual false, abstract: false, final false
inline bool SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb748970, size 0x518, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleBackground  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb748edc, size 0x15c, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleBackgroundPosition  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb7490f4, size 0x150, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleBackgroundRepeat  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb748750, size 0x18c, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleColor  inlineValue) ;

/// @brief Method SetStyleValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleEnum_1<T>  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb749594, size 0x148, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleFloat  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb74b9b8, size 0x26c, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleFont  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb74bcb4, size 0x33c, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleFontDefinition  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb74c2f0, size 0x150, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleInt  inlineValue) ;

/// @brief Method SetStyleValue, addr 0xb749334, size 0x16c, virtual false, abstract: false, final false
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleLength  inlineValue) ;

/// @brief Method SetStyleValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleList_1<T>  inlineValue) ;

/// @brief Method SetStyleValueManaged, addr 0xb74e93c, size 0x1f0, virtual false, abstract: false, final false
inline void SetStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StyleValueManaged  value) ;

/// @brief Method TryGetInlineBackgroundSize, addr 0xb74e780, size 0x28, virtual false, abstract: false, final false
inline bool TryGetInlineBackgroundSize(::by_ref<::UnityEngine::UIElements::StyleBackgroundSize>  value) ;

/// @brief Method TryGetInlineCursor, addr 0xb74e084, size 0x30, virtual false, abstract: false, final false
inline bool TryGetInlineCursor(::by_ref<::UnityEngine::UIElements::StyleCursor>  value) ;

/// @brief Method TryGetInlineRotate, addr 0xb74f12c, size 0x2c, virtual false, abstract: false, final false
inline bool TryGetInlineRotate(::by_ref<::UnityEngine::UIElements::StyleRotate>  value) ;

/// @brief Method TryGetInlineScale, addr 0xb74f348, size 0x24, virtual false, abstract: false, final false
inline bool TryGetInlineScale(::by_ref<::UnityEngine::UIElements::StyleScale>  value) ;

/// @brief Method TryGetInlineTextAutoSize, addr 0xb74e520, size 0x24, virtual false, abstract: false, final false
inline bool TryGetInlineTextAutoSize(::by_ref<::UnityEngine::UIElements::StyleTextAutoSize>  value) ;

/// @brief Method TryGetInlineTextShadow, addr 0xb74e2dc, size 0x20, virtual false, abstract: false, final false
inline bool TryGetInlineTextShadow(::by_ref<::UnityEngine::UIElements::StyleTextShadow>  value) ;

/// @brief Method TryGetInlineTransformOrigin, addr 0xb74ecf8, size 0x24, virtual false, abstract: false, final false
inline bool TryGetInlineTransformOrigin(::by_ref<::UnityEngine::UIElements::StyleTransformOrigin>  value) ;

/// @brief Method TryGetInlineTranslate, addr 0xb74ef08, size 0x2c, virtual false, abstract: false, final false
inline bool TryGetInlineTranslate(::by_ref<::UnityEngine::UIElements::StyleTranslate>  value) ;

/// @brief Method TryGetStyleValueManaged, addr 0xb74eb2c, size 0x170, virtual false, abstract: false, final false
inline bool TryGetStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::by_ref<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_alignContent, addr 0xb7482a0, size 0x98, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine_UIElements_IStyle_get_alignContent() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_alignItems, addr 0xb748400, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine_UIElements_IStyle_get_alignItems() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_alignSelf, addr 0xb748568, size 0x98, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine_UIElements_IStyle_get_alignSelf() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_backgroundColor, addr 0xb7486c8, size 0x38, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_backgroundColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_backgroundImage, addr 0xb7488dc, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleBackground UnityEngine_UIElements_IStyle_get_backgroundImage() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_backgroundPositionX, addr 0xb748e88, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleBackgroundPosition UnityEngine_UIElements_IStyle_get_backgroundPositionX() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_backgroundPositionY, addr 0xb749038, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleBackgroundPosition UnityEngine_UIElements_IStyle_get_backgroundPositionY() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_backgroundRepeat, addr 0xb74908c, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleBackgroundRepeat UnityEngine_UIElements_IStyle_get_backgroundRepeat() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_backgroundSize, addr 0xb74e720, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleBackgroundSize UnityEngine_UIElements_IStyle_get_backgroundSize() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderBottomColor, addr 0xb749244, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_borderBottomColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderBottomLeftRadius, addr 0xb7492d4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderBottomRightRadius, addr 0xb7494a0, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_borderBottomRightRadius() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderBottomWidth, addr 0xb749508, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_borderBottomWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderLeftColor, addr 0xb7496dc, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_borderLeftColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderLeftWidth, addr 0xb74976c, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_borderLeftWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderRightColor, addr 0xb7497f8, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_borderRightColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderRightWidth, addr 0xb749888, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_borderRightWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderTopColor, addr 0xb749914, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_borderTopColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderTopLeftRadius, addr 0xb7499a4, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_borderTopLeftRadius() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderTopRightRadius, addr 0xb749a0c, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_borderTopRightRadius() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_borderTopWidth, addr 0xb749a74, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_borderTopWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_bottom, addr 0xb749b00, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_bottom() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_color, addr 0xb749bb0, size 0x38, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_color() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_cursor, addr 0xb74e020, size 0x64, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleCursor UnityEngine_UIElements_IStyle_get_cursor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_display, addr 0xb749c38, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine_UIElements_IStyle_get_display() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_flexBasis, addr 0xb749da0, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_flexBasis() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_flexDirection, addr 0xb749e50, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> UnityEngine_UIElements_IStyle_get_flexDirection() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_flexGrow, addr 0xb749fb8, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_flexGrow() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_flexShrink, addr 0xb74a044, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_flexShrink() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_flexWrap, addr 0xb74a0d0, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> UnityEngine_UIElements_IStyle_get_flexWrap() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_fontSize, addr 0xb74a238, size 0x1c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_fontSize() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_height, addr 0xb74a298, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_height() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_justifyContent, addr 0xb74a348, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> UnityEngine_UIElements_IStyle_get_justifyContent() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_left, addr 0xb74a4b0, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_left() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_letterSpacing, addr 0xb74a560, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_letterSpacing() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_marginBottom, addr 0xb74a5c8, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_marginBottom() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_marginLeft, addr 0xb74a678, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_marginLeft() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_marginRight, addr 0xb74a728, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_marginRight() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_marginTop, addr 0xb74a7d8, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_marginTop() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_maxHeight, addr 0xb74a888, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_maxHeight() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_maxWidth, addr 0xb74a938, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_maxWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_minHeight, addr 0xb74a9e8, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_minHeight() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_minWidth, addr 0xb74aa98, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_minWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_opacity, addr 0xb74ab48, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_opacity() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_overflow, addr 0xb74ab98, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> UnityEngine_UIElements_IStyle_get_overflow() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_paddingBottom, addr 0xb74ad74, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingBottom() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_paddingLeft, addr 0xb74ae24, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingLeft() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_paddingRight, addr 0xb74aed4, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingRight() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_paddingTop, addr 0xb74af84, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingTop() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_position, addr 0xb74b034, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> UnityEngine_UIElements_IStyle_get_position() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_right, addr 0xb74b19c, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_right() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_rotate, addr 0xb74f0cc, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleRotate UnityEngine_UIElements_IStyle_get_rotate() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_scale, addr 0xb74f2ec, size 0x5c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleScale UnityEngine_UIElements_IStyle_get_scale() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_textOverflow, addr 0xb74b24c, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> UnityEngine_UIElements_IStyle_get_textOverflow() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_textShadow, addr 0xb74e28c, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleTextShadow UnityEngine_UIElements_IStyle_get_textShadow() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_top, addr 0xb74b374, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_top() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_transformOrigin, addr 0xb74ec9c, size 0x5c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine_UIElements_IStyle_get_transformOrigin() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_transitionDelay, addr 0xb74b424, size 0x4c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> UnityEngine_UIElements_IStyle_get_transitionDelay() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_transitionDuration, addr 0xb74b500, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> UnityEngine_UIElements_IStyle_get_transitionDuration() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_transitionProperty, addr 0xb74b5e4, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> UnityEngine_UIElements_IStyle_get_transitionProperty() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_transitionTimingFunction, addr 0xb74b6c8, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> UnityEngine_UIElements_IStyle_get_transitionTimingFunction() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_translate, addr 0xb74eea8, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleTranslate UnityEngine_UIElements_IStyle_get_translate() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityBackgroundImageTintColor, addr 0xb74b7ac, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityEditorTextRenderingMode, addr 0xb74b83c, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityFont, addr 0xb74b964, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFont UnityEngine_UIElements_IStyle_get_unityFont() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityFontDefinition, addr 0xb74bc24, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFontDefinition UnityEngine_UIElements_IStyle_get_unityFontDefinition() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityFontStyleAndWeight, addr 0xb74bff0, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityOverflowClipBox, addr 0xb74c118, size 0x98, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> UnityEngine_UIElements_IStyle_get_unityOverflowClipBox() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityParagraphSpacing, addr 0xb74c238, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_unityParagraphSpacing() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unitySliceBottom, addr 0xb74c2a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleInt UnityEngine_UIElements_IStyle_get_unitySliceBottom() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unitySliceLeft, addr 0xb74c440, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleInt UnityEngine_UIElements_IStyle_get_unitySliceLeft() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unitySliceRight, addr 0xb74c490, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleInt UnityEngine_UIElements_IStyle_get_unitySliceRight() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unitySliceScale, addr 0xb74c4e0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_unitySliceScale() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unitySliceTop, addr 0xb74c530, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleInt UnityEngine_UIElements_IStyle_get_unitySliceTop() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unitySliceType, addr 0xb74c580, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType> UnityEngine_UIElements_IStyle_get_unitySliceType() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityTextAlign, addr 0xb74c6a8, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> UnityEngine_UIElements_IStyle_get_unityTextAlign() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityTextAutoSize, addr 0xb74e4c4, size 0x5c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleTextAutoSize UnityEngine_UIElements_IStyle_get_unityTextAutoSize() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityTextGenerator, addr 0xb74c7d0, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> UnityEngine_UIElements_IStyle_get_unityTextGenerator() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityTextOutlineColor, addr 0xb74c8f8, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_get_unityTextOutlineColor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityTextOutlineWidth, addr 0xb74c988, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_unityTextOverflowPosition, addr 0xb74c9d8, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_visibility, addr 0xb74cb00, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> UnityEngine_UIElements_IStyle_get_visibility() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_whiteSpace, addr 0xb74cc2c, size 0x9c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> UnityEngine_UIElements_IStyle_get_whiteSpace() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_width, addr 0xb74cd54, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_width() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_wordSpacing, addr 0xb74ce04, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_wordSpacing() ;

/// @brief Method UnityEngine.UIElements.IStyle.set_alignContent, addr 0xb748338, size 0xc8, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_alignContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_alignItems, addr 0xb74849c, size 0xcc, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_alignItems(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_alignSelf, addr 0xb748600, size 0xc8, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_alignSelf(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundColor, addr 0xb748700, size 0x50, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_backgroundColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundImage, addr 0xb74891c, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_backgroundImage(::UnityEngine::UIElements::StyleBackground  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundPositionX, addr 0xb748e98, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_backgroundPositionX(::UnityEngine::UIElements::StyleBackgroundPosition  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundPositionY, addr 0xb749048, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_backgroundPositionY(::UnityEngine::UIElements::StyleBackgroundPosition  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundRepeat, addr 0xb7490ac, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_backgroundRepeat(::UnityEngine::UIElements::StyleBackgroundRepeat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundSize, addr 0xb74e7a8, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_backgroundSize(::UnityEngine::UIElements::StyleBackgroundSize  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomColor, addr 0xb749280, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderBottomColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius, addr 0xb7492f0, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomRightRadius, addr 0xb7494c0, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomWidth, addr 0xb749518, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftColor, addr 0xb749718, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderLeftColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftWidth, addr 0xb74977c, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderRightColor, addr 0xb749834, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderRightColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderRightWidth, addr 0xb749898, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderRightWidth(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopColor, addr 0xb749950, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderTopColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopLeftRadius, addr 0xb7499c4, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopRightRadius, addr 0xb749a2c, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopWidth, addr 0xb749a84, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_borderTopWidth(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_bottom, addr 0xb749b20, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_bottom(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_color, addr 0xb749be8, size 0x50, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_color(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_cursor, addr 0xb74e0b4, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_cursor(::UnityEngine::UIElements::StyleCursor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_display, addr 0xb749cd4, size 0xcc, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexBasis, addr 0xb749dc0, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_flexBasis(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexDirection, addr 0xb749eec, size 0xcc, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexGrow, addr 0xb749fc8, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_flexGrow(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexShrink, addr 0xb74a054, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_flexShrink(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexWrap, addr 0xb74a16c, size 0xcc, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_flexWrap(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_fontSize, addr 0xb74a254, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_fontSize(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_height, addr 0xb74a2b8, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_height(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_justifyContent, addr 0xb74a3e4, size 0xcc, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_justifyContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_left, addr 0xb74a4d0, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_left(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_letterSpacing, addr 0xb74a580, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_letterSpacing(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginBottom, addr 0xb74a5e8, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_marginBottom(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginLeft, addr 0xb74a698, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_marginLeft(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginRight, addr 0xb74a748, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_marginRight(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginTop, addr 0xb74a7f8, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_marginTop(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_maxHeight, addr 0xb74a8a8, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_maxHeight(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_maxWidth, addr 0xb74a958, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_maxWidth(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_minHeight, addr 0xb74aa08, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_minHeight(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_minWidth, addr 0xb74aab8, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_minWidth(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_opacity, addr 0xb74ab58, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_opacity(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_overflow, addr 0xb74ac34, size 0x140, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_overflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingBottom, addr 0xb74ad94, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_paddingBottom(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingLeft, addr 0xb74ae44, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_paddingLeft(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingRight, addr 0xb74aef4, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_paddingRight(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingTop, addr 0xb74afa4, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_paddingTop(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_position, addr 0xb74b0d0, size 0xcc, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_right, addr 0xb74b1bc, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_right(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_rotate, addr 0xb74f158, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_rotate(::UnityEngine::UIElements::StyleRotate  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_scale, addr 0xb74f36c, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_scale(::UnityEngine::UIElements::StyleScale  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_textOverflow, addr 0xb74b2e8, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_textOverflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_textShadow, addr 0xb74e2fc, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_textShadow(::UnityEngine::UIElements::StyleTextShadow  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_top, addr 0xb74b394, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_top(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_transformOrigin, addr 0xb74ed1c, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_transformOrigin(::UnityEngine::UIElements::StyleTransformOrigin  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_transitionDelay, addr 0xb74b470, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_transitionDelay(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_transitionDuration, addr 0xb74b550, size 0x94, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_transitionDuration(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_transitionProperty, addr 0xb74b634, size 0x94, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_transitionProperty(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_transitionTimingFunction, addr 0xb74b718, size 0x94, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_transitionTimingFunction(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_translate, addr 0xb74ef34, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_translate(::UnityEngine::UIElements::StyleTranslate  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor, addr 0xb74b7e8, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityEditorTextRenderingMode, addr 0xb74b8d8, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityFont, addr 0xb74b974, size 0x44, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityFont(::UnityEngine::UIElements::StyleFont  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityFontDefinition, addr 0xb74bc60, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityFontDefinition(::UnityEngine::UIElements::StyleFontDefinition  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityFontStyleAndWeight, addr 0xb74c08c, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityOverflowClipBox, addr 0xb74c1b0, size 0x88, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityOverflowClipBox(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityParagraphSpacing, addr 0xb74c258, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityParagraphSpacing(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unitySliceBottom, addr 0xb74c2b0, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unitySliceBottom(::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unitySliceLeft, addr 0xb74c450, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unitySliceLeft(::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unitySliceRight, addr 0xb74c4a0, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unitySliceRight(::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unitySliceScale, addr 0xb74c4f0, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unitySliceScale(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unitySliceTop, addr 0xb74c540, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unitySliceTop(::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unitySliceType, addr 0xb74c61c, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unitySliceType(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityTextAlign, addr 0xb74c744, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityTextAlign(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityTextAutoSize, addr 0xb74e544, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityTextGenerator, addr 0xb74c86c, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityTextGenerator(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityTextOutlineColor, addr 0xb74c934, size 0x54, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityTextOutlineColor(::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityTextOutlineWidth, addr 0xb74c998, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth(::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityTextOverflowPosition, addr 0xb74ca74, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_visibility, addr 0xb74cb9c, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_whiteSpace, addr 0xb74ccc8, size 0x8c, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_whiteSpace(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_width, addr 0xb74cd74, size 0x90, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_width(::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_wordSpacing, addr 0xb74ce24, size 0x48, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IStyle_set_wordSpacing(::UnityEngine::UIElements::StyleLength  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__ve_k__BackingField() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__ve_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_HasInlineBackgroundSize() const;

constexpr bool& __cordl_internal_get_m_HasInlineBackgroundSize() ;

constexpr bool const& __cordl_internal_get_m_HasInlineCursor() const;

constexpr bool& __cordl_internal_get_m_HasInlineCursor() ;

constexpr bool const& __cordl_internal_get_m_HasInlineRotate() const;

constexpr bool& __cordl_internal_get_m_HasInlineRotate() ;

constexpr bool const& __cordl_internal_get_m_HasInlineScale() const;

constexpr bool& __cordl_internal_get_m_HasInlineScale() ;

constexpr bool const& __cordl_internal_get_m_HasInlineTextAutoSize() const;

constexpr bool& __cordl_internal_get_m_HasInlineTextAutoSize() ;

constexpr bool const& __cordl_internal_get_m_HasInlineTextShadow() const;

constexpr bool& __cordl_internal_get_m_HasInlineTextShadow() ;

constexpr bool const& __cordl_internal_get_m_HasInlineTransformOrigin() const;

constexpr bool& __cordl_internal_get_m_HasInlineTransformOrigin() ;

constexpr bool const& __cordl_internal_get_m_HasInlineTranslate() const;

constexpr bool& __cordl_internal_get_m_HasInlineTranslate() ;

constexpr ::UnityEngine::UIElements::StyleBackgroundSize const& __cordl_internal_get_m_InlineBackgroundSize() const;

constexpr ::UnityEngine::UIElements::StyleBackgroundSize& __cordl_internal_get_m_InlineBackgroundSize() ;

constexpr ::UnityEngine::UIElements::StyleCursor const& __cordl_internal_get_m_InlineCursor() const;

constexpr ::UnityEngine::UIElements::StyleCursor& __cordl_internal_get_m_InlineCursor() ;

constexpr ::UnityEngine::UIElements::StyleRotate const& __cordl_internal_get_m_InlineRotateOperation() const;

constexpr ::UnityEngine::UIElements::StyleRotate& __cordl_internal_get_m_InlineRotateOperation() ;

constexpr ::GlobalNamespace::InlineStyleAccess_InlineRule const& __cordl_internal_get_m_InlineRule() const;

constexpr ::GlobalNamespace::InlineStyleAccess_InlineRule& __cordl_internal_get_m_InlineRule() ;

constexpr ::UnityEngine::UIElements::StyleScale const& __cordl_internal_get_m_InlineScale() const;

constexpr ::UnityEngine::UIElements::StyleScale& __cordl_internal_get_m_InlineScale() ;

constexpr ::UnityEngine::UIElements::StyleTextAutoSize const& __cordl_internal_get_m_InlineTextAutoSize() const;

constexpr ::UnityEngine::UIElements::StyleTextAutoSize& __cordl_internal_get_m_InlineTextAutoSize() ;

constexpr ::UnityEngine::UIElements::StyleTextShadow const& __cordl_internal_get_m_InlineTextShadow() const;

constexpr ::UnityEngine::UIElements::StyleTextShadow& __cordl_internal_get_m_InlineTextShadow() ;

constexpr ::UnityEngine::UIElements::StyleTransformOrigin const& __cordl_internal_get_m_InlineTransformOrigin() const;

constexpr ::UnityEngine::UIElements::StyleTransformOrigin& __cordl_internal_get_m_InlineTransformOrigin() ;

constexpr ::UnityEngine::UIElements::StyleTranslate const& __cordl_internal_get_m_InlineTranslateOperation() const;

constexpr ::UnityEngine::UIElements::StyleTranslate& __cordl_internal_get_m_InlineTranslateOperation() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* const& __cordl_internal_get_m_ValuesManaged() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*& __cordl_internal_get_m_ValuesManaged() ;

constexpr void __cordl_internal_set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_HasInlineBackgroundSize(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineCursor(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineRotate(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineScale(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineTextAutoSize(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineTextShadow(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineTransformOrigin(bool  value) ;

constexpr void __cordl_internal_set_m_HasInlineTranslate(bool  value) ;

constexpr void __cordl_internal_set_m_InlineBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize  value) ;

constexpr void __cordl_internal_set_m_InlineCursor(::UnityEngine::UIElements::StyleCursor  value) ;

constexpr void __cordl_internal_set_m_InlineRotateOperation(::UnityEngine::UIElements::StyleRotate  value) ;

constexpr void __cordl_internal_set_m_InlineRule(::GlobalNamespace::InlineStyleAccess_InlineRule  value) ;

constexpr void __cordl_internal_set_m_InlineScale(::UnityEngine::UIElements::StyleScale  value) ;

constexpr void __cordl_internal_set_m_InlineTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize  value) ;

constexpr void __cordl_internal_set_m_InlineTextShadow(::UnityEngine::UIElements::StyleTextShadow  value) ;

constexpr void __cordl_internal_set_m_InlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin  value) ;

constexpr void __cordl_internal_set_m_InlineTranslateOperation(::UnityEngine::UIElements::StyleTranslate  value) ;

constexpr void __cordl_internal_set_m_ValuesManaged(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*  value) ;

/// @brief Method .ctor, addr 0xb74ce7c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  ve) ;

static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* getStaticF_s_StylePropertyReader() ;

/// [CompilerGenerated]
/// @brief Method get_ve, addr 0xb74ce6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_ve() ;

/// @brief Convert to "::UnityEngine::UIElements::IStyle"
constexpr ::UnityEngine::UIElements::IStyle* i___UnityEngine__UIElements__IStyle() noexcept;

static inline void setStaticF_s_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ve, addr 0xb74ce74, size 0x8, virtual false, abstract: false, final false
inline void set_ve(::UnityEngine::UIElements::VisualElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccess(InlineStyleAccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccess(InlineStyleAccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7919};

/// @brief Field m_ValuesManaged, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*  ___m_ValuesManaged;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <ve>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ____ve_k__BackingField;

/// @brief Field m_HasInlineCursor, offset: 0x28, size: 0x1, def value: None
 bool  ___m_HasInlineCursor;

/// @brief Field m_InlineCursor, offset: 0x30, size: 0x20, def value: None
 ::UnityEngine::UIElements::StyleCursor  ___m_InlineCursor;

/// @brief Field m_HasInlineTextShadow, offset: 0x50, size: 0x1, def value: None
 bool  ___m_HasInlineTextShadow;

/// @brief Field m_InlineTextShadow, offset: 0x54, size: 0x20, def value: None
 ::UnityEngine::UIElements::StyleTextShadow  ___m_InlineTextShadow;

/// @brief Field m_HasInlineTextAutoSize, offset: 0x74, size: 0x1, def value: None
 bool  ___m_HasInlineTextAutoSize;

/// @brief Field m_InlineTextAutoSize, offset: 0x78, size: 0x18, def value: None
 ::UnityEngine::UIElements::StyleTextAutoSize  ___m_InlineTextAutoSize;

/// @brief Field m_HasInlineTransformOrigin, offset: 0x90, size: 0x1, def value: None
 bool  ___m_HasInlineTransformOrigin;

/// @brief Field m_InlineTransformOrigin, offset: 0x94, size: 0x18, def value: None
 ::UnityEngine::UIElements::StyleTransformOrigin  ___m_InlineTransformOrigin;

/// @brief Field m_HasInlineTranslate, offset: 0xac, size: 0x1, def value: None
 bool  ___m_HasInlineTranslate;

/// @brief Field m_InlineTranslateOperation, offset: 0xb0, size: 0x1c, def value: None
 ::UnityEngine::UIElements::StyleTranslate  ___m_InlineTranslateOperation;

/// @brief Field m_HasInlineRotate, offset: 0xcc, size: 0x1, def value: None
 bool  ___m_HasInlineRotate;

/// @brief Field m_InlineRotateOperation, offset: 0xd0, size: 0x1c, def value: None
 ::UnityEngine::UIElements::StyleRotate  ___m_InlineRotateOperation;

/// @brief Field m_HasInlineScale, offset: 0xec, size: 0x1, def value: None
 bool  ___m_HasInlineScale;

/// @brief Field m_InlineScale, offset: 0xf0, size: 0x14, def value: None
 ::UnityEngine::UIElements::StyleScale  ___m_InlineScale;

/// @brief Field m_HasInlineBackgroundSize, offset: 0x104, size: 0x1, def value: None
 bool  ___m_HasInlineBackgroundSize;

/// @brief Field m_InlineBackgroundSize, offset: 0x108, size: 0x18, def value: None
 ::UnityEngine::UIElements::StyleBackgroundSize  ___m_InlineBackgroundSize;

/// @brief Field m_InlineRule, offset: 0x120, size: 0x18, def value: None
 ::GlobalNamespace::InlineStyleAccess_InlineRule  ___m_InlineRule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_ValuesManaged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ____ve_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineCursor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineCursor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTextShadow) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTextShadow) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTextAutoSize) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTextAutoSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTransformOrigin) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTransformOrigin) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTranslate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTranslateOperation) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineRotate) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineRotateOperation) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineScale) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineScale) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineBackgroundSize) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineBackgroundSize) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineRule) == 0x120, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccess) == 0x138, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
