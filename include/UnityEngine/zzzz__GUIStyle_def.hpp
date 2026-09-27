#pragma once
// IWYU pragma private; include "UnityEngine/GUIStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIStyle)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfoBindings;
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
class GUIContent;
}
namespace UnityEngine {
class GUIStyleState;
}
namespace UnityEngine {
class GUIStyle_BindingsMarshaller;
}
namespace UnityEngine {
struct ImagePosition;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextClipping;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUIStyle_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIStyle*);
MARK_REF_T(::UnityEngine::GUIStyle_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIStyle*, "UnityEngine", "GUIStyle");
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIStyle_BindingsMarshaller*, "UnityEngine", "GUIStyle/BindingsMarshaller");
// [NativeHeader("IMGUIScriptingClasses.h")]
// [NativeHeader("Modules/IMGUI/GUIStyle.bindings.h")]
// [RequiredByNativeCode]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStyle
class CORDL_TYPE GUIStyle : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::GUIStyle_BindingsMarshaller;

/// @brief [NativeProperty("m_ClipOffset", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_Internal_clipOffset, put=set_Internal_clipOffset)) ::UnityEngine::Vector2  Internal_clipOffset;

 __declspec(property(get=get_active, put=set_active)) ::UnityEngine::GUIStyleState*  active;

/// @brief [NativeProperty("m_Alignment", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_alignment, put=set_alignment)) ::UnityEngine::TextAnchor  alignment;

 __declspec(property(put=set_border)) ::UnityEngine::RectOffset*  border;

/// @brief [NativeProperty("m_Clipping", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_clipping)) ::UnityEngine::TextClipping  clipping;

/// @brief [NativeProperty("m_ContentOffset", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_contentOffset, put=set_contentOffset)) ::UnityEngine::Vector2  contentOffset;

/// @brief [NativeProperty("m_FixedHeight", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_fixedHeight, put=set_fixedHeight)) float_t  fixedHeight;

/// @brief [NativeProperty("m_FixedWidth", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_fixedWidth, put=set_fixedWidth)) float_t  fixedWidth;

/// @brief [NativeProperty("Font", false, (UnityEngine.Bindings.TargetType)0)]
 __declspec(property(get=get_font, put=set_font)) ::UnityW<::UnityEngine::Font>  font;

/// @brief [NativeProperty("m_FontSize", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_fontSize, put=set_fontSize)) int32_t  fontSize;

/// @brief [NativeProperty("m_FontStyle", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_fontStyle)) ::UnityEngine::FontStyle  fontStyle;

 __declspec(property(get=get_hover, put=set_hover)) ::UnityEngine::GUIStyleState*  hover;

/// @brief [NativeProperty("m_ImagePosition", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_imagePosition)) ::UnityEngine::ImagePosition  imagePosition;

 __declspec(property(get=get_isHeightDependantOnWidth)) bool  isHeightDependantOnWidth;

 __declspec(property(get=get_lineHeight)) float_t  lineHeight;

/// @brief Field m_Active, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Active, put=__cordl_internal_set_m_Active)) ::UnityEngine::GUIStyleState*  m_Active;

/// @brief Field m_Border, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Border, put=__cordl_internal_set_m_Border)) ::UnityEngine::RectOffset*  m_Border;

/// @brief Field m_Focused, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Focused, put=__cordl_internal_set_m_Focused)) ::UnityEngine::GUIStyleState*  m_Focused;

/// @brief Field m_Hover, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hover, put=__cordl_internal_set_m_Hover)) ::UnityEngine::GUIStyleState*  m_Hover;

/// @brief Field m_Margin, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Margin, put=__cordl_internal_set_m_Margin)) ::UnityEngine::RectOffset*  m_Margin;

/// @brief Field m_Name, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Normal, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Normal, put=__cordl_internal_set_m_Normal)) ::UnityEngine::GUIStyleState*  m_Normal;

/// @brief Field m_OnActive, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnActive, put=__cordl_internal_set_m_OnActive)) ::UnityEngine::GUIStyleState*  m_OnActive;

