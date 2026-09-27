#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FocusController)
namespace GlobalNamespace {
struct FocusController_FocusedElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusController;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::FocusController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FocusController*, "UnityEngine.UIElements", "FocusController");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusController
class CORDL_TYPE FocusController : public ::System::Object {
public:
// Declarations
using FocusedElement = ::GlobalNamespace::FocusController_FocusedElement;

/// @brief Field <focusRing>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__focusRing_k__BackingField, put=__cordl_internal_set__focusRing_k__BackingField)) ::UnityEngine::UIElements::IFocusRing*  _focusRing_k__BackingField;

/// @brief Field <imguiKeyboardControl>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__imguiKeyboardControl_k__BackingField, put=__cordl_internal_set__imguiKeyboardControl_k__BackingField)) int32_t  _imguiKeyboardControl_k__BackingField;

 __declspec(property(get=get_focusRing)) ::UnityEngine::UIElements::IFocusRing*  focusRing;

 __declspec(property(get=get_focusedElement)) ::UnityEngine::UIElements::Focusable*  focusedElement;

 __declspec(property(get=get_imguiKeyboardControl, put=set_imguiKeyboardControl)) int32_t  imguiKeyboardControl;

/// @brief Field m_FocusedElements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusedElements, put=__cordl_internal_set_m_FocusedElements)) ::System::Collections::Generic::List_1<::GlobalNamespace::FocusController_FocusedElement>*  m_FocusedElements;

/// @brief Field m_LastFocusedElement, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastFocusedElement, put=__cordl_internal_set_m_LastFocusedElement)) ::UnityEngine::UIElements::Focusable*  m_LastFocusedElement;

/// @brief Field m_LastPendingFocusedElement, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastPendingFocusedElement, put=__cordl_internal_set_m_LastPendingFocusedElement)) ::UnityEngine::UIElements::Focusable*  m_LastPendingFocusedElement;

/// @brief Field m_PendingFocusCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PendingFocusCount, put=__cordl_internal_set_m_PendingFocusCount)) int32_t  m_PendingFocusCount;

/// @brief Field m_SelectedTextElement, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedTextElement, put=__cordl_internal_set_m_SelectedTextElement)) ::UnityEngine::UIElements::TextElement*  m_SelectedTextElement;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(put=set_selectedTextElement)) ::UnityEngine::UIElements::TextElement*  selectedTextElement;

/// @brief Method AboutToGrabFocus, addr 0xb8a3340, size 0x17c, virtual false, abstract: false, final false
inline void AboutToGrabFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method AboutToReleaseFocus, addr 0xb8a2e44, size 0x17c, virtual false, abstract: false, final false
inline void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method Blur, addr 0xb8a15e0, size 0x58, virtual false, abstract: false, final false
inline void Blur(::UnityEngine::UIElements::Focusable*  focusable, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method BlurLastFocusedElement, addr 0xb8a288c, size 0xa8, virtual false, abstract: false, final false
inline void BlurLastFocusedElement() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method DoFocusChange, addr 0xb8a2934, size 0x74, virtual false, abstract: false, final false
inline void DoFocusChange(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method FocusNextInDirection, addr 0xb8a2d60, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* FocusNextInDirection(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction) ;

/// @brief Method GetFocusTargets, addr 0xb8a29a8, size 0x174, virtual false, abstract: false, final false
static inline void GetFocusTargets(::UnityEngine::UIElements::Focusable*  f, ::System::Collections::Generic::List_1<::GlobalNamespace::FocusController_FocusedElement>*  outTargets) ;

/// @brief Method GetFocusableParentForPointerEvent, addr 0xb8a3b48, size 0x160, virtual false, abstract: false, final false
inline bool GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable*  target, ::by_ref<::UnityEngine::UIElements::Focusable*>  effectiveTarget) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method GetLeafFocusedElement, addr 0xb8a2698, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* GetLeafFocusedElement() ;

/// @brief Method GetRetargetedFocusedElement, addr 0xb8a21d8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement*  retargetAgainst) ;

/// @brief Method GrabFocus, addr 0xb8a34bc, size 0x384, virtual false, abstract: false, final false
inline void GrabFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection*  direction, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method IgnoreEvent, addr 0xb8a240c, size 0x11c, virtual false, abstract: false, final false
inline void IgnoreEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method IsFocused, addr 0xb8a2528, size 0x170, virtual false, abstract: false, final false
inline bool IsFocused(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method IsLocalElement, addr 0xb8a23d0, size 0x3c, virtual false, abstract: false, final false
inline bool IsLocalElement(::UnityEngine::UIElements::Focusable*  f) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method IsPendingFocus, addr 0xb8a273c, size 0xc8, virtual false, abstract: false, final false
inline bool IsPendingFocus(::UnityEngine::UIElements::Focusable*  f) ;

static inline ::UnityEngine::UIElements::FocusController* New_ctor(::UnityEngine::UIElements::IFocusRing*  focusRing) ;

/// @brief Method ProcessPendingFocusChange, addr 0xb8a2b1c, size 0x244, virtual false, abstract: false, final false
inline void ProcessPendingFocusChange(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method ReevaluateFocus, addr 0xb8a3a90, size 0xb8, virtual false, abstract: false, final false
inline void ReevaluateFocus() ;

/// @brief Method ReleaseFocus, addr 0xb8a2fc0, size 0x380, virtual false, abstract: false, final false
inline void ReleaseFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method SetFocusToLastFocusedElement, addr 0xb8a2804, size 0x88, virtual false, abstract: false, final false
inline void SetFocusToLastFocusedElement() ;

/// @brief Method SwitchFocus, addr 0xb8a14f0, size 0xb8, virtual false, abstract: false, final false
inline void SwitchFocus(::UnityEngine::UIElements::Focusable*  newFocusedElement, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method SwitchFocus, addr 0xb8a1ae4, size 0x444, virtual false, abstract: false, final false
inline void SwitchFocus(::UnityEngine::UIElements::Focusable*  newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection*  direction, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method SwitchFocusOnEvent, addr 0xb8a3840, size 0x250, virtual false, abstract: false, final false
inline void SwitchFocusOnEvent(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method SyncIMGUIFocus, addr 0xb8a3cb8, size 0xf8, virtual false, abstract: false, final false
inline void SyncIMGUIFocus(int32_t  imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable*  imguiContainerHavingKeyboardControl, bool  forceSwitch) ;

constexpr ::UnityEngine::UIElements::IFocusRing* const& __cordl_internal_get__focusRing_k__BackingField() const;

constexpr ::UnityEngine::UIElements::IFocusRing*& __cordl_internal_get__focusRing_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__imguiKeyboardControl_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__imguiKeyboardControl_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FocusController_FocusedElement>* const& __cordl_internal_get_m_FocusedElements() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FocusController_FocusedElement>*& __cordl_internal_get_m_FocusedElements() ;

constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get_m_LastFocusedElement() const;

constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_LastFocusedElement() ;

constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get_m_LastPendingFocusedElement() const;

constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_LastPendingFocusedElement() ;

constexpr int32_t const& __cordl_internal_get_m_PendingFocusCount() const;

constexpr int32_t& __cordl_internal_get_m_PendingFocusCount() ;

constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_SelectedTextElement() const;

constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_SelectedTextElement() ;

constexpr void __cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing*  value) ;

constexpr void __cordl_internal_set__imguiKeyboardControl_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_FocusedElements(::System::Collections::Generic::List_1<::GlobalNamespace::FocusController_FocusedElement>*  value) ;

constexpr void __cordl_internal_set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable*  value) ;

constexpr void __cordl_internal_set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable*  value) ;

constexpr void __cordl_internal_set_m_PendingFocusCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_SelectedTextElement(::UnityEngine::UIElements::TextElement*  value) ;

/// @brief Method .ctor, addr 0xb8a2008, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::IFocusRing*  focusRing) ;

/// [CompilerGenerated]
/// @brief Method get_focusRing, addr 0xb8a20b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::IFocusRing* get_focusRing() ;

/// @brief Method get_focusedElement, addr 0xb8a2194, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* get_focusedElement() ;

/// [CompilerGenerated]
/// @brief Method get_imguiKeyboardControl, addr 0xb8a3ca8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_imguiKeyboardControl() ;

/// [CompilerGenerated]
/// @brief Method set_imguiKeyboardControl, addr 0xb8a3cb0, size 0x8, virtual false, abstract: false, final false
inline void set_imguiKeyboardControl(int32_t  value) ;

/// @brief Method set_selectedTextElement, addr 0xb8a20b8, size 0xdc, virtual false, abstract: false, final false
inline void set_selectedTextElement(::UnityEngine::UIElements::TextElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FocusController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusController(FocusController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusController(FocusController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7745};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <focusRing>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::IFocusRing*  ____focusRing_k__BackingField;

/// @brief Field m_SelectedTextElement, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextElement*  ___m_SelectedTextElement;

/// @brief Field m_FocusedElements, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FocusController_FocusedElement>*  ___m_FocusedElements;

/// @brief Field m_LastFocusedElement, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::Focusable*  ___m_LastFocusedElement;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field m_LastPendingFocusedElement, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::Focusable*  ___m_LastPendingFocusedElement;

/// @brief Field m_PendingFocusCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_PendingFocusCount;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <imguiKeyboardControl>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____imguiKeyboardControl_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FocusController, ____focusRing_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_SelectedTextElement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_FocusedElements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_LastFocusedElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_LastPendingFocusedElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_PendingFocusCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ____imguiKeyboardControl_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FocusController) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
