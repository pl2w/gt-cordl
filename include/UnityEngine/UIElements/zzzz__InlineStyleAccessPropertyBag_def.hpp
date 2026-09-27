#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccessPropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Align_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__DisplayStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__EditorTextRenderingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowClipBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__Overflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliceType_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleColor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleEnum_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFloat_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFont_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleInt_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleLength_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextAutoSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextAutoSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/UIElements/zzzz__Wrap_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InlineStyleAccessPropertyBag)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Properties {
template<typename TContainer>
class INamedProperties_1;
}
namespace Unity::Properties {
template<typename TContainer>
class IProperty_1;
}
namespace Unity::Properties {
template<typename TContainer>
struct PropertyCollection_1;
}
namespace Unity::Properties {
template<typename TSource,typename TDestination>
class TypeConverter_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::UIElements {
struct Align;
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
class InlineStyleAccessPropertyBag_AlignContentProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_AlignItemsProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_AlignSelfProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundImageProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundPositionXProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundPositionYProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderLeftColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderLeftWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderRightColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderRightWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_ColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_CursorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_DisplayProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexBasisProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexDirectionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexGrowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexShrinkProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexWrapProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FontSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_HeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleCursorProperty;
}
namespace UnityEngine::UIElements {
template<typename TValue>
class InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleFloatProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleFontProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleIntProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleLengthProperty;
}
namespace UnityEngine::UIElements {
template<typename T>
class InlineStyleAccessPropertyBag_InlineStyleListProperty_1;
}
namespace UnityEngine::UIElements {
template<typename TStyleValue,typename TValue>
class InlineStyleAccessPropertyBag_InlineStyleProperty_2;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleRotateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleScaleProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTranslateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_JustifyContentProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_LeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_LetterSpacingProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginBottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginLeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginRightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginTopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MaxHeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MaxWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MinHeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MinWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_OpacityProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_OverflowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingBottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingLeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingRightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingTopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PositionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_RightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_RotateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_ScaleProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TextOverflowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TextShadowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransformOriginProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionDelayProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionDurationProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionPropertyProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TranslateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityFontProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceBottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceLeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceRightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceScaleProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceTopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceTypeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextAlignProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextGeneratorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_VisibilityProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_WhiteSpaceProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_WidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_WordSpacingProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccess;
}
namespace UnityEngine::UIElements {
class InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleColorProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
template<typename TStyleValue,typename TValue>
class InlineStyleProperty_2_InlineStyleAccessPropertyBag___c;
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
struct StyleKeyword;
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
struct StyleScale;
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
class VectorImage;
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
struct Color32;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGeneratorType;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_AlignContentProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_AlignItemsProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_AlignSelfProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundImageProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundPositionXProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundPositionYProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderBottomWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderLeftColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderLeftWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderRightColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderRightWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BorderTopWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_BottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_ColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_CursorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_DisplayProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexBasisProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexDirectionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexGrowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexShrinkProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FlexWrapProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_FontSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_HeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleCursorProperty;
}
namespace UnityEngine::UIElements {
template<typename TValue>
class InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleFloatProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleFontProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleIntProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleLengthProperty;
}
namespace UnityEngine::UIElements {
template<typename T>
class InlineStyleAccessPropertyBag_InlineStyleListProperty_1;
}
namespace UnityEngine::UIElements {
template<typename TStyleValue,typename TValue>
class InlineStyleAccessPropertyBag_InlineStyleProperty_2;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleRotateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleScaleProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_InlineStyleTranslateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_JustifyContentProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_LeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_LetterSpacingProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginBottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginLeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginRightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MarginTopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MaxHeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MaxWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MinHeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_MinWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_OpacityProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_OverflowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingBottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingLeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingRightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PaddingTopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_PositionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_RightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_RotateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_ScaleProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TextOverflowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TextShadowProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransformOriginProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionDelayProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionDurationProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionPropertyProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_TranslateProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityFontProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceBottomProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceLeftProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceRightProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceScaleProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceTopProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnitySliceTypeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextAlignProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextGeneratorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_VisibilityProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_WhiteSpaceProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_WidthProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleAccessPropertyBag_WordSpacingProperty;
}
namespace UnityEngine::UIElements {
class InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleColorProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
class InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c;
}
namespace UnityEngine::UIElements {
template<typename TStyleValue,typename TValue>
class InlineStyleProperty_2_InlineStyleAccessPropertyBag___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignContentProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignItemsProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignSelfProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundImageProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionXProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionYProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundRepeatProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_CursorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_DisplayProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexBasisProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexDirectionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexGrowProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexShrinkProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexWrapProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FontSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_HeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleCursorProperty*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleRotateProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleScaleProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTranslateProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_JustifyContentProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LetterSpacingProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginBottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginLeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginRightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginTopProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxHeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinHeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OpacityProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OverflowProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingBottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingLeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingRightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingTopProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PositionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RotateProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ScaleProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextOverflowProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextShadowProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TopProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransformOriginProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDelayProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDurationProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionPropertyProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TranslateProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontDefinitionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceBottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceLeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceRightProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceScaleProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTopProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTypeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAlignProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextGeneratorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_VisibilityProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WhiteSpaceProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WordSpacingProperty*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c*);
MARK_REF_T(::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignContentProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/AlignContentProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignItemsProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/AlignItemsProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignSelfProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/AlignSelfProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BackgroundColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundImageProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BackgroundImageProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionXProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BackgroundPositionXProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionYProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BackgroundPositionYProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundRepeatProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BackgroundRepeatProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundSizeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BackgroundSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderBottomColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderBottomLeftRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderBottomRightRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderBottomWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderLeftColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderLeftWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderRightColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderRightWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderTopColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderTopLeftRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderTopRightRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BorderTopWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BottomProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/BottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/ColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_CursorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/CursorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_DisplayProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/DisplayProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexBasisProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/FlexBasisProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexDirectionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/FlexDirectionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexGrowProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/FlexGrowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexShrinkProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/FlexShrinkProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexWrapProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/FlexWrapProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FontSizeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/FontSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_HeightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/HeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleBackgroundPositionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleBackgroundProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleBackgroundRepeatProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleBackgroundSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleCursorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleCursorProperty");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleEnumProperty`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleFloatProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleFontDefinitionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleFontProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleIntProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleLengthProperty");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleListProperty`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleProperty`2");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleRotateProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleRotateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleScaleProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleScaleProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleTextAutoSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleTextShadowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleTransformOriginProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTranslateProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleTranslateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_JustifyContentProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/JustifyContentProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LeftProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/LeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LetterSpacingProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/LetterSpacingProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginBottomProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MarginBottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginLeftProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MarginLeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginRightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MarginRightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginTopProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MarginTopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxHeightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MaxHeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MaxWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinHeightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MinHeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/MinWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OpacityProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/OpacityProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OverflowProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/OverflowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingBottomProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/PaddingBottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingLeftProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/PaddingLeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingRightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/PaddingRightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingTopProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/PaddingTopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PositionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/PositionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/RightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RotateProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/RotateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ScaleProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/ScaleProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextOverflowProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TextOverflowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextShadowProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TextShadowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TopProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransformOriginProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TransformOriginProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDelayProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TransitionDelayProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDurationProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TransitionDurationProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionPropertyProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TransitionPropertyProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TransitionTimingFunctionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TranslateProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/TranslateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityBackgroundImageTintColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityEditorTextRenderingModeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontDefinitionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityFontDefinitionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityFontProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityFontStyleAndWeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityOverflowClipBoxProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityParagraphSpacingProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceBottomProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnitySliceBottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceLeftProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnitySliceLeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceRightProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnitySliceRightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceScaleProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnitySliceScaleProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTopProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnitySliceTopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTypeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnitySliceTypeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAlignProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityTextAlignProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityTextAutoSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextGeneratorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityTextGeneratorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityTextOutlineColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityTextOutlineWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/UnityTextOverflowPositionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_VisibilityProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/VisibilityProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WhiteSpaceProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/WhiteSpaceProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WidthProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/WidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WordSpacingProperty*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/WordSpacingProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleBackgroundProperty/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleColorProperty/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleFloatProperty/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleFontDefinitionProperty/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c*, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleLengthProperty/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c, "UnityEngine.UIElements", "InlineStyleAccessPropertyBag/InlineStyleProperty`2/<>c");
// Dependencies Unity.Properties.PropertyBag`1<TContainer>, UnityEngine.UIElements.IStyleValue`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag
class CORDL_TYPE InlineStyleAccessPropertyBag : public ::Unity::Properties::PropertyBag_1<::UnityEngine::UIElements::InlineStyleAccess*> {
public:
// Declarations
using AlignContentProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignContentProperty;

using AlignItemsProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignItemsProperty;

using AlignSelfProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignSelfProperty;

using BackgroundColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundColorProperty;

using BackgroundImageProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundImageProperty;

using BackgroundPositionXProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionXProperty;

using BackgroundPositionYProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionYProperty;

using BackgroundRepeatProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundRepeatProperty;

using BackgroundSizeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundSizeProperty;

using BorderBottomColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomColorProperty;

using BorderBottomLeftRadiusProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty;

using BorderBottomRightRadiusProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty;

using BorderBottomWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomWidthProperty;

using BorderLeftColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftColorProperty;

using BorderLeftWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftWidthProperty;

using BorderRightColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightColorProperty;

using BorderRightWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightWidthProperty;

using BorderTopColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopColorProperty;

using BorderTopLeftRadiusProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty;

using BorderTopRightRadiusProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty;

using BorderTopWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopWidthProperty;

using BottomProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BottomProperty;

using ColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ColorProperty;

using CursorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_CursorProperty;

using DisplayProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_DisplayProperty;

using FlexBasisProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexBasisProperty;

using FlexDirectionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexDirectionProperty;

using FlexGrowProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexGrowProperty;

using FlexShrinkProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexShrinkProperty;

using FlexWrapProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexWrapProperty;

using FontSizeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FontSizeProperty;

using HeightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_HeightProperty;

using InlineStyleBackgroundPositionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty;

using InlineStyleBackgroundProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty;

using InlineStyleBackgroundRepeatProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty;

using InlineStyleBackgroundSizeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty;

using InlineStyleColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty;

using InlineStyleCursorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleCursorProperty;

template<typename TValue>
using InlineStyleEnumProperty_1 = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<TValue>;

using InlineStyleFloatProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty;

using InlineStyleFontDefinitionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty;

using InlineStyleFontProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontProperty;

using InlineStyleIntProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty;

using InlineStyleLengthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty;

template<typename T>
using InlineStyleListProperty_1 = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1<T>;

template<typename TStyleValue,typename TValue>
using InlineStyleProperty_2 = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<TStyleValue, TValue>;

using InlineStyleRotateProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleRotateProperty;

using InlineStyleScaleProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleScaleProperty;

using InlineStyleTextAutoSizeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty;

using InlineStyleTextShadowProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty;

using InlineStyleTransformOriginProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty;

using InlineStyleTranslateProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTranslateProperty;

using JustifyContentProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_JustifyContentProperty;

using LeftProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LeftProperty;

using LetterSpacingProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LetterSpacingProperty;

using MarginBottomProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginBottomProperty;

using MarginLeftProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginLeftProperty;

using MarginRightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginRightProperty;

using MarginTopProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginTopProperty;

using MaxHeightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxHeightProperty;

using MaxWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxWidthProperty;

using MinHeightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinHeightProperty;

using MinWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinWidthProperty;

using OpacityProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OpacityProperty;

using OverflowProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OverflowProperty;

using PaddingBottomProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingBottomProperty;

using PaddingLeftProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingLeftProperty;

using PaddingRightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingRightProperty;

using PaddingTopProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingTopProperty;

using PositionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PositionProperty;

using RightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RightProperty;

using RotateProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RotateProperty;

using ScaleProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ScaleProperty;

using TextOverflowProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextOverflowProperty;

using TextShadowProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextShadowProperty;

using TopProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TopProperty;

using TransformOriginProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransformOriginProperty;

using TransitionDelayProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDelayProperty;

using TransitionDurationProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDurationProperty;

using TransitionPropertyProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionPropertyProperty;

using TransitionTimingFunctionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty;

using TranslateProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TranslateProperty;

using UnityBackgroundImageTintColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty;

using UnityEditorTextRenderingModeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty;

using UnityFontDefinitionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontDefinitionProperty;

using UnityFontProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontProperty;

using UnityFontStyleAndWeightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty;

using UnityOverflowClipBoxProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty;

using UnityParagraphSpacingProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty;

using UnitySliceBottomProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceBottomProperty;

using UnitySliceLeftProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceLeftProperty;

using UnitySliceRightProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceRightProperty;

using UnitySliceScaleProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceScaleProperty;

using UnitySliceTopProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTopProperty;

using UnitySliceTypeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTypeProperty;

using UnityTextAlignProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAlignProperty;

using UnityTextAutoSizeProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty;

using UnityTextGeneratorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextGeneratorProperty;

using UnityTextOutlineColorProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty;

using UnityTextOutlineWidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty;

using UnityTextOverflowPositionProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty;

using VisibilityProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_VisibilityProperty;

using WhiteSpaceProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WhiteSpaceProperty;

using WidthProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WidthProperty;

using WordSpacingProperty = ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WordSpacingProperty;

/// @brief Field m_PropertiesHash, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertiesHash, put=__cordl_internal_set_m_PropertiesHash)) ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*  m_PropertiesHash;

/// @brief Field m_PropertiesList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertiesList, put=__cordl_internal_set_m_PropertiesList)) ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*  m_PropertiesList;

/// @brief Convert operator to "::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::InlineStyleAccess*>"
constexpr operator  ::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::InlineStyleAccess*>*() noexcept;

/// @brief Method AddProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStyleValue,typename TValue>
requires(::cordl_internals::type_constraint<TStyleValue, ::UnityEngine::UIElements::IStyleValue_1<TValue>*> && ::cordl_internals::default_constructor_constraint<TStyleValue>)
inline void AddProperty(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<TStyleValue,TValue>*  property) ;

/// @brief Method GetProperties, addr 0xb7529fc, size 0x64, virtual true, abstract: false, final false
inline ::Unity::Properties::PropertyCollection_1<::UnityEngine::UIElements::InlineStyleAccess*> GetProperties() ;

/// @brief Method GetProperties, addr 0xb752a60, size 0x64, virtual true, abstract: false, final false
inline ::Unity::Properties::PropertyCollection_1<::UnityEngine::UIElements::InlineStyleAccess*> GetProperties(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag* New_ctor() ;

/// @brief Method TryGetProperty, addr 0xb752ac4, size 0x68, virtual true, abstract: false, final true
inline bool TryGetProperty(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::StringW  name, ::by_ref<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>  property) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>* const& __cordl_internal_get_m_PropertiesHash() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*& __cordl_internal_get_m_PropertiesHash() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>* const& __cordl_internal_get_m_PropertiesList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*& __cordl_internal_get_m_PropertiesList() ;

constexpr void __cordl_internal_set_m_PropertiesHash(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*  value) ;

constexpr void __cordl_internal_set_m_PropertiesList(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*  value) ;

/// @brief Method .ctor, addr 0xb750b40, size 0x1654, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::InlineStyleAccess*>"
constexpr ::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::InlineStyleAccess*>* i___Unity__Properties__INamedProperties_1___UnityEngine__UIElements__InlineStyleAccess__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag(InlineStyleAccessPropertyBag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag(InlineStyleAccessPropertyBag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8031};

/// @brief Field m_PropertiesList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*  ___m_PropertiesList;

/// @brief Field m_PropertiesHash, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<::UnityEngine::UIElements::InlineStyleAccess*>*>*  ___m_PropertiesHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag, ___m_PropertiesList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag, ___m_PropertiesHash) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleFontDefinitionProperty/<>c
class CORDL_TYPE InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Font>,::UnityEngine::UIElements::StyleFontDefinition>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::TextCore::Text::FontAsset>,::UnityEngine::UIElements::StyleFontDefinition>*  __9__0_1;

/// @brief Field <>9__0_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_2, put=setStaticF___9__0_2)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityW<::UnityEngine::Font>>*  __9__0_2;

/// @brief Field <>9__0_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_3, put=setStaticF___9__0_3)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*  __9__0_3;

static inline ::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0xb75e79c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFontDefinition __ctor_b__0_0(::by_ref<::UnityEngine::Font*>  v) ;

/// @brief Method <.ctor>b__0_1, addr 0xb75e7b4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFontDefinition __ctor_b__0_1(::by_ref<::UnityEngine::TextCore::Text::FontAsset*>  v) ;

/// @brief Method <.ctor>b__0_2, addr 0xb75e7cc, size 0x34, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Font> __ctor_b__0_2(::by_ref<::UnityEngine::UIElements::StyleFontDefinition>  sv) ;

/// @brief Method <.ctor>b__0_3, addr 0xb75e800, size 0x34, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> __ctor_b__0_3(::by_ref<::UnityEngine::UIElements::StyleFontDefinition>  sv) ;

/// @brief Method .ctor, addr 0xb75e794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Font>,::UnityEngine::UIElements::StyleFontDefinition>* getStaticF___9__0_0() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::TextCore::Text::FontAsset>,::UnityEngine::UIElements::StyleFontDefinition>* getStaticF___9__0_1() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityW<::UnityEngine::Font>>* getStaticF___9__0_2() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF___9__0_3() ;

static inline void setStaticF___9(::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c*  value) ;

static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Font>,::UnityEngine::UIElements::StyleFontDefinition>*  value) ;

static inline void setStaticF___9__0_1(::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::TextCore::Text::FontAsset>,::UnityEngine::UIElements::StyleFontDefinition>*  value) ;

static inline void setStaticF___9__0_2(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityW<::UnityEngine::Font>>*  value) ;

static inline void setStaticF___9__0_3(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c(InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c(InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8018};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleFloatProperty/<>c
class CORDL_TYPE InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<int32_t,::UnityEngine::UIElements::StyleFloat>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFloat,int32_t>*  __9__0_1;

static inline ::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0xb75e318, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat __ctor_b__0_0(::by_ref<int32_t>  v) ;

/// @brief Method <.ctor>b__0_1, addr 0xb75e33c, size 0x30, virtual false, abstract: false, final false
inline int32_t __ctor_b__0_1(::by_ref<::UnityEngine::UIElements::StyleFloat>  sv) ;

/// @brief Method .ctor, addr 0xb75e310, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,::UnityEngine::UIElements::StyleFloat>* getStaticF___9__0_0() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFloat,int32_t>* getStaticF___9__0_1() ;

static inline void setStaticF___9(::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c*  value) ;

static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<int32_t,::UnityEngine::UIElements::StyleFloat>*  value) ;

static inline void setStaticF___9__0_1(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleFloat,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c(InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c(InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleLengthProperty/<>c
class CORDL_TYPE InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<float_t,::UnityEngine::UIElements::StyleLength>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::Unity::Properties::TypeConverter_2<int32_t,::UnityEngine::UIElements::StyleLength>*  __9__0_1;

/// @brief Field <>9__0_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_2, put=setStaticF___9__0_2)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleLength,float_t>*  __9__0_2;

/// @brief Field <>9__0_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_3, put=setStaticF___9__0_3)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleLength,int32_t>*  __9__0_3;

static inline ::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0xb75dff4, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength __ctor_b__0_0(::by_ref<float_t>  v) ;

/// @brief Method <.ctor>b__0_1, addr 0xb75e028, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength __ctor_b__0_1(::by_ref<int32_t>  v) ;

/// @brief Method <.ctor>b__0_2, addr 0xb75e060, size 0x1c, virtual false, abstract: false, final false
inline float_t __ctor_b__0_2(::by_ref<::UnityEngine::UIElements::StyleLength>  sv) ;

/// @brief Method <.ctor>b__0_3, addr 0xb75e07c, size 0x34, virtual false, abstract: false, final false
inline int32_t __ctor_b__0_3(::by_ref<::UnityEngine::UIElements::StyleLength>  sv) ;

/// @brief Method .ctor, addr 0xb75dfec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,::UnityEngine::UIElements::StyleLength>* getStaticF___9__0_0() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,::UnityEngine::UIElements::StyleLength>* getStaticF___9__0_1() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleLength,float_t>* getStaticF___9__0_2() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleLength,int32_t>* getStaticF___9__0_3() ;

static inline void setStaticF___9(::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c*  value) ;

static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<float_t,::UnityEngine::UIElements::StyleLength>*  value) ;

static inline void setStaticF___9__0_1(::Unity::Properties::TypeConverter_2<int32_t,::UnityEngine::UIElements::StyleLength>*  value) ;

static inline void setStaticF___9__0_2(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleLength,float_t>*  value) ;

static inline void setStaticF___9__0_3(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleLength,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c(InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c(InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleBackgroundProperty/<>c
class CORDL_TYPE InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Texture2D>,::UnityEngine::UIElements::StyleBackground>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Sprite>,::UnityEngine::UIElements::StyleBackground>*  __9__0_1;

/// @brief Field <>9__0_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_2, put=setStaticF___9__0_2)) ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::UIElements::VectorImage>,::UnityEngine::UIElements::StyleBackground>*  __9__0_2;

/// @brief Field <>9__0_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_3, put=setStaticF___9__0_3)) ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::RenderTexture>,::UnityEngine::UIElements::StyleBackground>*  __9__0_3;

/// @brief Field <>9__0_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_4, put=setStaticF___9__0_4)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::Texture2D>>*  __9__0_4;

/// @brief Field <>9__0_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_5, put=setStaticF___9__0_5)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::Sprite>>*  __9__0_5;

/// @brief Field <>9__0_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_6, put=setStaticF___9__0_6)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::RenderTexture>>*  __9__0_6;

/// @brief Field <>9__0_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_7, put=setStaticF___9__0_7)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::UIElements::VectorImage>>*  __9__0_7;

static inline ::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0xb75da6c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackground __ctor_b__0_0(::by_ref<::UnityEngine::Texture2D*>  v) ;

/// @brief Method <.ctor>b__0_1, addr 0xb75da88, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackground __ctor_b__0_1(::by_ref<::UnityEngine::Sprite*>  v) ;

/// @brief Method <.ctor>b__0_2, addr 0xb75daa4, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackground __ctor_b__0_2(::by_ref<::UnityEngine::UIElements::VectorImage*>  v) ;

/// @brief Method <.ctor>b__0_3, addr 0xb75dac0, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackground __ctor_b__0_3(::by_ref<::UnityEngine::RenderTexture*>  v) ;

/// @brief Method <.ctor>b__0_4, addr 0xb75db0c, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> __ctor_b__0_4(::by_ref<::UnityEngine::UIElements::StyleBackground>  sv) ;

/// @brief Method <.ctor>b__0_5, addr 0xb75db4c, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> __ctor_b__0_5(::by_ref<::UnityEngine::UIElements::StyleBackground>  sv) ;

/// @brief Method <.ctor>b__0_6, addr 0xb75db8c, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> __ctor_b__0_6(::by_ref<::UnityEngine::UIElements::StyleBackground>  sv) ;

/// @brief Method <.ctor>b__0_7, addr 0xb75dbcc, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::VectorImage> __ctor_b__0_7(::by_ref<::UnityEngine::UIElements::StyleBackground>  sv) ;

/// @brief Method .ctor, addr 0xb75da64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Texture2D>,::UnityEngine::UIElements::StyleBackground>* getStaticF___9__0_0() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Sprite>,::UnityEngine::UIElements::StyleBackground>* getStaticF___9__0_1() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::UIElements::VectorImage>,::UnityEngine::UIElements::StyleBackground>* getStaticF___9__0_2() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::RenderTexture>,::UnityEngine::UIElements::StyleBackground>* getStaticF___9__0_3() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::Texture2D>>* getStaticF___9__0_4() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::Sprite>>* getStaticF___9__0_5() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::RenderTexture>>* getStaticF___9__0_6() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::UIElements::VectorImage>>* getStaticF___9__0_7() ;

static inline void setStaticF___9(::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c*  value) ;

static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Texture2D>,::UnityEngine::UIElements::StyleBackground>*  value) ;

static inline void setStaticF___9__0_1(::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::Sprite>,::UnityEngine::UIElements::StyleBackground>*  value) ;

static inline void setStaticF___9__0_2(::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::UIElements::VectorImage>,::UnityEngine::UIElements::StyleBackground>*  value) ;

static inline void setStaticF___9__0_3(::Unity::Properties::TypeConverter_2<::UnityW<::UnityEngine::RenderTexture>,::UnityEngine::UIElements::StyleBackground>*  value) ;

static inline void setStaticF___9__0_4(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::Texture2D>>*  value) ;

static inline void setStaticF___9__0_5(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::Sprite>>*  value) ;

static inline void setStaticF___9__0_6(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

static inline void setStaticF___9__0_7(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleBackground,::UnityW<::UnityEngine::UIElements::VectorImage>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c(InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c(InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleColorProperty/<>c
class CORDL_TYPE InlineStyleColorProperty_InlineStyleAccessPropertyBag___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<::UnityEngine::Color32,::UnityEngine::UIElements::StyleColor>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleColor,::UnityEngine::Color32>*  __9__0_1;

static inline ::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0xb75d314, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor __ctor_b__0_0(::by_ref<::UnityEngine::Color32>  v) ;

/// @brief Method <.ctor>b__0_1, addr 0xb75d368, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 __ctor_b__0_1(::by_ref<::UnityEngine::UIElements::StyleColor>  sv) ;

/// @brief Method .ctor, addr 0xb75d30c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::Color32,::UnityEngine::UIElements::StyleColor>* getStaticF___9__0_0() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleColor,::UnityEngine::Color32>* getStaticF___9__0_1() ;

static inline void setStaticF___9(::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c*  value) ;

static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<::UnityEngine::Color32,::UnityEngine::UIElements::StyleColor>*  value) ;

static inline void setStaticF___9__0_1(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleColor,::UnityEngine::Color32>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleColorProperty_InlineStyleAccessPropertyBag___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleColorProperty_InlineStyleAccessPropertyBag___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleColorProperty_InlineStyleAccessPropertyBag___c(InlineStyleColorProperty_InlineStyleAccessPropertyBag___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleColorProperty_InlineStyleAccessPropertyBag___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleColorProperty_InlineStyleAccessPropertyBag___c(InlineStyleColorProperty_InlineStyleAccessPropertyBag___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template<typename TStyleValue,typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleProperty`2/<>c<TStyleValue,TValue>
class CORDL_TYPE InlineStyleProperty_2_InlineStyleAccessPropertyBag___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c<TStyleValue,TValue>*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<TStyleValue,TValue>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::Unity::Properties::TypeConverter_2<TValue,TStyleValue>*  __9__0_1;

/// @brief Field <>9__0_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_2, put=setStaticF___9__0_2)) ::Unity::Properties::TypeConverter_2<TStyleValue,::UnityEngine::UIElements::StyleKeyword>*  __9__0_2;

/// @brief Field <>9__0_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_3, put=setStaticF___9__0_3)) ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleKeyword,TStyleValue>*  __9__0_3;

static inline ::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c<TStyleValue,TValue>* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue __ctor_b__0_0(::by_ref<TStyleValue>  sv) ;

/// @brief Method <.ctor>b__0_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TStyleValue __ctor_b__0_1(::by_ref<TValue>  v) ;

/// @brief Method <.ctor>b__0_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleKeyword __ctor_b__0_2(::by_ref<TStyleValue>  sv) ;

/// @brief Method <.ctor>b__0_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TStyleValue __ctor_b__0_3(::by_ref<::UnityEngine::UIElements::StyleKeyword>  kw) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c<TStyleValue,TValue>* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<TStyleValue,TValue>* getStaticF___9__0_0() ;

static inline ::Unity::Properties::TypeConverter_2<TValue,TStyleValue>* getStaticF___9__0_1() ;

static inline ::Unity::Properties::TypeConverter_2<TStyleValue,::UnityEngine::UIElements::StyleKeyword>* getStaticF___9__0_2() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleKeyword,TStyleValue>* getStaticF___9__0_3() ;

static inline void setStaticF___9(::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c<TStyleValue,TValue>*  value) ;

static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<TStyleValue,TValue>*  value) ;

