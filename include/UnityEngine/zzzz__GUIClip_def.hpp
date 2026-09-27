#pragma once
// IWYU pragma private; include "UnityEngine/GUIClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUIClip)
namespace GlobalNamespace {
struct GUIClip_ParentClipScope;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIClip*, "UnityEngine", "GUIClip");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
// [NativeHeader("Modules/IMGUI/GUIState.h")]
// [NativeHeader("Modules/IMGUI/GUIClip.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIClip
class CORDL_TYPE GUIClip : public ::System::Object {
public:
// Declarations
using ParentClipScope = ::GlobalNamespace::GUIClip_ParentClipScope;

/// [FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetUserMatrix")]
/// @brief Method GetMatrix, addr 0xb63ec88, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetMatrix() ;

/// @brief Method GetMatrix_Injected, addr 0xb643460, size 0x3c, virtual false, abstract: false, final false
static inline void GetMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// [FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetCount")]
/// @brief Method Internal_GetCount, addr 0xb6433a8, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetCount() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method Internal_Pop, addr 0xb6424f8, size 0x28, virtual false, abstract: false, final false
static inline void Internal_Pop() ;

/// @brief Method Internal_PopParentClip, addr 0xb6435c0, size 0x28, virtual false, abstract: false, final false
static inline void Internal_PopParentClip() ;

/// @brief Method Internal_Push, addr 0xb6432e8, size 0x64, virtual false, abstract: false, final false
static inline void Internal_Push(::UnityEngine::Rect  screenRect, ::UnityEngine::Vector2  scrollOffset, ::UnityEngine::Vector2  renderOffset, bool  resetOffset) ;

/// @brief Method Internal_PushParentClip, addr 0xb6434d8, size 0x38, virtual false, abstract: false, final false
static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4  objectTransform, ::UnityEngine::Rect  clipRect) ;

/// @brief Method Internal_PushParentClip, addr 0xb643510, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4  renderTransform, ::UnityEngine::Matrix4x4  inputTransform, ::UnityEngine::Rect  clipRect) ;

/// @brief Method Internal_PushParentClip_Injected, addr 0xb64356c, size 0x54, virtual false, abstract: false, final false
static inline void Internal_PushParentClip_Injected(::by_ref<::UnityEngine::Matrix4x4>  renderTransform, ::by_ref<::UnityEngine::Matrix4x4>  inputTransform, ::by_ref<::UnityEngine::Rect>  clipRect) ;

/// @brief Method Internal_Push_Injected, addr 0xb64334c, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_Push_Injected(::by_ref<::UnityEngine::Rect>  screenRect, ::by_ref<::UnityEngine::Vector2>  scrollOffset, ::by_ref<::UnityEngine::Vector2>  renderOffset, bool  resetOffset) ;

/// @brief Method Push, addr 0xb642488, size 0x4, virtual false, abstract: false, final false
static inline void Push(::UnityEngine::Rect  screenRect, ::UnityEngine::Vector2  scrollOffset, ::UnityEngine::Vector2  renderOffset, bool  resetOffset) ;

/// @brief Method SetMatrix, addr 0xb63ed38, size 0x3c, virtual false, abstract: false, final false
static inline void SetMatrix(::UnityEngine::Matrix4x4  m) ;

/// @brief Method SetMatrix_Injected, addr 0xb64349c, size 0x3c, virtual false, abstract: false, final false
static inline void SetMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  m) ;

/// @brief Method UnclipToWindow, addr 0xb6435e8, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UnclipToWindow(::UnityEngine::Vector2  pos) ;

/// [FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.UnclipToWindow")]
/// @brief Method UnclipToWindow_Vector2, addr 0xb6433d0, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UnclipToWindow_Vector2(::UnityEngine::Vector2  pos) ;

/// @brief Method UnclipToWindow_Vector2_Injected, addr 0xb64341c, size 0x44, virtual false, abstract: false, final false
static inline void UnclipToWindow_Vector2_Injected(::by_ref<::UnityEngine::Vector2>  pos, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetVisibleRect")]
/// @brief Method get_visibleRect, addr 0xb641960, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect get_visibleRect() ;

/// @brief Method get_visibleRect_Injected, addr 0xb6432ac, size 0x3c, virtual false, abstract: false, final false
static inline void get_visibleRect_Injected(::by_ref<::UnityEngine::Rect>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIClip(GUIClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIClip(GUIClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIClip) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