/// @brief Field m_OnFocused, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnFocused, put=__cordl_internal_set_m_OnFocused)) ::UnityEngine::GUIStyleState*  m_OnFocused;

/// @brief Field m_OnHover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnHover, put=__cordl_internal_set_m_OnHover)) ::UnityEngine::GUIStyleState*  m_OnHover;

/// @brief Field m_OnNormal, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnNormal, put=__cordl_internal_set_m_OnNormal)) ::UnityEngine::GUIStyleState*  m_OnNormal;

/// @brief Field m_Overflow, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Overflow, put=__cordl_internal_set_m_Overflow)) ::UnityEngine::RectOffset*  m_Overflow;

/// @brief Field m_Padding, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Padding, put=__cordl_internal_set_m_Padding)) ::UnityEngine::RectOffset*  m_Padding;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_margin, put=set_margin)) ::UnityEngine::RectOffset*  margin;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::GUIStyleState*  normal;

 __declspec(property(get=get_onActive)) ::UnityEngine::GUIStyleState*  onActive;

 __declspec(property(get=get_onHover)) ::UnityEngine::GUIStyleState*  onHover;

 __declspec(property(get=get_onNormal)) ::UnityEngine::GUIStyleState*  onNormal;

 __declspec(property(get=get_padding, put=set_padding)) ::UnityEngine::RectOffset*  padding;

/// @brief [NativeProperty("Name", false, (UnityEngine.Bindings.TargetType)0)]
 __declspec(property(get=get_rawName, put=set_rawName)) ::StringW  rawName;

/// @brief [NativeProperty("m_RichText", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_richText)) bool  richText;

/// @brief Field s_None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_None, put=setStaticF_s_None)) ::UnityEngine::GUIStyle*  s_None;

/// @brief Field showKeyboardFocus, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_showKeyboardFocus, put=setStaticF_showKeyboardFocus)) bool  showKeyboardFocus;

/// @brief [NativeProperty("m_StretchHeight", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_stretchHeight, put=set_stretchHeight)) bool  stretchHeight;

/// @brief [NativeProperty("m_StretchWidth", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_stretchWidth, put=set_stretchWidth)) bool  stretchWidth;

/// @brief [NativeProperty("m_WordWrap", false, (UnityEngine.Bindings.TargetType)1)]
 __declspec(property(get=get_wordWrap)) bool  wordWrap;

/// [FreeFunction(Name = "GUIStyle_Bindings::AssignRectOffset", HasExplicitThis = true)]
/// @brief Method AssignRectOffset, addr 0xb64bfe4, size 0xa8, virtual false, abstract: false, final false
inline void AssignRectOffset(int32_t  idx, ::System::IntPtr  srcRectOffset) ;

/// @brief Method AssignRectOffset_Injected, addr 0xb64c08c, size 0x54, virtual false, abstract: false, final false
static inline void AssignRectOffset_Injected(::System::IntPtr  _unity_self, int32_t  idx, ::System::IntPtr  srcRectOffset) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::AssignStyleState", HasExplicitThis = true)]
/// @brief Method AssignStyleState, addr 0xb64be04, size 0xa8, virtual false, abstract: false, final false
inline void AssignStyleState(int32_t  idx, ::System::IntPtr  srcStyleState) ;

/// @brief Method AssignStyleState_Injected, addr 0xb64beac, size 0x54, virtual false, abstract: false, final false
static inline void AssignStyleState_Injected(::System::IntPtr  _unity_self, int32_t  idx, ::System::IntPtr  srcStyleState) ;

/// @brief Method CalcHeight, addr 0xb64df9c, size 0x4, virtual false, abstract: false, final false
inline float_t CalcHeight(::UnityEngine::GUIContent*  content, float_t  width) ;

/// @brief Method CalcMinMaxWidth, addr 0xb64e094, size 0x28, virtual false, abstract: false, final false
inline void CalcMinMaxWidth(::UnityEngine::GUIContent*  content, ::by_ref<float_t>  minWidth, ::by_ref<float_t>  maxWidth) ;