static inline void setStaticF___9__0_1(::Unity::Properties::TypeConverter_2<TValue,TStyleValue>*  value) ;

static inline void setStaticF___9__0_2(::Unity::Properties::TypeConverter_2<TStyleValue,::UnityEngine::UIElements::StyleKeyword>*  value) ;

static inline void setStaticF___9__0_3(::Unity::Properties::TypeConverter_2<::UnityEngine::UIElements::StyleKeyword,TStyleValue>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleProperty_2_InlineStyleAccessPropertyBag___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleProperty_2_InlineStyleAccessPropertyBag___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleProperty_2_InlineStyleAccessPropertyBag___c(InlineStyleProperty_2_InlineStyleAccessPropertyBag___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleProperty_2_InlineStyleAccessPropertyBag___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleProperty_2_InlineStyleAccessPropertyBag___c(InlineStyleProperty_2_InlineStyleAccessPropertyBag___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/WordSpacingProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_WordSpacingProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75cf44, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WordSpacingProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75cff0, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7529f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75cf3c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75cebc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75cefc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_WordSpacingProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_WordSpacingProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_WordSpacingProperty(InlineStyleAccessPropertyBag_WordSpacingProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_WordSpacingProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_WordSpacingProperty(InlineStyleAccessPropertyBag_WordSpacingProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WordSpacingProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/WidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_WidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75cd54, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75ce00, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7529ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75cd4c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75cccc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75cd0c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_WidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_WidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_WidthProperty(InlineStyleAccessPropertyBag_WidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_WidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_WidthProperty(InlineStyleAccessPropertyBag_WidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.WhiteSpace
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/WhiteSpaceProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_WhiteSpaceProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::WhiteSpace> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75cb7c, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WhiteSpaceProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75cc20, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>  value) ;

/// @brief Method .ctor, addr 0xb7529a4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75cb74, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75caf4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75cb34, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_WhiteSpaceProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_WhiteSpaceProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_WhiteSpaceProperty(InlineStyleAccessPropertyBag_WhiteSpaceProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_WhiteSpaceProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_WhiteSpaceProperty(InlineStyleAccessPropertyBag_WhiteSpaceProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_WhiteSpaceProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.Visibility
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/VisibilityProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_VisibilityProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Visibility> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75c9a4, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_VisibilityProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75ca48, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>  value) ;

/// @brief Method .ctor, addr 0xb75295c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75c99c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75c91c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75c95c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_VisibilityProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_VisibilityProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_VisibilityProperty(InlineStyleAccessPropertyBag_VisibilityProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_VisibilityProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_VisibilityProperty(InlineStyleAccessPropertyBag_VisibilityProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_VisibilityProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.TextOverflowPosition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityTextOverflowPositionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::TextOverflowPosition> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75c7cc, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75c870, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>  value) ;

/// @brief Method .ctor, addr 0xb752914, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75c7c4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75c744, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75c784, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty(InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty(InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityTextOutlineWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75c5f4, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75c698, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb75290c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75c5ec, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75c56c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75c5ac, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty(InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty(InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7999};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityTextOutlineColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75c3c8, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75c490, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb752904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75c3c0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75c340, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75c380, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty(InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty(InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.TextGeneratorType, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityTextGeneratorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityTextGeneratorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::TextGeneratorType> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75c1f0, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextGeneratorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75c294, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>  value) ;

/// @brief Method .ctor, addr 0xb7528bc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75c1e8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75c168, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75c1a8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityTextGeneratorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextGeneratorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityTextGeneratorProperty(InlineStyleAccessPropertyBag_UnityTextGeneratorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextGeneratorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityTextGeneratorProperty(InlineStyleAccessPropertyBag_UnityTextGeneratorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextGeneratorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleTextAutoSizeProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityTextAutoSizeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75bfc4, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleTextAutoSize GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75c08c, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleTextAutoSize  value) ;

/// @brief Method .ctor, addr 0xb7528b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75bfbc, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75bf3c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75bf7c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty(InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty(InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleTextAutoSize, UnityEngine.UIElements.TextAutoSize
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleTextAutoSizeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleTextAutoSize,::UnityEngine::UIElements::TextAutoSize> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e99c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty(InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty(InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextAutoSizeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.TextAnchor, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityTextAlignProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityTextAlignProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::TextAnchor> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75bdec, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAlignProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75be90, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>  value) ;

/// @brief Method .ctor, addr 0xb75286c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75bde4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75bd64, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75bda4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityTextAlignProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextAlignProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityTextAlignProperty(InlineStyleAccessPropertyBag_UnityTextAlignProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityTextAlignProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityTextAlignProperty(InlineStyleAccessPropertyBag_UnityTextAlignProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityTextAlignProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.SliceType
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnitySliceTypeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnitySliceTypeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::SliceType> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75bc14, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTypeProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75bcb8, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>  value) ;

/// @brief Method .ctor, addr 0xb752824, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75bc0c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75bb8c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75bbcc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnitySliceTypeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceTypeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnitySliceTypeProperty(InlineStyleAccessPropertyBag_UnitySliceTypeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceTypeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnitySliceTypeProperty(InlineStyleAccessPropertyBag_UnitySliceTypeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTypeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnitySliceTopProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnitySliceTopProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75ba3c, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleInt GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTopProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75bae0, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method .ctor, addr 0xb75281c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75ba34, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75b9b4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75b9f4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnitySliceTopProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceTopProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnitySliceTopProperty(InlineStyleAccessPropertyBag_UnitySliceTopProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceTopProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnitySliceTopProperty(InlineStyleAccessPropertyBag_UnitySliceTopProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceTopProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnitySliceScaleProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnitySliceScaleProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75b864, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceScaleProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75b908, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb752814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75b85c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75b7dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75b81c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnitySliceScaleProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceScaleProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnitySliceScaleProperty(InlineStyleAccessPropertyBag_UnitySliceScaleProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceScaleProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnitySliceScaleProperty(InlineStyleAccessPropertyBag_UnitySliceScaleProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceScaleProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnitySliceRightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnitySliceRightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75b68c, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleInt GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceRightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75b730, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method .ctor, addr 0xb75280c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75b684, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75b604, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75b644, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnitySliceRightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceRightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnitySliceRightProperty(InlineStyleAccessPropertyBag_UnitySliceRightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceRightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnitySliceRightProperty(InlineStyleAccessPropertyBag_UnitySliceRightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceRightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnitySliceLeftProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnitySliceLeftProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75b4b4, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleInt GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceLeftProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75b558, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method .ctor, addr 0xb752804, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75b4ac, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75b42c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75b46c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnitySliceLeftProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceLeftProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnitySliceLeftProperty(InlineStyleAccessPropertyBag_UnitySliceLeftProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceLeftProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnitySliceLeftProperty(InlineStyleAccessPropertyBag_UnitySliceLeftProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceLeftProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnitySliceBottomProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnitySliceBottomProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75b2dc, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleInt GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceBottomProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75b380, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleInt  value) ;

/// @brief Method .ctor, addr 0xb7527fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75b2d4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75b254, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75b294, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnitySliceBottomProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceBottomProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnitySliceBottomProperty(InlineStyleAccessPropertyBag_UnitySliceBottomProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnitySliceBottomProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnitySliceBottomProperty(InlineStyleAccessPropertyBag_UnitySliceBottomProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnitySliceBottomProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleInt
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleIntProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleIntProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleInt,int32_t> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e834, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleIntProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleIntProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleIntProperty(InlineStyleAccessPropertyBag_InlineStyleIntProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleIntProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleIntProperty(InlineStyleAccessPropertyBag_InlineStyleIntProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleIntProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityParagraphSpacingProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75b0ec, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75b198, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7527f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75b0e4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75b064, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75b0a4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty(InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty(InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7988};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.OverflowClipBox
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityOverflowClipBoxProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::OverflowClipBox> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75af14, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75afb8, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>  value) ;

/// @brief Method .ctor, addr 0xb7527ac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75af0c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75ae8c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75aecc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty(InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty(InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7987};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.FontStyle, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityFontStyleAndWeightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::FontStyle> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75ad3c, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75ade0, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>  value) ;

/// @brief Method .ctor, addr 0xb752764, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75ad34, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75acb4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75acf4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty(InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty(InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFontDefinitionProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityFontDefinitionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityFontDefinitionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75ab10, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFontDefinition GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontDefinitionProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75abd8, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFontDefinition  value) ;

/// @brief Method .ctor, addr 0xb75275c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75ab08, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75aa88, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75aac8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityFontDefinitionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityFontDefinitionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityFontDefinitionProperty(InlineStyleAccessPropertyBag_UnityFontDefinitionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityFontDefinitionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityFontDefinitionProperty(InlineStyleAccessPropertyBag_UnityFontDefinitionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7985};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontDefinitionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FontDefinition, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleFontDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleFontDefinitionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleFontDefinition,::UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::InlineStyleFontDefinitionProperty_InlineStyleAccessPropertyBag___c;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e3b4, size 0x378, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty(InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty(InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8019};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFontProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityFontProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityFontProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75a928, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFont GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75a9cc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFont  value) ;

/// @brief Method .ctor, addr 0xb752754, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75a920, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75a8a0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75a8e0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityFontProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityFontProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityFontProperty(InlineStyleAccessPropertyBag_UnityFontProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityFontProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityFontProperty(InlineStyleAccessPropertyBag_UnityFontProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityFontProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleFont
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleFontProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleFontProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleFont,::UnityW<::UnityEngine::Font>> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e36c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleFontProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleFontProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleFontProperty(InlineStyleAccessPropertyBag_InlineStyleFontProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleFontProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleFontProperty(InlineStyleAccessPropertyBag_InlineStyleFontProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFontProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EditorTextRenderingMode, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityEditorTextRenderingModeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::EditorTextRenderingMode> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75a750, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75a7f4, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>  value) ;

/// @brief Method .ctor, addr 0xb75270c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75a748, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75a6c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75a708, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty(InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty(InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/UnityBackgroundImageTintColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75a524, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75a5ec, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb752704, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75a51c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75a49c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75a4dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty(InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty(InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleTranslateProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TranslateProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TranslateProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTranslateProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75a2f8, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleTranslate GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TranslateProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75a3c0, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleTranslate  value) ;

/// @brief Method .ctor, addr 0xb7526fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75a2f0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75a270, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75a2b0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TranslateProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TranslateProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TranslateProperty(InlineStyleAccessPropertyBag_TranslateProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TranslateProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TranslateProperty(InlineStyleAccessPropertyBag_TranslateProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TranslateProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleTranslate, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleTranslateProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleTranslateProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleTranslate,::UnityEngine::UIElements::Translate> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTranslateProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75ea2c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleTranslateProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTranslateProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleTranslateProperty(InlineStyleAccessPropertyBag_InlineStyleTranslateProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTranslateProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleTranslateProperty(InlineStyleAccessPropertyBag_InlineStyleTranslateProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTranslateProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EasingFunction, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleListProperty`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TransitionTimingFunctionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1<::UnityEngine::UIElements::EasingFunction> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75a110, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75a1b4, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>  value) ;

/// @brief Method .ctor, addr 0xb7526b4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75a108, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75a088, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75a0c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty(InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty(InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleListProperty`1<T>, UnityEngine.UIElements.StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TransitionPropertyProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TransitionPropertyProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1<::UnityEngine::UIElements::StylePropertyName> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb759f28, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionPropertyProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb759fcc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>  value) ;

/// @brief Method .ctor, addr 0xb75266c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759f20, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb759ea0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb759ee0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TransitionPropertyProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionPropertyProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TransitionPropertyProperty(InlineStyleAccessPropertyBag_TransitionPropertyProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionPropertyProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TransitionPropertyProperty(InlineStyleAccessPropertyBag_TransitionPropertyProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7979};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionPropertyProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleListProperty`1<T>, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TransitionDurationProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TransitionDurationProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1<::UnityEngine::UIElements::TimeValue> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb759d40, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDurationProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb759de4, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>  value) ;

/// @brief Method .ctor, addr 0xb752624, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759d38, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb759cb8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb759cf8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TransitionDurationProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionDurationProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TransitionDurationProperty(InlineStyleAccessPropertyBag_TransitionDurationProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionDurationProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TransitionDurationProperty(InlineStyleAccessPropertyBag_TransitionDurationProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDurationProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleListProperty`1<T>, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TransitionDelayProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TransitionDelayProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1<::UnityEngine::UIElements::TimeValue> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb759b58, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDelayProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb759bfc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>  value) ;

/// @brief Method .ctor, addr 0xb7525dc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759b50, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb759ad0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb759b10, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TransitionDelayProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionDelayProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TransitionDelayProperty(InlineStyleAccessPropertyBag_TransitionDelayProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransitionDelayProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TransitionDelayProperty(InlineStyleAccessPropertyBag_TransitionDelayProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransitionDelayProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleList`1<T>
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleListProperty`1<T>
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleListProperty_1 : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleList_1<T>,::System::Collections::Generic::List_1<T>*> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleListProperty_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleListProperty_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleListProperty_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleListProperty_1(InlineStyleAccessPropertyBag_InlineStyleListProperty_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleListProperty_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleListProperty_1(InlineStyleAccessPropertyBag_InlineStyleListProperty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleTransformOriginProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TransformOriginProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TransformOriginProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75992c, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleTransformOrigin GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransformOriginProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7599f4, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleTransformOrigin  value) ;

/// @brief Method .ctor, addr 0xb7525d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759924, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7598a4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7598e4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TransformOriginProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransformOriginProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TransformOriginProperty(InlineStyleAccessPropertyBag_TransformOriginProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TransformOriginProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TransformOriginProperty(InlineStyleAccessPropertyBag_TransformOriginProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7976};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TransformOriginProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleTransformOrigin, UnityEngine.UIElements.TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleTransformOriginProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleTransformOrigin,::UnityEngine::UIElements::TransformOrigin> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e9e4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty(InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty(InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTransformOriginProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TopProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TopProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75973c, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TopProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7597e8, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7525cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759734, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7596b4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7596f4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TopProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TopProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TopProperty(InlineStyleAccessPropertyBag_TopProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TopProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TopProperty(InlineStyleAccessPropertyBag_TopProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TopProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleTextShadowProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TextShadowProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TextShadowProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb759528, size 0xc0, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleTextShadow GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextShadowProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7595e8, size 0xcc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleTextShadow  value) ;

/// @brief Method .ctor, addr 0xb7525c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759520, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7594a0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7594e0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TextShadowProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TextShadowProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TextShadowProperty(InlineStyleAccessPropertyBag_TextShadowProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TextShadowProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TextShadowProperty(InlineStyleAccessPropertyBag_TextShadowProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextShadowProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleTextShadow, UnityEngine.UIElements.TextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleTextShadowProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleTextShadow,::UnityEngine::UIElements::TextShadow> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e954, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty(InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty(InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleTextShadowProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.TextOverflow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/TextOverflowProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_TextOverflowProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::TextOverflow> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb759350, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextOverflowProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7593f4, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>  value) ;

/// @brief Method .ctor, addr 0xb75257c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb759348, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7592c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb759308, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_TextOverflowProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TextOverflowProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_TextOverflowProperty(InlineStyleAccessPropertyBag_TextOverflowProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_TextOverflowProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_TextOverflowProperty(InlineStyleAccessPropertyBag_TextOverflowProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_TextOverflowProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleScaleProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/ScaleProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_ScaleProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleScaleProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb759124, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleScale GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ScaleProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7591ec, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleScale  value) ;

/// @brief Method .ctor, addr 0xb752574, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75911c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75909c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7590dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_ScaleProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_ScaleProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_ScaleProperty(InlineStyleAccessPropertyBag_ScaleProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_ScaleProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_ScaleProperty(InlineStyleAccessPropertyBag_ScaleProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7972};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ScaleProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.Scale, UnityEngine.UIElements.StyleScale
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleScaleProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleScaleProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleScale,::UnityEngine::UIElements::Scale> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleScaleProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e8c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleScaleProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleScaleProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleScaleProperty(InlineStyleAccessPropertyBag_InlineStyleScaleProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleScaleProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleScaleProperty(InlineStyleAccessPropertyBag_InlineStyleScaleProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8022};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleScaleProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleRotateProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/RotateProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_RotateProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleRotateProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758ef8, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleRotate GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RotateProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb758fc0, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleRotate  value) ;

/// @brief Method .ctor, addr 0xb75256c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758ef0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb758e70, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758eb0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_RotateProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_RotateProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_RotateProperty(InlineStyleAccessPropertyBag_RotateProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_RotateProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_RotateProperty(InlineStyleAccessPropertyBag_RotateProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RotateProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.Rotate, UnityEngine.UIElements.StyleRotate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleRotateProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleRotateProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleRotate,::UnityEngine::UIElements::Rotate> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleRotateProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e87c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleRotateProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleRotateProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleRotateProperty(InlineStyleAccessPropertyBag_InlineStyleRotateProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleRotateProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleRotateProperty(InlineStyleAccessPropertyBag_InlineStyleRotateProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleRotateProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/RightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_RightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758d08, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb758db4, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752564, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758d00, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb758c80, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758cc0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_RightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_RightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_RightProperty(InlineStyleAccessPropertyBag_RightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_RightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_RightProperty(InlineStyleAccessPropertyBag_RightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_RightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.Position
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/PositionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_PositionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Position> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758b30, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PositionProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb758bd4, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>  value) ;

/// @brief Method .ctor, addr 0xb75251c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758b28, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb758aa8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758ae8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_PositionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PositionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_PositionProperty(InlineStyleAccessPropertyBag_PositionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PositionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_PositionProperty(InlineStyleAccessPropertyBag_PositionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PositionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/PaddingTopProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_PaddingTopProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758940, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingTopProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7589ec, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752514, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758938, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7588b8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7588f8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_PaddingTopProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingTopProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_PaddingTopProperty(InlineStyleAccessPropertyBag_PaddingTopProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingTopProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_PaddingTopProperty(InlineStyleAccessPropertyBag_PaddingTopProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingTopProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/PaddingRightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_PaddingRightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758750, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingRightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7587fc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75250c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758748, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7586c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758708, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_PaddingRightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingRightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_PaddingRightProperty(InlineStyleAccessPropertyBag_PaddingRightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingRightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_PaddingRightProperty(InlineStyleAccessPropertyBag_PaddingRightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingRightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/PaddingLeftProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_PaddingLeftProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758560, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingLeftProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75860c, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758558, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7584d8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758518, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_PaddingLeftProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingLeftProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_PaddingLeftProperty(InlineStyleAccessPropertyBag_PaddingLeftProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingLeftProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_PaddingLeftProperty(InlineStyleAccessPropertyBag_PaddingLeftProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingLeftProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/PaddingBottomProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_PaddingBottomProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758370, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingBottomProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75841c, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7524fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758368, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7582e8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758328, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_PaddingBottomProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingBottomProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_PaddingBottomProperty(InlineStyleAccessPropertyBag_PaddingBottomProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_PaddingBottomProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_PaddingBottomProperty(InlineStyleAccessPropertyBag_PaddingBottomProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_PaddingBottomProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.Overflow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/OverflowProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_OverflowProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Overflow> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb758198, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OverflowProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75823c, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>  value) ;

/// @brief Method .ctor, addr 0xb7524b4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb758190, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb758110, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb758150, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_OverflowProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_OverflowProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_OverflowProperty(InlineStyleAccessPropertyBag_OverflowProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_OverflowProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_OverflowProperty(InlineStyleAccessPropertyBag_OverflowProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OverflowProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/OpacityProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_OpacityProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757fc0, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OpacityProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb758064, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7524ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757fb8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757f38, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb757f78, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_OpacityProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_OpacityProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_OpacityProperty(InlineStyleAccessPropertyBag_OpacityProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_OpacityProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_OpacityProperty(InlineStyleAccessPropertyBag_OpacityProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_OpacityProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MinWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MinWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757dd0, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb757e7c, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7524a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757dc8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757d48, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb757d88, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MinWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MinWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MinWidthProperty(InlineStyleAccessPropertyBag_MinWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MinWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MinWidthProperty(InlineStyleAccessPropertyBag_MinWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MinHeightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MinHeightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757be0, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinHeightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb757c8c, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75249c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757bd8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757b58, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb757b98, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MinHeightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MinHeightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MinHeightProperty(InlineStyleAccessPropertyBag_MinHeightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MinHeightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MinHeightProperty(InlineStyleAccessPropertyBag_MinHeightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MinHeightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MaxWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MaxWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb7579f0, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb757a9c, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb7579e8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757968, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7579a8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MaxWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MaxWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MaxWidthProperty(InlineStyleAccessPropertyBag_MaxWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MaxWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MaxWidthProperty(InlineStyleAccessPropertyBag_MaxWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MaxHeightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MaxHeightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757800, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxHeightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7578ac, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75248c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb7577f8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757778, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7577b8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MaxHeightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MaxHeightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MaxHeightProperty(InlineStyleAccessPropertyBag_MaxHeightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MaxHeightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MaxHeightProperty(InlineStyleAccessPropertyBag_MaxHeightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MaxHeightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MarginTopProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MarginTopProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757610, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginTopProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7576bc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752484, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757608, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757588, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7575c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MarginTopProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginTopProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MarginTopProperty(InlineStyleAccessPropertyBag_MarginTopProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginTopProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MarginTopProperty(InlineStyleAccessPropertyBag_MarginTopProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginTopProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MarginRightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MarginRightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757420, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginRightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7574cc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75247c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757418, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb757398, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7573d8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MarginRightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginRightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MarginRightProperty(InlineStyleAccessPropertyBag_MarginRightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginRightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MarginRightProperty(InlineStyleAccessPropertyBag_MarginRightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginRightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MarginLeftProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MarginLeftProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757230, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginLeftProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7572dc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752474, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757228, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7571a8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7571e8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MarginLeftProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginLeftProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MarginLeftProperty(InlineStyleAccessPropertyBag_MarginLeftProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginLeftProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MarginLeftProperty(InlineStyleAccessPropertyBag_MarginLeftProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginLeftProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/MarginBottomProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_MarginBottomProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb757040, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginBottomProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7570ec, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75246c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb757038, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756fb8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756ff8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_MarginBottomProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginBottomProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_MarginBottomProperty(InlineStyleAccessPropertyBag_MarginBottomProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_MarginBottomProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_MarginBottomProperty(InlineStyleAccessPropertyBag_MarginBottomProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7955};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_MarginBottomProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/LetterSpacingProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_LetterSpacingProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb756e50, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LetterSpacingProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb756efc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752464, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb756e48, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756dc8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756e08, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_LetterSpacingProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_LetterSpacingProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_LetterSpacingProperty(InlineStyleAccessPropertyBag_LetterSpacingProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_LetterSpacingProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_LetterSpacingProperty(InlineStyleAccessPropertyBag_LetterSpacingProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7954};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LetterSpacingProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/LeftProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_LeftProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb756c60, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LeftProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb756d0c, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75245c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb756c58, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756bd8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756c18, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_LeftProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_LeftProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_LeftProperty(InlineStyleAccessPropertyBag_LeftProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_LeftProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_LeftProperty(InlineStyleAccessPropertyBag_LeftProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7953};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_LeftProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.Justify
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/JustifyContentProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_JustifyContentProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Justify> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb756a88, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_JustifyContentProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb756b2c, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>  value) ;

/// @brief Method .ctor, addr 0xb752414, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb756a80, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756a00, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756a40, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_JustifyContentProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_JustifyContentProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_JustifyContentProperty(InlineStyleAccessPropertyBag_JustifyContentProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_JustifyContentProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_JustifyContentProperty(InlineStyleAccessPropertyBag_JustifyContentProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7952};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_JustifyContentProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/HeightProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_HeightProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb756898, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_HeightProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb756944, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75240c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb756890, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756810, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756850, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_HeightProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_HeightProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_HeightProperty(InlineStyleAccessPropertyBag_HeightProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_HeightProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_HeightProperty(InlineStyleAccessPropertyBag_HeightProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7951};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_HeightProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/FontSizeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_FontSizeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb7566a8, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FontSizeProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb756754, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb752404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb7566a0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756620, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756660, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_FontSizeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FontSizeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_FontSizeProperty(InlineStyleAccessPropertyBag_FontSizeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FontSizeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_FontSizeProperty(InlineStyleAccessPropertyBag_FontSizeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7950};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FontSizeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>, UnityEngine.UIElements.Wrap
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/FlexWrapProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_FlexWrapProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Wrap> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb7564d0, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexWrapProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb756574, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>  value) ;

/// @brief Method .ctor, addr 0xb7523bc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb7564c8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756448, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb756488, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_FlexWrapProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexWrapProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_FlexWrapProperty(InlineStyleAccessPropertyBag_FlexWrapProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexWrapProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_FlexWrapProperty(InlineStyleAccessPropertyBag_FlexWrapProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7949};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexWrapProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/FlexShrinkProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_FlexShrinkProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb7562f8, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexShrinkProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75639c, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7523b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb7562f0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756270, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7562b0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_FlexShrinkProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexShrinkProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_FlexShrinkProperty(InlineStyleAccessPropertyBag_FlexShrinkProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexShrinkProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_FlexShrinkProperty(InlineStyleAccessPropertyBag_FlexShrinkProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexShrinkProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/FlexGrowProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_FlexGrowProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb756120, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexGrowProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7561c4, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7523ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb756118, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb756098, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7560d8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_FlexGrowProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexGrowProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_FlexGrowProperty(InlineStyleAccessPropertyBag_FlexGrowProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexGrowProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_FlexGrowProperty(InlineStyleAccessPropertyBag_FlexGrowProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7947};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexGrowProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FlexDirection, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/FlexDirectionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_FlexDirectionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::FlexDirection> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755f48, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexDirectionProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755fec, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>  value) ;

/// @brief Method .ctor, addr 0xb752364, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755f40, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb755ec0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755f00, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_FlexDirectionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexDirectionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_FlexDirectionProperty(InlineStyleAccessPropertyBag_FlexDirectionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexDirectionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_FlexDirectionProperty(InlineStyleAccessPropertyBag_FlexDirectionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexDirectionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/FlexBasisProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_FlexBasisProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755d58, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexBasisProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755e04, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb75235c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755d50, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb755cd0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755d10, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_FlexBasisProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexBasisProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_FlexBasisProperty(InlineStyleAccessPropertyBag_FlexBasisProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_FlexBasisProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_FlexBasisProperty(InlineStyleAccessPropertyBag_FlexBasisProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_FlexBasisProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.DisplayStyle, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/DisplayProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_DisplayProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::DisplayStyle> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755b80, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_DisplayProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755c24, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>  value) ;

/// @brief Method .ctor, addr 0xb752314, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755b78, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb755af8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755b38, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_DisplayProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_DisplayProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_DisplayProperty(InlineStyleAccessPropertyBag_DisplayProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_DisplayProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_DisplayProperty(InlineStyleAccessPropertyBag_DisplayProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7944};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_DisplayProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleCursorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/CursorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_CursorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleCursorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75596c, size 0xc0, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleCursor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_CursorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755a2c, size 0xcc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleCursor  value) ;

/// @brief Method .ctor, addr 0xb75230c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755964, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7558e4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755924, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_CursorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_CursorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_CursorProperty(InlineStyleAccessPropertyBag_CursorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_CursorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_CursorProperty(InlineStyleAccessPropertyBag_CursorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7943};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_CursorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Cursor, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleCursor
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleCursorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleCursorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleCursor,::UnityEngine::UIElements::Cursor> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleCursorProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e90c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleCursorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleCursorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleCursorProperty(InlineStyleAccessPropertyBag_InlineStyleCursorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleCursorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleCursorProperty(InlineStyleAccessPropertyBag_InlineStyleCursorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleCursorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/ColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_ColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755740, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755808, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb752304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755738, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7556b8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7556f8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_ColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_ColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_ColorProperty(InlineStyleAccessPropertyBag_ColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_ColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_ColorProperty(InlineStyleAccessPropertyBag_ColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7942};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_ColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BottomProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BottomProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755550, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BottomProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb7555fc, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7522fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755548, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7554c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755508, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BottomProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BottomProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BottomProperty(InlineStyleAccessPropertyBag_BottomProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BottomProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BottomProperty(InlineStyleAccessPropertyBag_BottomProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BottomProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderTopWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderTopWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755378, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75541c, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7522f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755370, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7552f0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755330, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderTopWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderTopWidthProperty(InlineStyleAccessPropertyBag_BorderTopWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderTopWidthProperty(InlineStyleAccessPropertyBag_BorderTopWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderTopRightRadiusProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb755188, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755234, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7522ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb755180, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb755100, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb755140, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty(InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty(InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7939};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderTopLeftRadiusProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb754f98, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb755044, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7522e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754f90, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb754f10, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754f50, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty(InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty(InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7938};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderTopColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderTopColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb754d6c, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754e34, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb7522dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754d64, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb754ce4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754d24, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderTopColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderTopColorProperty(InlineStyleAccessPropertyBag_BorderTopColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderTopColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderTopColorProperty(InlineStyleAccessPropertyBag_BorderTopColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderTopColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderRightWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderRightWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb754b94, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754c38, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7522d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754b8c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb754b0c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754b4c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderRightWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderRightWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderRightWidthProperty(InlineStyleAccessPropertyBag_BorderRightWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderRightWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderRightWidthProperty(InlineStyleAccessPropertyBag_BorderRightWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7936};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderRightColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderRightColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb754968, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754a30, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb7522cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754960, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7548e0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754920, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderRightColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderRightColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderRightColorProperty(InlineStyleAccessPropertyBag_BorderRightColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderRightColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderRightColorProperty(InlineStyleAccessPropertyBag_BorderRightColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderRightColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderLeftWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderLeftWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb754790, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754834, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7522c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754788, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb754708, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754748, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderLeftWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderLeftWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderLeftWidthProperty(InlineStyleAccessPropertyBag_BorderLeftWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderLeftWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderLeftWidthProperty(InlineStyleAccessPropertyBag_BorderLeftWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7934};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderLeftColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderLeftColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb754564, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb75462c, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb7522bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75455c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7544dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75451c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderLeftColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderLeftColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderLeftColorProperty(InlineStyleAccessPropertyBag_BorderLeftColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderLeftColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderLeftColorProperty(InlineStyleAccessPropertyBag_BorderLeftColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7933};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderLeftColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderBottomWidthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderBottomWidthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75438c, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomWidthProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754430, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleFloat  value) ;

/// @brief Method .ctor, addr 0xb7522b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754384, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb754304, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754344, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderBottomWidthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomWidthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderBottomWidthProperty(InlineStyleAccessPropertyBag_BorderBottomWidthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomWidthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderBottomWidthProperty(InlineStyleAccessPropertyBag_BorderBottomWidthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7932};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomWidthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleFloat
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleFloatProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleFloatProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleFloat,float_t> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::InlineStyleFloatProperty_InlineStyleAccessPropertyBag___c;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75e0b0, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleFloatProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleFloatProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleFloatProperty(InlineStyleAccessPropertyBag_InlineStyleFloatProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleFloatProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleFloatProperty(InlineStyleAccessPropertyBag_InlineStyleFloatProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleFloatProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderBottomRightRadiusProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75419c, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754248, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7522ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb754194, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb754114, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb754154, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty(InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty(InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7931};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleLengthProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderBottomLeftRadiusProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753fac, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleLength GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb754058, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleLength  value) ;

/// @brief Method .ctor, addr 0xb7522a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb753fa4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb753f24, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb753f64, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty(InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty(InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7930};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.StyleLength
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleLengthProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleLengthProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleLength,::UnityEngine::UIElements::Length> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::InlineStyleLengthProperty_InlineStyleAccessPropertyBag___c;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75dc0c, size 0x378, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleLengthProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleLengthProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleLengthProperty(InlineStyleAccessPropertyBag_InlineStyleLengthProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleLengthProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleLengthProperty(InlineStyleAccessPropertyBag_InlineStyleLengthProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleLengthProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BorderBottomColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BorderBottomColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753d80, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753e48, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb75229c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb753d78, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb753cf8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb753d38, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BorderBottomColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BorderBottomColorProperty(InlineStyleAccessPropertyBag_BorderBottomColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BorderBottomColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BorderBottomColorProperty(InlineStyleAccessPropertyBag_BorderBottomColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BorderBottomColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleBackgroundSizeProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BackgroundSizeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BackgroundSizeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753b54, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackgroundSize GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundSizeProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753c1c, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleBackgroundSize  value) ;

/// @brief Method .ctor, addr 0xb752294, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb753b4c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb753acc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb753b0c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BackgroundSizeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundSizeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BackgroundSizeProperty(InlineStyleAccessPropertyBag_BackgroundSizeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundSizeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BackgroundSizeProperty(InlineStyleAccessPropertyBag_BackgroundSizeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundSizeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleBackgroundSize
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleBackgroundSizeProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleBackgroundSize,::UnityEngine::UIElements::BackgroundSize> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75eb04, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundSizeProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleBackgroundRepeatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BackgroundRepeatProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BackgroundRepeatProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753964, size 0xac, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackgroundRepeat GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundRepeatProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753a10, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleBackgroundRepeat  value) ;

/// @brief Method .ctor, addr 0xb75228c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75395c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7538dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75391c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BackgroundRepeatProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundRepeatProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BackgroundRepeatProperty(InlineStyleAccessPropertyBag_BackgroundRepeatProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundRepeatProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BackgroundRepeatProperty(InlineStyleAccessPropertyBag_BackgroundRepeatProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundRepeatProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleBackgroundRepeat
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleBackgroundRepeatProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleBackgroundRepeat,::UnityEngine::UIElements::BackgroundRepeat> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75eabc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8029};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundRepeatProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleBackgroundPositionProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BackgroundPositionYProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BackgroundPositionYProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb75377c, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackgroundPosition GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionYProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753820, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleBackgroundPosition  value) ;

/// @brief Method .ctor, addr 0xb752284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb753774, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7536f4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb753734, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BackgroundPositionYProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundPositionYProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BackgroundPositionYProperty(InlineStyleAccessPropertyBag_BackgroundPositionYProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundPositionYProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BackgroundPositionYProperty(InlineStyleAccessPropertyBag_BackgroundPositionYProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionYProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleBackgroundPositionProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BackgroundPositionXProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BackgroundPositionXProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753594, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackgroundPosition GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionXProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753638, size 0xbc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleBackgroundPosition  value) ;

/// @brief Method .ctor, addr 0xb75227c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75358c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb75350c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75354c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BackgroundPositionXProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundPositionXProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BackgroundPositionXProperty(InlineStyleAccessPropertyBag_BackgroundPositionXProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundPositionXProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BackgroundPositionXProperty(InlineStyleAccessPropertyBag_BackgroundPositionXProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundPositionXProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleBackgroundPosition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleBackgroundPositionProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleBackgroundPosition,::UnityEngine::UIElements::BackgroundPosition> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75ea74, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8028};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundPositionProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleBackgroundProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BackgroundImageProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BackgroundImageProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753364, size 0xcc, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleBackground GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundImageProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753430, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleBackground  value) ;

/// @brief Method .ctor, addr 0xb752274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb75335c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7532dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb75331c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BackgroundImageProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundImageProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BackgroundImageProperty(InlineStyleAccessPropertyBag_BackgroundImageProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundImageProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BackgroundImageProperty(InlineStyleAccessPropertyBag_BackgroundImageProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7924};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundImageProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleBackground
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleBackgroundProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleBackground,::UnityEngine::UIElements::Background> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::InlineStyleBackgroundProperty_InlineStyleAccessPropertyBag___c;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75d384, size 0x678, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty(InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleBackgroundProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/BackgroundColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_BackgroundColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb753138, size 0xc8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleColor GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundColorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753200, size 0xdc, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleColor  value) ;

/// @brief Method .ctor, addr 0xb75226c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb753130, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb7530b0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb7530f0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_BackgroundColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_BackgroundColorProperty(InlineStyleAccessPropertyBag_BackgroundColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_BackgroundColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_BackgroundColorProperty(InlineStyleAccessPropertyBag_BackgroundColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_BackgroundColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleColor
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleColorProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleColorProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleColor,::UnityEngine::Color> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::InlineStyleColorProperty_InlineStyleAccessPropertyBag___c;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb75d0ac, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleColorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleColorProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleColorProperty(InlineStyleAccessPropertyBag_InlineStyleColorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleColorProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleColorProperty(InlineStyleAccessPropertyBag_InlineStyleColorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleColorProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/AlignSelfProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_AlignSelfProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Align> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb752f60, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignSelfProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb753004, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  value) ;

/// @brief Method .ctor, addr 0xb752224, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb752f58, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb752ed8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb752f18, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_AlignSelfProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_AlignSelfProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_AlignSelfProperty(InlineStyleAccessPropertyBag_AlignSelfProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_AlignSelfProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_AlignSelfProperty(InlineStyleAccessPropertyBag_AlignSelfProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignSelfProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/AlignItemsProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_AlignItemsProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Align> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb752d88, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignItemsProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb752e2c, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  value) ;

/// @brief Method .ctor, addr 0xb7521dc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb752d80, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb752d00, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb752d40, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_AlignItemsProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_AlignItemsProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_AlignItemsProperty(InlineStyleAccessPropertyBag_AlignItemsProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_AlignItemsProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_AlignItemsProperty(InlineStyleAccessPropertyBag_AlignItemsProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignItemsProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/AlignContentProperty
class CORDL_TYPE InlineStyleAccessPropertyBag_AlignContentProperty : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<::UnityEngine::UIElements::Align> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

/// @brief Method GetValue, addr 0xb752bb4, size 0xa0, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> GetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container) ;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignContentProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb752c54, size 0xac, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::InlineStyleAccess*>  container, ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>  value) ;

/// @brief Method .ctor, addr 0xb752194, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0xb752bac, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xb752b2c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ussName, addr 0xb752b6c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_AlignContentProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_AlignContentProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_AlignContentProperty(InlineStyleAccessPropertyBag_AlignContentProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_AlignContentProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_AlignContentProperty(InlineStyleAccessPropertyBag_AlignContentProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::InlineStyleAccessPropertyBag_AlignContentProperty) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.InlineStyleAccessPropertyBag::InlineStyleProperty`2<TStyleValue, TValue>, UnityEngine.UIElements.StyleEnum`1<T>
namespace UnityEngine::UIElements {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleEnumProperty`1<TValue>
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1 : public ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<::UnityEngine::UIElements::StyleEnum_1<TValue>,TValue> {
public:
// Declarations
static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1<TValue>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1(InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1(InlineStyleAccessPropertyBag_InlineStyleEnumProperty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace UnityEngine::UIElements {
// cpp template
template<typename TStyleValue,typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.InlineStyleAccessPropertyBag/InlineStyleProperty`2<TStyleValue,TValue>
class CORDL_TYPE InlineStyleAccessPropertyBag_InlineStyleProperty_2 : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::InlineStyleAccess*,TStyleValue> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::InlineStyleProperty_2_InlineStyleAccessPropertyBag___c<TStyleValue, TValue>;

 __declspec(property(get=get_ussName)) ::StringW  ussName;

static inline ::UnityEngine::UIElements::InlineStyleAccessPropertyBag_InlineStyleProperty_2<TStyleValue,TValue>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ussName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ussName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccessPropertyBag_InlineStyleProperty_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleProperty_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineStyleAccessPropertyBag_InlineStyleProperty_2(InlineStyleAccessPropertyBag_InlineStyleProperty_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccessPropertyBag_InlineStyleProperty_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineStyleAccessPropertyBag_InlineStyleProperty_2(InlineStyleAccessPropertyBag_InlineStyleProperty_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
