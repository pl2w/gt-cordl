#pragma once
// IWYU pragma private; include "UnityEngine/GUILayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayout)
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUILayout_LayoutedWindow;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
class GUILayout;
}
namespace UnityEngine {
class GUILayout_LayoutedWindow;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUILayout*);
MARK_REF_T(::UnityEngine::GUILayout_LayoutedWindow*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
DEFINE_IL2CPP_CLASS(::UnityEngine::GUILayout_LayoutedWindow*, "UnityEngine", "GUILayout/LayoutedWindow");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayout
class CORDL_TYPE GUILayout : public ::System::Object {
public:
// Declarations
using LayoutedWindow = ::UnityEngine::GUILayout_LayoutedWindow;

/// @brief Method BeginArea, addr 0xb645748, size 0xbc, virtual false, abstract: false, final false
static inline void BeginArea(::UnityEngine::Rect  screenRect) ;

/// @brief Method BeginArea, addr 0xb645804, size 0x1cc, virtual false, abstract: false, final false
static inline void BeginArea(::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method BeginArea, addr 0xb6459d0, size 0x98, virtual false, abstract: false, final false
static inline void BeginArea(::UnityEngine::Rect  screenRect, ::StringW  text, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method BeginHorizontal, addr 0xb644d38, size 0x198, virtual false, abstract: false, final false
static inline void BeginHorizontal(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method BeginHorizontal, addr 0xb644ca4, size 0x94, virtual false, abstract: false, final false
static inline void BeginHorizontal(/* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method BeginVertical, addr 0xb645560, size 0x19c, virtual false, abstract: false, final false
static inline void BeginVertical(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method BeginVertical, addr 0xb6454f0, size 0x70, virtual false, abstract: false, final false
static inline void BeginVertical(::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Box, addr 0xb643fd0, size 0xa8, virtual false, abstract: false, final false
static inline void Box(::StringW  text, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Button, addr 0xb6442b8, size 0x4, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Button, addr 0xb644144, size 0xa8, virtual false, abstract: false, final false
static inline bool Button(::StringW  text, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoBox, addr 0xb644078, size 0xcc, virtual false, abstract: false, final false
static inline void DoBox(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoButton, addr 0xb6441ec, size 0xcc, virtual false, abstract: false, final false
static inline bool DoButton(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoHorizontalSlider, addr 0xb6447e4, size 0x144, virtual false, abstract: false, final false
static inline float_t DoHorizontalSlider(float_t  value, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoLabel, addr 0xb643e28, size 0xcc, virtual false, abstract: false, final false
static inline void DoLabel(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoTextField, addr 0xb644344, size 0x210, virtual false, abstract: false, final false
static inline ::StringW DoTextField(::StringW  text, int32_t  maxLength, bool  multiline, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoToggle, addr 0xb64465c, size 0xdc, virtual false, abstract: false, final false
static inline bool DoToggle(bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method DoWindow, addr 0xb6460ec, size 0x168, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect DoWindow(int32_t  id, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method EndArea, addr 0xb645d70, size 0xf0, virtual false, abstract: false, final false
static inline void EndArea() ;

/// @brief Method EndHorizontal, addr 0xb645208, size 0x4c, virtual false, abstract: false, final false
static inline void EndHorizontal() ;

/// @brief Method EndVertical, addr 0xb6456fc, size 0x4c, virtual false, abstract: false, final false
static inline void EndVertical() ;

/// @brief Method ExpandHeight, addr 0xb646314, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::GUILayoutOption* ExpandHeight(bool  expand) ;

/// @brief Method Height, addr 0xb642bf0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::GUILayoutOption* Height(float_t  height) ;

/// @brief Method HorizontalSlider, addr 0xb644738, size 0x9c, virtual false, abstract: false, final false
static inline float_t HorizontalSlider(float_t  value, float_t  leftValue, float_t  rightValue, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Label, addr 0xb643d80, size 0xa8, virtual false, abstract: false, final false
static inline void Label(::StringW  text, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Label, addr 0xb643ef4, size 0x70, virtual false, abstract: false, final false
static inline void Label(::StringW  text, ::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Space, addr 0xb644928, size 0x21c, virtual false, abstract: false, final false
static inline void Space(float_t  pixels) ;

/// @brief Method TextField, addr 0xb6442bc, size 0x80, virtual false, abstract: false, final false
static inline ::StringW TextField(::StringW  text, int32_t  maxLength, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Toggle, addr 0xb6445ac, size 0xb0, virtual false, abstract: false, final false
static inline bool Toggle(bool  value, ::StringW  text, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Width, addr 0xb642b54, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::GUILayoutOption* Width(float_t  width) ;

/// @brief Method Window, addr 0xb645ff4, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Window(int32_t  id, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUI_WindowFunction*  func, ::StringW  text, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUILayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUILayout(GUILayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUILayout(GUILayout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUILayout) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object, UnityEngine.GUILayoutOption, UnityEngine.Rect
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayout/LayoutedWindow
class CORDL_TYPE GUILayout_LayoutedWindow : public ::System::Object {
public:
// Declarations
/// @brief Field m_Func, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Func, put=__cordl_internal_set_m_Func)) ::UnityEngine::GUI_WindowFunction*  m_Func;

/// @brief Field m_Options, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Options, put=__cordl_internal_set_m_Options)) ::ArrayW<::UnityEngine::GUILayoutOption*>  m_Options;

/// @brief Field m_ScreenRect, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ScreenRect, put=__cordl_internal_set_m_ScreenRect)) ::UnityEngine::Rect  m_ScreenRect;

/// @brief Field m_Style, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Style, put=__cordl_internal_set_m_Style)) ::UnityEngine::GUIStyle*  m_Style;

/// @brief Method DoWindow, addr 0xb6463b0, size 0x144, virtual false, abstract: false, final false
inline void DoWindow(int32_t  windowID) ;

static inline ::UnityEngine::GUILayout_LayoutedWindow* New_ctor(::UnityEngine::GUI_WindowFunction*  f, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::ArrayW<::UnityEngine::GUILayoutOption*>  options, ::UnityEngine::GUIStyle*  style) ;

constexpr ::UnityEngine::GUI_WindowFunction* const& __cordl_internal_get_m_Func() const;

constexpr ::UnityEngine::GUI_WindowFunction*& __cordl_internal_get_m_Func() ;

constexpr ::ArrayW<::UnityEngine::GUILayoutOption*> const& __cordl_internal_get_m_Options() const;

constexpr ::ArrayW<::UnityEngine::GUILayoutOption*>& __cordl_internal_get_m_Options() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ScreenRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ScreenRect() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_m_Style() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_Style() ;

constexpr void __cordl_internal_set_m_Func(::UnityEngine::GUI_WindowFunction*  value) ;

constexpr void __cordl_internal_set_m_Options(::ArrayW<::UnityEngine::GUILayoutOption*>  value) ;

constexpr void __cordl_internal_set_m_ScreenRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_m_Style(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0xb646254, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GUI_WindowFunction*  f, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::ArrayW<::UnityEngine::GUILayoutOption*>  options, ::UnityEngine::GUIStyle*  style) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUILayout_LayoutedWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUILayout_LayoutedWindow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUILayout_LayoutedWindow(GUILayout_LayoutedWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUILayout_LayoutedWindow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUILayout_LayoutedWindow(GUILayout_LayoutedWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28817};

/// @brief Field m_Func, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GUI_WindowFunction*  ___m_Func;

/// @brief Field m_ScreenRect, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rect  ___m_ScreenRect;

/// @brief Field m_Options, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::GUILayoutOption*>  ___m_Options;

/// @brief Field m_Style, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ___m_Style;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUILayout_LayoutedWindow, ___m_Func) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayout_LayoutedWindow, ___m_ScreenRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayout_LayoutedWindow, ___m_Options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayout_LayoutedWindow, ___m_Style) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GUILayout_LayoutedWindow) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine
