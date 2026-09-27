#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardNavigationManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
CORDL_MODULE_EXPORT(KeyboardNavigationManipulator)
namespace GlobalNamespace {
struct KeyboardNavigationManipulator___c__DisplayClass4_0;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::KeyboardNavigationManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::KeyboardNavigationManipulator*, "UnityEngine.UIElements", "KeyboardNavigationManipulator");
// Dependencies UnityEngine.UIElements.Manipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.KeyboardNavigationManipulator
class CORDL_TYPE KeyboardNavigationManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
// Declarations
using __c__DisplayClass4_0 = ::GlobalNamespace::KeyboardNavigationManipulator___c__DisplayClass4_0;

/// @brief Field m_Action, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Action, put=__cordl_internal_set_m_Action)) ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  m_Action;

/// @brief Method Invoke, addr 0xb8baaa8, size 0x1c, virtual false, abstract: false, final false
inline void Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation  operation, ::UnityEngine::UIElements::EventBase*  evt) ;

static inline ::UnityEngine::UIElements::KeyboardNavigationManipulator* New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  action) ;

/// @brief Method OnKeyDown, addr 0xb8ba978, size 0x50, virtual false, abstract: false, final false
inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt) ;

/// @brief Method OnNavigationCancel, addr 0xb8baac4, size 0x24, virtual false, abstract: false, final false
inline void OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent*  evt) ;

/// @brief Method OnNavigationMove, addr 0xb8bab0c, size 0x8c, virtual false, abstract: false, final false
inline void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent*  evt) ;

/// @brief Method OnNavigationSubmit, addr 0xb8baae8, size 0x24, virtual false, abstract: false, final false
inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent*  evt) ;

/// @brief Method RegisterCallbacksOnTarget, addr 0xb8ba568, size 0x204, virtual true, abstract: false, final false
inline void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget, addr 0xb8ba774, size 0x204, virtual true, abstract: false, final false
inline void UnregisterCallbacksFromTarget() ;

/// [CompilerGenerated]
/// @brief Method <OnKeyDown>g__GetOperation|4_0, addr 0xb8ba9c8, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::KeyboardNavigationOperation _OnKeyDown_g__GetOperation_4_0(::by_ref<::GlobalNamespace::KeyboardNavigationManipulator___c__DisplayClass4_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>* const& __cordl_internal_get_m_Action() const;

constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*& __cordl_internal_get_m_Action() ;

constexpr void __cordl_internal_set_m_Action(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  value) ;

/// @brief Method .ctor, addr 0xb8ba530, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardNavigationManipulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardNavigationManipulator(KeyboardNavigationManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardNavigationManipulator(KeyboardNavigationManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7809};

/// @brief Field m_Action, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  ___m_Action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::KeyboardNavigationManipulator, ___m_Action) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::KeyboardNavigationManipulator) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
