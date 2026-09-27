#pragma once
// IWYU pragma private; include "UnityEngine/GUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUI)
namespace System {
struct DateTime;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngineInternal {
class GenericStack;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class TextEditor;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUI;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUI*);
MARK_REF_T(::UnityEngine::GUI_WindowFunction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUI*, "UnityEngine", "GUI");
DEFINE_IL2CPP_CLASS(::UnityEngine::GUI_WindowFunction*, "UnityEngine", "GUI/WindowFunction");
// [NativeHeader("Modules/IMGUI/GUI.bindings.h")]
// [NativeHeader("Modules/IMGUI/GUISkin.bindings.h")]
// Dependencies System.DateTime, System.Object, UnityEngine.Rect
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUI
class CORDL_TYPE GUI : public ::System::Object {
public:
// Declarations
using WindowFunction = ::UnityEngine::GUI_WindowFunction;

/// @brief Field <nextScrollStepTime>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nextScrollStepTime_k__BackingField, put=setStaticF__nextScrollStepTime_k__BackingField)) ::System::DateTime  _nextScrollStepTime_k__BackingField;

/// @brief Field <scrollTroughSide>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__scrollTroughSide_k__BackingField, put=setStaticF__scrollTroughSide_k__BackingField)) int32_t  _scrollTroughSide_k__BackingField;

/// @brief Field <scrollViewStates>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__scrollViewStates_k__BackingField, put=setStaticF__scrollViewStates_k__BackingField)) ::UnityEngineInternal::GenericStack*  _scrollViewStates_k__BackingField;

/// @brief Field s_BeginGroupHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BeginGroupHash, put=setStaticF_s_BeginGroupHash)) int32_t  s_BeginGroupHash;

/// @brief Field s_BoxHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BoxHash, put=setStaticF_s_BoxHash)) int32_t  s_BoxHash;

/// @brief Field s_ButonHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ButonHash, put=setStaticF_s_ButonHash)) int32_t  s_ButonHash;

/// @brief Field s_ButtonGridHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ButtonGridHash, put=setStaticF_s_ButtonGridHash)) int32_t  s_ButtonGridHash;

/// @brief Field s_HotTextField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HotTextField, put=setStaticF_s_HotTextField)) int32_t  s_HotTextField;

/// @brief Field s_RepeatButtonHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RepeatButtonHash, put=setStaticF_s_RepeatButtonHash)) int32_t  s_RepeatButtonHash;

/// @brief Field s_ScrollviewHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScrollviewHash, put=setStaticF_s_ScrollviewHash)) int32_t  s_ScrollviewHash;

/// @brief Field s_Skin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Skin, put=setStaticF_s_Skin)) ::UnityW<::UnityEngine::GUISkin>  s_Skin;

/// @brief Field s_SliderHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SliderHash, put=setStaticF_s_SliderHash)) int32_t  s_SliderHash;

/// @brief Field s_ToggleHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ToggleHash, put=setStaticF_s_ToggleHash)) int32_t  s_ToggleHash;

/// @brief Field s_ToolTipRect, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_ToolTipRect, put=setStaticF_s_ToolTipRect)) ::UnityEngine::Rect  s_ToolTipRect;

/// @brief Method BeginGroup, addr 0xb641f48, size 0xe8, virtual false, abstract: false, final false
static inline void BeginGroup(::UnityEngine::Rect  position) ;

/// @brief Method BeginGroup, addr 0xb6420c0, size 0xd8, virtual false, abstract: false, final false
static inline void BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method BeginGroup, addr 0xb642198, size 0x2a0, virtual false, abstract: false, final false
static inline void BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::UnityEngine::Vector2  scrollOffset) ;

/// @brief Method Box, addr 0xb63f3f4, size 0x19c, virtual false, abstract: false, final false
static inline void Box(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Box, addr 0xb63f31c, size 0xd0, virtual false, abstract: false, final false
static inline void Box(::UnityEngine::Rect  position, ::StringW  text) ;

/// @brief Method Box, addr 0xb63f590, size 0xc8, virtual false, abstract: false, final false
static inline void Box(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0xb63f870, size 0xe4, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0xb63fac4, size 0xc4, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0xb63f798, size 0xd0, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, ::StringW  text) ;

/// @brief Method Button, addr 0xb63f954, size 0xc8, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style) ;

/// [RequiredByNativeCode]
/// @brief Method CallWindowDelegate, addr 0xb642754, size 0x298, virtual false, abstract: false, final false
static inline void CallWindowDelegate(::UnityEngine::GUI_WindowFunction*  func, int32_t  id, int32_t  instanceID, ::UnityEngine::GUISkin*  _skin, int32_t  forceRect, float_t  width, float_t  height, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoButton, addr 0xb63fb88, size 0x10c, virtual false, abstract: false, final false
static inline bool DoButton(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoControl, addr 0xb641510, size 0x390, virtual false, abstract: false, final false
static inline bool DoControl(::UnityEngine::Rect  position, int32_t  id, bool  on, bool  hover, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoLabel, addr 0xb63f090, size 0x28c, virtual false, abstract: false, final false
static inline void DoLabel(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoSetSkin, addr 0xb63e964, size 0xd0, virtual false, abstract: false, final false
static inline void DoSetSkin(::UnityEngine::GUISkin*  newSkin) ;

/// @brief Method DoTextField, addr 0xb63fd88, size 0xb8, virtual false, abstract: false, final false
static inline void DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoTextField, addr 0xb63fe40, size 0xc8, virtual false, abstract: false, final false
static inline void DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText) ;

/// @brief Method DoTextField, addr 0xb63ff08, size 0x2dc, virtual false, abstract: false, final false
static inline void DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar) ;

/// @brief Method DoToggle, addr 0xb6413f8, size 0x118, virtual false, abstract: false, final false
static inline bool DoToggle(::UnityEngine::Rect  position, int32_t  id, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoWindow, addr 0xb642658, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect DoWindow(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::UnityEngine::GUISkin*  skin, bool  forceRectOnLayout) ;

/// @brief Method DragWindow, addr 0xb643198, size 0x60, virtual false, abstract: false, final false
static inline void DragWindow() ;

/// @brief Method DragWindow, addr 0xb63e34c, size 0x84, virtual false, abstract: false, final false
static inline void DragWindow(::UnityEngine::Rect  position) ;

/// @brief Method DragWindow_Injected, addr 0xb63e3d0, size 0x3c, virtual false, abstract: false, final false
static inline void DragWindow_Injected(::by_ref<::UnityEngine::Rect>  position) ;

/// @brief Method EndGroup, addr 0xb64248c, size 0x6c, virtual false, abstract: false, final false
static inline void EndGroup() ;

/// @brief Method GrabMouseControl, addr 0xb63e100, size 0x3c, virtual false, abstract: false, final false
static inline void GrabMouseControl(int32_t  id) ;

/// @brief Method HandleTextFieldEventForDesktop, addr 0xb640730, size 0x728, virtual false, abstract: false, final false
static inline void HandleTextFieldEventForDesktop(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::UnityEngine::TextEditor*  editor) ;

/// @brief Method HandleTextFieldEventForTouchscreen, addr 0xb6402bc, size 0x474, virtual false, abstract: false, final false
static inline void HandleTextFieldEventForTouchscreen(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar, ::UnityEngine::TextEditor*  editor) ;

/// @brief Method HasMouseControl, addr 0xb63e13c, size 0x3c, virtual false, abstract: false, final false
static inline bool HasMouseControl(int32_t  id) ;

/// @brief Method HorizontalSlider, addr 0xb641cdc, size 0xcc, virtual false, abstract: false, final false
static inline float_t HorizontalSlider(::UnityEngine::Rect  position, float_t  value, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb) ;

/// @brief Method InternalRepaintEditorWindow, addr 0xb63e1a0, size 0x28, virtual false, abstract: false, final false
static inline void InternalRepaintEditorWindow() ;

/// @brief Method Internal_DoWindow, addr 0xb63e1c8, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Internal_DoWindow(int32_t  id, int32_t  instanceID, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, /* [Unmarshalled] */ ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout) ;

/// @brief Method Internal_DoWindow_Injected, addr 0xb63e2b0, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_DoWindow_Injected(int32_t  id, int32_t  instanceID, ::by_ref<::UnityEngine::Rect>  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method Label, addr 0xb63ef0c, size 0xbc, virtual false, abstract: false, final false
static inline void Label(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Label, addr 0xb63ed74, size 0xd0, virtual false, abstract: false, final false
static inline void Label(::UnityEngine::Rect  position, ::StringW  text) ;

/// @brief Method Label, addr 0xb63efc8, size 0xc8, virtual false, abstract: false, final false
static inline void Label(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method PasswordFieldGetStrToShow, addr 0xb63fc94, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW PasswordFieldGetStrToShow(::StringW  password, char16_t  maskChar) ;

/// @brief Method ReleaseMouseControl, addr 0xb63e178, size 0x28, virtual false, abstract: false, final false
static inline void ReleaseMouseControl() ;

/// @brief Method Slider, addr 0xb641da8, size 0x1a0, virtual false, abstract: false, final false
static inline float_t Slider(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, bool  horiz, int32_t  id, ::UnityEngine::GUIStyle*  thumbExtent) ;

/// @brief Method Toggle, addr 0xb641310, size 0xe8, virtual false, abstract: false, final false
static inline bool Toggle(::UnityEngine::Rect  position, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Toggle, addr 0xb641228, size 0xe0, virtual false, abstract: false, final false
static inline bool Toggle(::UnityEngine::Rect  position, bool  value, ::StringW  text) ;

/// @brief Method Window, addr 0xb642578, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Window(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style) ;

static inline ::System::DateTime getStaticF__nextScrollStepTime_k__BackingField() ;

static inline int32_t getStaticF__scrollTroughSide_k__BackingField() ;

static inline ::UnityEngineInternal::GenericStack* getStaticF__scrollViewStates_k__BackingField() ;

static inline int32_t getStaticF_s_BeginGroupHash() ;

static inline int32_t getStaticF_s_BoxHash() ;

static inline int32_t getStaticF_s_ButonHash() ;

static inline int32_t getStaticF_s_ButtonGridHash() ;

static inline int32_t getStaticF_s_HotTextField() ;

static inline int32_t getStaticF_s_RepeatButtonHash() ;

static inline int32_t getStaticF_s_ScrollviewHash() ;

static inline ::UnityW<::UnityEngine::GUISkin> getStaticF_s_Skin() ;

static inline int32_t getStaticF_s_SliderHash() ;

static inline int32_t getStaticF_s_ToggleHash() ;

static inline ::UnityEngine::Rect getStaticF_s_ToolTipRect() ;

/// @brief Method get_backgroundColor, addr 0xb63dd08, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0xb63dd90, size 0x3c, virtual false, abstract: false, final false
static inline void get_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_changed, addr 0xb63e010, size 0x28, virtual false, abstract: false, final false
static inline bool get_changed() ;

/// @brief Method get_color, addr 0xb63db84, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0xb63dc0c, size 0x3c, virtual false, abstract: false, final false
static inline void get_color_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_contentColor, addr 0xb63de8c, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_contentColor() ;

/// @brief Method get_contentColor_Injected, addr 0xb63df14, size 0x3c, virtual false, abstract: false, final false
static inline void get_contentColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_enabled, addr 0xb63e074, size 0x28, virtual false, abstract: false, final false
static inline bool get_enabled() ;

/// @brief Method get_matrix, addr 0xb63ec14, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 get_matrix() ;

/// [CompilerGenerated]
/// @brief Method get_nextScrollStepTime, addr 0xb63e778, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime get_nextScrollStepTime() ;

/// [CompilerGenerated]
/// @brief Method get_scrollTroughSide, addr 0xb63e6c4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_scrollTroughSide() ;

/// [CompilerGenerated]
/// @brief Method get_scrollViewStates, addr 0xb642520, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngineInternal::GenericStack* get_scrollViewStates() ;

/// @brief Method get_skin, addr 0xb63ea34, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GUISkin> get_skin() ;

/// @brief Method get_usePageScrollbars, addr 0xb63e0d8, size 0x28, virtual false, abstract: false, final false
static inline bool get_usePageScrollbars() ;

static inline void setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime  value) ;

static inline void setStaticF__scrollTroughSide_k__BackingField(int32_t  value) ;

static inline void setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack*  value) ;

static inline void setStaticF_s_BeginGroupHash(int32_t  value) ;

static inline void setStaticF_s_BoxHash(int32_t  value) ;

static inline void setStaticF_s_ButonHash(int32_t  value) ;

static inline void setStaticF_s_ButtonGridHash(int32_t  value) ;

static inline void setStaticF_s_HotTextField(int32_t  value) ;

static inline void setStaticF_s_RepeatButtonHash(int32_t  value) ;

static inline void setStaticF_s_ScrollviewHash(int32_t  value) ;

static inline void setStaticF_s_Skin(::UnityW<::UnityEngine::GUISkin>  value) ;

static inline void setStaticF_s_SliderHash(int32_t  value) ;

static inline void setStaticF_s_ToggleHash(int32_t  value) ;

static inline void setStaticF_s_ToolTipRect(::UnityEngine::Rect  value) ;

/// @brief Method set_backgroundColor, addr 0xb63ddcc, size 0x84, virtual false, abstract: false, final false
static inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_backgroundColor_Injected, addr 0xb63de50, size 0x3c, virtual false, abstract: false, final false
static inline void set_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_changed, addr 0xb63e038, size 0x3c, virtual false, abstract: false, final false
static inline void set_changed(bool  value) ;

/// @brief Method set_color, addr 0xb63dc48, size 0x84, virtual false, abstract: false, final false
static inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0xb63dccc, size 0x3c, virtual false, abstract: false, final false
static inline void set_color_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_contentColor, addr 0xb63df50, size 0x84, virtual false, abstract: false, final false
static inline void set_contentColor(::UnityEngine::Color  value) ;

/// @brief Method set_contentColor_Injected, addr 0xb63dfd4, size 0x3c, virtual false, abstract: false, final false
static inline void set_contentColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_enabled, addr 0xb63e09c, size 0x3c, virtual false, abstract: false, final false
static inline void set_enabled(bool  value) ;

/// @brief Method set_matrix, addr 0xb63ecec, size 0x4c, virtual false, abstract: false, final false
static inline void set_matrix(::UnityEngine::Matrix4x4  value) ;

/// [CompilerGenerated]
/// @brief Method set_nextScrollStepTime, addr 0xb63e7d0, size 0x5c, virtual false, abstract: false, final false
static inline void set_nextScrollStepTime(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_scrollTroughSide, addr 0xb63e71c, size 0x5c, virtual false, abstract: false, final false
static inline void set_scrollTroughSide(int32_t  value) ;

/// @brief Method set_skin, addr 0xb63e82c, size 0x7c, virtual false, abstract: false, final false
static inline void set_skin(::UnityEngine::GUISkin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUI(GUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUI(GUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUI) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUI/WindowFunction
class CORDL_TYPE GUI_WindowFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb643298, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  id) ;

static inline ::UnityEngine::GUI_WindowFunction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb6431f8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUI_WindowFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUI_WindowFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUI_WindowFunction(GUI_WindowFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUI_WindowFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUI_WindowFunction(GUI_WindowFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28810};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUI_WindowFunction) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