/// @brief Method CalcSizeWithConstraints, addr 0xb647a5c, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 CalcSizeWithConstraints(::UnityEngine::GUIContent*  content, ::UnityEngine::Vector2  constraints) ;

/// @brief Method Draw, addr 0xb642438, size 0x14, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID) ;

/// @brief Method Draw, addr 0xb640fa8, size 0x14, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, bool  on) ;

/// @brief Method Draw, addr 0xb63f6c8, size 0xd0, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, bool  on, bool  hover) ;

/// @brief Method Draw, addr 0xb64d3e8, size 0x24, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlId, bool  isHover, bool  isActive, bool  on, bool  hasKeyboardFocus) ;

/// @brief Method Draw, addr 0xb641954, size 0x4, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, bool  isHover, bool  isActive, bool  on, bool  hasKeyboardFocus) ;

/// @brief Method DrawCursor, addr 0xb64d4cc, size 0x218, virtual false, abstract: false, final false
inline void DrawCursor(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, int32_t  character) ;

/// @brief Method DrawWithTextSelection, addr 0xb64dd70, size 0x8, virtual false, abstract: false, final false
inline void DrawWithTextSelection(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, int32_t  firstSelectedCharacter, int32_t  lastSelectedCharacter) ;

/// @brief Method DrawWithTextSelection, addr 0xb64dc0c, size 0x164, virtual false, abstract: false, final false
inline void DrawWithTextSelection(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, int32_t  firstSelectedCharacter, int32_t  lastSelectedCharacter, bool  drawSelectionAsComposition) ;

/// @brief Method DrawWithTextSelection, addr 0xb64d8f8, size 0x314, virtual false, abstract: false, final false
inline void DrawWithTextSelection(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, bool  isActive, bool  hasKeyboardFocus, int32_t  firstSelectedCharacter, int32_t  lastSelectedCharacter, bool  drawSelectionAsComposition, ::UnityEngine::Color  selectionColor) ;

/// [RequiredByNativeCode]
/// @brief Method EmptyManagedCache, addr 0xb64e61c, size 0x4c, virtual false, abstract: false, final false
static inline void EmptyManagedCache() ;

/// @brief Method Finalize, addr 0xb64cd78, size 0xf8, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetCursorPixelPosition, addr 0xb64d6e4, size 0x214, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCursorPixelPosition(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  cursorStringIndex) ;

/// [FreeFunction(Name = "GUIStyle::GetDefaultFont")]
/// @brief Method GetDefaultFont, addr 0xb64cbd0, size 0x84, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Font> GetDefaultFont() ;

/// @brief Method GetDefaultFont_Injected, addr 0xb64cc54, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDefaultFont_Injected() ;

/// [RequiredByNativeCode]
/// @brief Method GetDimensions, addr 0xb64e5cc, size 0x30, virtual false, abstract: false, final false
static inline void GetDimensions(::UnityEngine::GUIStyle*  style, ::UnityEngine::Color  color, ::StringW  content, ::UnityEngine::Rect  rect, ::by_ref<::UnityEngine::Vector2>  dimensions) ;

/// [RequiredByNativeCode]
/// @brief Method GetLineHeight, addr 0xb64e5fc, size 0x20, virtual false, abstract: false, final false
static inline void GetLineHeight(::UnityEngine::GUIStyle*  style, ::by_ref<float_t>  lineHeight) ;

/// [RequiredByNativeCode]
/// @brief Method GetMeshInfo, addr 0xb64e114, size 0x390, virtual false, abstract: false, final false
static inline void GetMeshInfo(::UnityEngine::GUIStyle*  style, ::UnityEngine::Color  color, ::StringW  content, ::UnityEngine::Rect  rect, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MeshInfoBindings>>  meshInfos, ::by_ref<::UnityEngine::Vector2>  dimensions, ::by_ref<int32_t>  generationId) ;

/// @brief Method GetPreferredSize, addr 0xb64dfa0, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPreferredSize(::StringW  content, ::UnityEngine::Rect  rect) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::GetRectOffsetPtr", HasExplicitThis = true)]
/// @brief Method GetRectOffsetPtr, addr 0xb64bf00, size 0xa0, virtual false, abstract: false, final false
inline ::System::IntPtr GetRectOffsetPtr(int32_t  idx) ;

