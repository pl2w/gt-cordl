#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry_DynamicCallbackList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackRegistry_DynamicCallbackList)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct EventCallbackRegistry_DynamicCallbackList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList, "UnityEngine.UIElements", "EventCallbackRegistry/DynamicCallbackList");
// Dependencies UnityEngine.UIElements.TrickleDown
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventCallbackRegistry/DynamicCallbackList
struct CORDL_TYPE EventCallbackRegistry_DynamicCallbackList {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb890ab0, size 0x10, virtual false, abstract: false, final false
inline void BeginInvoke() ;

/// @brief Method Create, addr 0xb8904f8, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList Create(::UnityEngine::UIElements::TrickleDown  useTrickleDown) ;

/// @brief Method EndInvoke, addr 0xb890ac0, size 0x274, virtual false, abstract: false, final false
inline void EndInvoke() ;

/// [NotNull]
/// [IsReadOnly]
/// @brief Method GetCallbackListForReading, addr 0xb890730, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForReading() ;

/// [NotNull]
/// @brief Method GetCallbackListForWriting, addr 0xb890634, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForWriting() ;

/// @brief Method Invoke, addr 0xb8908a4, size 0x20c, virtual false, abstract: false, final false
inline void Invoke(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, ::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method UnregisterCallback, addr 0xb890748, size 0x15c, virtual false, abstract: false, final false
inline bool UnregisterCallback(int64_t  eventTypeId, /* [NotNull] */ ::System::Delegate*  callback) ;

// Ctor Parameters []
// @brief default ctor
constexpr EventCallbackRegistry_DynamicCallbackList() ;

// Ctor Parameters [CppParam { name: "m_UseTrickleDown", ty: "::UnityEngine::UIElements::TrickleDown", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Callbacks", ty: "::UnityEngine::UIElements::EventCallbackList*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TemporaryCallbacks", ty: "::UnityEngine::UIElements::EventCallbackList*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_UnregisteredCallbacksDuringInvoke", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IsInvoking", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventCallbackRegistry_DynamicCallbackList(::UnityEngine::UIElements::TrickleDown  m_UseTrickleDown, ::UnityEngine::UIElements::EventCallbackList*  m_Callbacks, ::UnityEngine::UIElements::EventCallbackList*  m_TemporaryCallbacks, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*  m_UnregisteredCallbacksDuringInvoke, int32_t  m_IsInvoking) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7608};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_UseTrickleDown, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::UIElements::TrickleDown  m_UseTrickleDown;

/// [NotNull]
/// @brief Field m_Callbacks, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::EventCallbackList*  m_Callbacks;

/// [CanBeNull]
/// @brief Field m_TemporaryCallbacks, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::EventCallbackList*  m_TemporaryCallbacks;

/// [CanBeNull]
/// @brief Field m_UnregisteredCallbacksDuringInvoke, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*  m_UnregisteredCallbacksDuringInvoke;

/// @brief Field m_IsInvoking, offset: 0x20, size: 0x4, def value: None
 int32_t  m_IsInvoking;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList, m_UseTrickleDown) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList, m_Callbacks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList, m_TemporaryCallbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList, m_UnregisteredCallbacksDuringInvoke) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList, m_IsInvoking) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
