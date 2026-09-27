#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_DynamicCallbackList_def.hpp"
CORDL_MODULE_EXPORT(EventCallbackRegistry)
namespace GlobalNamespace {
struct EventCallbackRegistry_DynamicCallbackList;
}
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
template<typename TEventType,typename TCallbackArgs>
class EventCallback_2;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::EventCallbackRegistry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::EventCallbackRegistry*, "UnityEngine.UIElements", "EventCallbackRegistry");
// Dependencies System.Object, UnityEngine.UIElements.EventBase`1<T>, UnityEngine.UIElements.EventCallbackRegistry::DynamicCallbackList
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackRegistry
class CORDL_TYPE EventCallbackRegistry : public ::System::Object {
public:
// Declarations
using DynamicCallbackList = ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList;

/// @brief Field m_BubbleUpCallbacks, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_BubbleUpCallbacks, put=__cordl_internal_set_m_BubbleUpCallbacks)) ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  m_BubbleUpCallbacks;

/// @brief Field m_TrickleDownCallbacks, offset 0x10, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_TrickleDownCallbacks, put=__cordl_internal_set_m_TrickleDownCallbacks)) ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  m_TrickleDownCallbacks;

/// @brief Field s_ListPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ListPool, put=setStaticF_s_ListPool)) ::UnityEngine::UIElements::EventCallbackListPool*  s_ListPool;

/// @brief Method GetCallbackList, addr 0xb89039c, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList*  initializer) ;

/// @brief Method GetDynamicCallbackList, addr 0xb89046c, size 0x14, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList> GetDynamicCallbackList(::UnityEngine::UIElements::TrickleDown  useTrickleDown) ;

static inline ::UnityEngine::UIElements::EventCallbackRegistry* New_ctor() ;

/// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline void RegisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_1<TEventType>*  callback, ::UnityEngine::UIElements::TrickleDown  useTrickleDown, ::UnityEngine::UIElements::InvokePolicy  invokePolicy) ;

/// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEventType,typename TCallbackArgs>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline void RegisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_2<TEventType,TCallbackArgs>*  callback, TCallbackArgs  userArgs, ::UnityEngine::UIElements::TrickleDown  useTrickleDown, ::UnityEngine::UIElements::InvokePolicy  invokePolicy) ;

/// @brief Method ReleaseCallbackList, addr 0xb890404, size 0x68, virtual false, abstract: false, final false
static inline void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList*  toRelease) ;

/// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline bool UnregisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_1<TEventType>*  callback, ::UnityEngine::UIElements::TrickleDown  useTrickleDown) ;

/// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEventType,typename TCallbackArgs>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline bool UnregisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_2<TEventType,TCallbackArgs>*  callback, ::UnityEngine::UIElements::TrickleDown  useTrickleDown) ;

constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList const& __cordl_internal_get_m_BubbleUpCallbacks() const;

constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList& __cordl_internal_get_m_BubbleUpCallbacks() ;

constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList const& __cordl_internal_get_m_TrickleDownCallbacks() const;

constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList& __cordl_internal_get_m_TrickleDownCallbacks() ;

constexpr void __cordl_internal_set_m_BubbleUpCallbacks(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  value) ;

constexpr void __cordl_internal_set_m_TrickleDownCallbacks(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  value) ;

/// @brief Method .ctor, addr 0xb890480, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::EventCallbackListPool* getStaticF_s_ListPool() ;

static inline void setStaticF_s_ListPool(::UnityEngine::UIElements::EventCallbackListPool*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventCallbackRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventCallbackRegistry(EventCallbackRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventCallbackRegistry(EventCallbackRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7609};

/// @brief Field m_TrickleDownCallbacks, offset: 0x10, size: 0x28, def value: None
 ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  ___m_TrickleDownCallbacks;

/// @brief Field m_BubbleUpCallbacks, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  ___m_BubbleUpCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_TrickleDownCallbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_BubbleUpCallbacks) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::EventCallbackRegistry) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