/// @brief Method GetRectOffsetPtr_Injected, addr 0xb64bfa0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetRectOffsetPtr_Injected(::System::IntPtr  _unity_self, int32_t  idx) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::GetStyleStatePtr", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method GetStyleStatePtr, addr 0xb64bd20, size 0xa0, virtual false, abstract: false, final false
inline ::System::IntPtr GetStyleStatePtr(int32_t  idx) ;

/// @brief Method GetStyleStatePtr_Injected, addr 0xb64bdc0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStyleStatePtr_Injected(::System::IntPtr  _unity_self, int32_t  idx) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcHeight", HasExplicitThis = true)]
/// @brief Method Internal_CalcHeight, addr 0xb64c7ac, size 0xb0, virtual false, abstract: false, final false
inline float_t Internal_CalcHeight(::UnityEngine::GUIContent*  content, float_t  width) ;

/// @brief Method Internal_CalcHeight_Injected, addr 0xb64c85c, size 0x54, virtual false, abstract: false, final false
static inline float_t Internal_CalcHeight_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GUIContent*  content, float_t  width) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcMinMaxWidth", HasExplicitThis = true)]
/// @brief Method Internal_CalcMinMaxWidth, addr 0xb64c8b0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Internal_CalcMinMaxWidth(::UnityEngine::GUIContent*  content) ;

/// @brief Method Internal_CalcMinMaxWidth_Injected, addr 0xb64c960, size 0x54, virtual false, abstract: false, final false
static inline void Internal_CalcMinMaxWidth_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GUIContent*  content, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSizeWithConstraints", HasExplicitThis = true)]
/// @brief Method Internal_CalcSizeWithConstraints, addr 0xb64c690, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Internal_CalcSizeWithConstraints(::UnityEngine::GUIContent*  content, ::UnityEngine::Vector2  maxSize) ;

/// @brief Method Internal_CalcSizeWithConstraints_Injected, addr 0xb64c750, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_CalcSizeWithConstraints_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GUIContent*  content, ::by_ref<::UnityEngine::Vector2>  maxSize, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_Copy", IsThreadSafe = true)]
/// @brief Method Internal_Copy, addr 0xb64bc1c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Copy(/* [Unmarshalled] */ ::UnityEngine::GUIStyle*  self, ::UnityEngine::GUIStyle*  other) ;

/// @brief Method Internal_Copy_Injected, addr 0xb64bca0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Copy_Injected(::UnityEngine::GUIStyle*  self, ::System::IntPtr  other) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_Create", IsThreadSafe = true)]
/// @brief Method Internal_Create, addr 0xb64bbe0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Create(/* [Unmarshalled] */ ::UnityEngine::GUIStyle*  self) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_Destroy", IsThreadSafe = true)]
/// @brief Method Internal_Destroy, addr 0xb64bce4, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  self) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_DestroyTextGenerator")]
/// @brief Method Internal_DestroyTextGenerator, addr 0xb64cc7c, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_DestroyTextGenerator(int32_t  meshInfoId) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw", HasExplicitThis = true)]
/// @brief Method Internal_Draw, addr 0xb64c0e0, size 0xe8, virtual false, abstract: false, final false
inline void Internal_Draw(::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, bool  isHover, bool  isActive, bool  on, bool  hasKeyboardFocus) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw2", HasExplicitThis = true)]
/// @brief Method Internal_Draw2, addr 0xb64c24c, size 0xd0, virtual false, abstract: false, final false
inline void Internal_Draw2(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, bool  on) ;

/// @brief Method Internal_Draw2_Injected, addr 0xb64c31c, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_Draw2_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  position, ::UnityEngine::GUIContent*  content, int32_t  controlID, bool  on) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawCursor", HasExplicitThis = true)]
/// @brief Method Internal_DrawCursor, addr 0xb64c388, size 0xcc, virtual false, abstract: false, final false
inline void Internal_DrawCursor(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::Vector2  pos, ::UnityEngine::Color  cursorColor) ;

/// @brief Method Internal_DrawCursor_Injected, addr 0xb64c454, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_DrawCursor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  position, ::UnityEngine::GUIContent*  content, ::by_ref<::UnityEngine::Vector2>  pos, ::by_ref<::UnityEngine::Color>  cursorColor) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawWithTextSelection", HasExplicitThis = true)]
/// @brief Method Internal_DrawWithTextSelection, addr 0xb64c4c0, size 0x118, virtual false, abstract: false, final false
inline void Internal_DrawWithTextSelection(::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, bool  isHover, bool  isActive, bool  on, bool  hasKeyboardFocus, bool  drawSelectionAsComposition, ::UnityEngine::Vector2  cursorFirstPosition, ::UnityEngine::Vector2  cursorLastPosition, ::UnityEngine::Color  cursorColor, ::UnityEngine::Color  selectionColor) ;

/// @brief Method Internal_DrawWithTextSelection_Injected, addr 0xb64c5d8, size 0xb8, virtual false, abstract: false, final false
static inline void Internal_DrawWithTextSelection_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  screenRect, ::UnityEngine::GUIContent*  content, bool  isHover, bool  isActive, bool  on, bool  hasKeyboardFocus, bool  drawSelectionAsComposition, ::by_ref<::UnityEngine::Vector2>  cursorFirstPosition, ::by_ref<::UnityEngine::Vector2>  cursorLastPosition, ::by_ref<::UnityEngine::Color>  cursorColor, ::by_ref<::UnityEngine::Color>  selectionColor) ;

/// @brief Method Internal_Draw_Injected, addr 0xb64c1c8, size 0x84, virtual false, abstract: false, final false
static inline void Internal_Draw_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  screenRect, ::UnityEngine::GUIContent*  content, bool  isHover, bool  isActive, bool  on, bool  hasKeyboardFocus) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_GetCursorFlashOffset")]
/// @brief Method Internal_GetCursorFlashOffset, addr 0xb64cb6c, size 0x28, virtual false, abstract: false, final false
static inline float_t Internal_GetCursorFlashOffset() ;

/// [FreeFunction(Name = "GUIStyle_Bindings::Internal_GetTextRectOffset", HasExplicitThis = true)]
/// @brief Method Internal_GetTextRectOffset, addr 0xb64c9b4, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Internal_GetTextRectOffset(::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::UnityEngine::Vector2  textSize) ;

/// @brief Method Internal_GetTextRectOffset_Injected, addr 0xb64ca80, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_GetTextRectOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  screenRect, ::UnityEngine::GUIContent*  content, ::by_ref<::UnityEngine::Vector2>  textSize, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::IsTooltipActive")]
/// @brief Method IsTooltipActive, addr 0xb6419a8, size 0x19c, virtual false, abstract: false, final false
static inline bool IsTooltipActive(::StringW  tooltip) ;

/// @brief Method IsTooltipActive_Injected, addr 0xb64cb30, size 0x3c, virtual false, abstract: false, final false
static inline bool IsTooltipActive_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  tooltip) ;

static inline ::UnityEngine::GUIStyle* New_ctor() ;

static inline ::UnityEngine::GUIStyle* New_ctor(::UnityEngine::GUIStyle*  other) ;

/// [FreeFunction(Name = "GUIStyle::SetDefaultFont")]
/// @brief Method SetDefaultFont, addr 0xb648640, size 0xa0, virtual false, abstract: false, final false
static inline void SetDefaultFont(::UnityEngine::Font*  font) ;

/// @brief Method SetDefaultFont_Injected, addr 0xb64cb94, size 0x3c, virtual false, abstract: false, final false
static inline void SetDefaultFont_Injected(::System::IntPtr  font) ;

/// [FreeFunction(Name = "GUIStyle_Bindings::SetMouseTooltip")]
/// @brief Method SetMouseTooltip, addr 0xb641b44, size 0x198, virtual false, abstract: false, final false
static inline void SetMouseTooltip(::StringW  tooltip, ::UnityEngine::Rect  screenRect) ;

/// @brief Method SetMouseTooltip_Injected, addr 0xb64caec, size 0x44, virtual false, abstract: false, final false
static inline void SetMouseTooltip_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  tooltip, ::by_ref<::UnityEngine::Rect>  screenRect) ;

/// @brief Method ToString, addr 0xb64e0bc, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Active() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Active() ;

constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Border() const;

constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Border() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Focused() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Focused() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Hover() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Hover() ;

constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Margin() const;

constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Margin() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Normal() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Normal() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnActive() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnActive() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnFocused() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnFocused() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnHover() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnHover() ;

constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnNormal() const;

constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnNormal() ;

constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Overflow() const;

constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Overflow() ;

constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Padding() const;

constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Padding() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Active(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_Border(::UnityEngine::RectOffset*  value) ;

constexpr void __cordl_internal_set_m_Focused(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_Hover(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_Margin(::UnityEngine::RectOffset*  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

constexpr void __cordl_internal_set_m_Normal(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_OnActive(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_OnFocused(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_OnHover(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_OnNormal(::UnityEngine::GUIStyleState*  value) ;

constexpr void __cordl_internal_set_m_Overflow(::UnityEngine::RectOffset*  value) ;

constexpr void __cordl_internal_set_m_Padding(::UnityEngine::RectOffset*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb647e00, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb64ccb8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GUIStyle*  other) ;

static inline ::UnityEngine::GUIStyle* getStaticF_s_None() ;

static inline bool getStaticF_showKeyboardFocus() ;

/// @brief Method get_Internal_clipOffset, addr 0xb64ba0c, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Internal_clipOffset() ;

/// @brief Method get_Internal_clipOffset_Injected, addr 0xb64bab4, size 0x44, virtual false, abstract: false, final false
static inline void get_Internal_clipOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_active, addr 0xb64cef0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GUIStyleState* get_active() ;

/// @brief Method get_alignment, addr 0xb64ac18, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::TextAnchor get_alignment() ;

/// @brief Method get_alignment_Injected, addr 0xb64aca8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextAnchor get_alignment_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clipping, addr 0xb64ae94, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::TextClipping get_clipping() ;

/// @brief Method get_clipping_Injected, addr 0xb64af24, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextClipping get_clipping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_contentOffset, addr 0xb64af60, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_contentOffset() ;

/// @brief Method get_contentOffset_Injected, addr 0xb64b008, size 0x44, virtual false, abstract: false, final false
static inline void get_contentOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_fixedHeight, addr 0xb64b2ec, size 0x90, virtual false, abstract: false, final false
inline float_t get_fixedHeight() ;

/// @brief Method get_fixedHeight_Injected, addr 0xb64b37c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_fixedHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fixedWidth, addr 0xb64b134, size 0x90, virtual false, abstract: false, final false
inline float_t get_fixedWidth() ;

/// @brief Method get_fixedWidth_Injected, addr 0xb64b1c4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_fixedWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_font, addr 0xb64103c, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Font> get_font() ;

/// @brief Method get_fontSize, addr 0xb64b6c4, size 0x90, virtual false, abstract: false, final false
inline int32_t get_fontSize() ;

/// @brief Method get_fontSize_Injected, addr 0xb64b754, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_fontSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fontStyle, addr 0xb64b874, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::FontStyle get_fontStyle() ;

/// @brief Method get_fontStyle_Injected, addr 0xb64b904, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::FontStyle get_fontStyle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_font_Injected, addr 0xb64aa00, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_font_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hover, addr 0xb64ce88, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GUIStyleState* get_hover() ;

/// @brief Method get_imagePosition, addr 0xb64ab4c, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::ImagePosition get_imagePosition() ;

/// @brief Method get_imagePosition_Injected, addr 0xb64abdc, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::ImagePosition get_imagePosition_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isHeightDependantOnWidth, addr 0xb647a1c, size 0x40, virtual false, abstract: false, final false
inline bool get_isHeightDependantOnWidth() ;

/// @brief Method get_lineHeight, addr 0xb64d1c0, size 0xd8, virtual false, abstract: false, final false
inline float_t get_lineHeight() ;

/// @brief Method get_margin, addr 0xb64d060, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::RectOffset* get_margin() ;

/// @brief Method get_name, addr 0xb6499dc, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_none, addr 0xb642030, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::GUIStyle* get_none() ;

/// @brief Method get_normal, addr 0xb649abc, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GUIStyleState* get_normal() ;

/// @brief Method get_onActive, addr 0xb64cff8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GUIStyleState* get_onActive() ;

/// @brief Method get_onHover, addr 0xb64cfa8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GUIStyleState* get_onHover() ;

/// @brief Method get_onNormal, addr 0xb64cf58, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GUIStyleState* get_onNormal() ;

/// @brief Method get_padding, addr 0xb64d110, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::RectOffset* get_padding() ;

/// @brief Method get_rawName, addr 0xb64a680, size 0x144, virtual false, abstract: false, final false
inline ::StringW get_rawName() ;

/// @brief Method get_rawName_Injected, addr 0xb64a7c4, size 0x44, virtual false, abstract: false, final false
static inline void get_rawName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_richText, addr 0xb64b940, size 0x90, virtual false, abstract: false, final false
inline bool get_richText() ;

/// @brief Method get_richText_Injected, addr 0xb64b9d0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_richText_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stretchHeight, addr 0xb64b5b4, size 0x90, virtual false, abstract: false, final false
inline bool get_stretchHeight() ;

/// @brief Method get_stretchHeight_Injected, addr 0xb64b644, size 0x3c, virtual false, abstract: false, final false
static inline bool get_stretchHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stretchWidth, addr 0xb64b4a4, size 0x90, virtual false, abstract: false, final false
inline bool get_stretchWidth() ;

/// @brief Method get_stretchWidth_Injected, addr 0xb64b534, size 0x3c, virtual false, abstract: false, final false
static inline bool get_stretchWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_wordWrap, addr 0xb64adc8, size 0x90, virtual false, abstract: false, final false
inline bool get_wordWrap() ;

/// @brief Method get_wordWrap_Injected, addr 0xb64ae58, size 0x3c, virtual false, abstract: false, final false
static inline bool get_wordWrap_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method op_Implicit, addr 0xb64dd78, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::GUIStyle* op_Implicit___UnityEngine__GUIStyle_(::StringW  str) ;

static inline void setStaticF_s_None(::UnityEngine::GUIStyle*  value) ;

static inline void setStaticF_showKeyboardFocus(bool  value) ;

/// @brief Method set_Internal_clipOffset, addr 0xb64baf8, size 0xa4, virtual false, abstract: false, final false
inline void set_Internal_clipOffset(::UnityEngine::Vector2  value) ;

/// @brief Method set_Internal_clipOffset_Injected, addr 0xb64bb9c, size 0x44, virtual false, abstract: false, final false
static inline void set_Internal_clipOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_active, addr 0xb64cf40, size 0x18, virtual false, abstract: false, final false
inline void set_active(::UnityEngine::GUIStyleState*  value) ;

/// @brief Method set_alignment, addr 0xb64ace4, size 0xa0, virtual false, abstract: false, final false
inline void set_alignment(::UnityEngine::TextAnchor  value) ;

/// @brief Method set_alignment_Injected, addr 0xb64ad84, size 0x44, virtual false, abstract: false, final false
static inline void set_alignment_Injected(::System::IntPtr  _unity_self, ::UnityEngine::TextAnchor  value) ;

/// @brief Method set_border, addr 0xb64d048, size 0x18, virtual false, abstract: false, final false
inline void set_border(::UnityEngine::RectOffset*  value) ;

/// @brief Method set_contentOffset, addr 0xb64b04c, size 0xa4, virtual false, abstract: false, final false
inline void set_contentOffset(::UnityEngine::Vector2  value) ;

/// @brief Method set_contentOffset_Injected, addr 0xb64b0f0, size 0x44, virtual false, abstract: false, final false
static inline void set_contentOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_fixedHeight, addr 0xb64b3b8, size 0xa0, virtual false, abstract: false, final false
inline void set_fixedHeight(float_t  value) ;

/// @brief Method set_fixedHeight_Injected, addr 0xb64b458, size 0x4c, virtual false, abstract: false, final false
static inline void set_fixedHeight_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_fixedWidth, addr 0xb64b200, size 0xa0, virtual false, abstract: false, final false
inline void set_fixedWidth(float_t  value) ;

/// @brief Method set_fixedWidth_Injected, addr 0xb64b2a0, size 0x4c, virtual false, abstract: false, final false
static inline void set_fixedWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_font, addr 0xb64aa3c, size 0xcc, virtual false, abstract: false, final false
inline void set_font(::UnityEngine::Font*  value) ;

/// @brief Method set_fontSize, addr 0xb64b790, size 0xa0, virtual false, abstract: false, final false
inline void set_fontSize(int32_t  value) ;

/// @brief Method set_fontSize_Injected, addr 0xb64b830, size 0x44, virtual false, abstract: false, final false
static inline void set_fontSize_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_font_Injected, addr 0xb64ab08, size 0x44, virtual false, abstract: false, final false
static inline void set_font_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_hover, addr 0xb64ced8, size 0x18, virtual false, abstract: false, final false
inline void set_hover(::UnityEngine::GUIStyleState*  value) ;

/// @brief Method set_margin, addr 0xb64d0f8, size 0x18, virtual false, abstract: false, final false
inline void set_margin(::UnityEngine::RectOffset*  value) ;

/// @brief Method set_name, addr 0xb648ae0, size 0x2c, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_normal, addr 0xb64ce70, size 0x18, virtual false, abstract: false, final false
inline void set_normal(::UnityEngine::GUIStyleState*  value) ;

/// @brief Method set_padding, addr 0xb64d1a8, size 0x18, virtual false, abstract: false, final false
inline void set_padding(::UnityEngine::RectOffset*  value) ;

/// @brief Method set_rawName, addr 0xb64a808, size 0x1b4, virtual false, abstract: false, final false
inline void set_rawName(::StringW  value) ;

/// @brief Method set_rawName_Injected, addr 0xb64a9bc, size 0x44, virtual false, abstract: false, final false
static inline void set_rawName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_stretchHeight, addr 0xb649a1c, size 0xa0, virtual false, abstract: false, final false
inline void set_stretchHeight(bool  value) ;

/// @brief Method set_stretchHeight_Injected, addr 0xb64b680, size 0x44, virtual false, abstract: false, final false
static inline void set_stretchHeight_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_stretchWidth, addr 0xb647e88, size 0xa0, virtual false, abstract: false, final false
inline void set_stretchWidth(bool  value) ;

/// @brief Method set_stretchWidth_Injected, addr 0xb64b570, size 0x44, virtual false, abstract: false, final false
static inline void set_stretchWidth_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIStyle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIStyle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIStyle(GUIStyle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIStyle(GUIStyle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28830};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_Normal, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_Normal;

/// @brief Field m_Hover, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_Hover;

/// @brief Field m_Active, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_Active;

/// @brief Field m_Focused, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_Focused;

/// @brief Field m_OnNormal, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_OnNormal;

/// @brief Field m_OnHover, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_OnHover;

/// @brief Field m_OnActive, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_OnActive;

/// @brief Field m_OnFocused, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GUIStyleState*  ___m_OnFocused;

/// @brief Field m_Border, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::RectOffset*  ___m_Border;

/// @brief Field m_Padding, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::RectOffset*  ___m_Padding;

/// @brief Field m_Margin, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::RectOffset*  ___m_Margin;

/// @brief Field m_Overflow, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::RectOffset*  ___m_Overflow;

/// @brief Field m_Name, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___m_Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Hover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Focused) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnNormal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnHover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnActive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnFocused) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Border) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Padding) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Margin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Overflow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Name) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GUIStyle) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStyle/BindingsMarshaller
class CORDL_TYPE GUIStyle_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb64e758, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::GUIStyle*  guiStyle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIStyle_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIStyle_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIStyle_BindingsMarshaller(GUIStyle_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyle_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIStyle_BindingsMarshaller(GUIStyle_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIStyle_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
