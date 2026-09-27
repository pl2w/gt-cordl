#pragma once
// IWYU pragma private; include "Liv/Lck/LckEventErrorLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__ILckResult_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckEventErrorLogger)
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckResult;
}
namespace Liv::Lck {
template<typename TEvent>
class LckEventErrorLogger_EventSubscription_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class LckEventErrorLogger;
}
namespace Liv::Lck {
template<typename TEvent>
class LckEventErrorLogger_EventSubscription_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckEventErrorLogger*);
MARK_GEN_REF_T_PTR(::Liv::Lck::LckEventErrorLogger_EventSubscription_1);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckEventErrorLogger*, "Liv.Lck", "LckEventErrorLogger");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::LckEventErrorLogger_EventSubscription_1, "Liv.Lck", "LckEventErrorLogger/EventSubscription`1");
// Dependencies Liv.Lck.ILckResult, Liv.Lck.LckEvents::IEventWithResult`1<TResult>, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckEventErrorLogger
class CORDL_TYPE LckEventErrorLogger : public ::System::Object {
public:
// Declarations
template<typename TEvent>
using EventSubscription_1 = ::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>;

/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _logAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__logAction, put=__cordl_internal_set__logAction)) ::System::Action_1<::Liv::Lck::ILckResult*>*  _logAction;

/// @brief Field _subscriptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscriptions, put=__cordl_internal_set__subscriptions)) ::System::Collections::Generic::List_1<::System::IDisposable*>*  _subscriptions;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9ce138c, size 0x1d4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Monitor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent,typename TResult>
requires(::cordl_internals::type_constraint<TEvent, ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*> && ::cordl_internals::type_constraint<TResult, ::Liv::Lck::ILckResult*>)
inline void Monitor() ;

static inline ::Liv::Lck::LckEventErrorLogger* New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<::Liv::Lck::ILckResult*>*  logAction) ;

/// @brief Method OnEventReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent,typename TResult>
requires(::cordl_internals::type_constraint<TEvent, ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*> && ::cordl_internals::type_constraint<TResult, ::Liv::Lck::ILckResult*>)
inline void OnEventReceived(TEvent  evt) ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::System::Action_1<::Liv::Lck::ILckResult*>* const& __cordl_internal_get__logAction() const;

constexpr ::System::Action_1<::Liv::Lck::ILckResult*>*& __cordl_internal_get__logAction() ;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__subscriptions() const;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__subscriptions() ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__logAction(::System::Action_1<::Liv::Lck::ILckResult*>*  value) ;

constexpr void __cordl_internal_set__subscriptions(::System::Collections::Generic::List_1<::System::IDisposable*>*  value) ;

/// @brief Method .ctor, addr 0x9ce12d4, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<::Liv::Lck::ILckResult*>*  logAction) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEventErrorLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEventErrorLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEventErrorLogger(LckEventErrorLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEventErrorLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEventErrorLogger(LckEventErrorLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24704};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _logAction, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::ILckResult*>*  ____logAction;

/// @brief Field _subscriptions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IDisposable*>*  ____subscriptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckEventErrorLogger, ____eventBus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEventErrorLogger, ____logAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEventErrorLogger, ____subscriptions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckEventErrorLogger) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
// Dependencies System.Object
namespace Liv::Lck {
// cpp template
template<typename TEvent>
// Is value type: false
// CS Name: Liv.Lck.LckEventErrorLogger/EventSubscription`1<TEvent>
class CORDL_TYPE LckEventErrorLogger_EventSubscription_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::System::Action_1<TEvent>*  _callback;

/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>* New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<TEvent>*  callback) ;

constexpr ::System::Action_1<TEvent>* const& __cordl_internal_get__callback() const;

constexpr ::System::Action_1<TEvent>*& __cordl_internal_get__callback() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr void __cordl_internal_set__callback(::System::Action_1<TEvent>*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<TEvent>*  callback) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEventErrorLogger_EventSubscription_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEventErrorLogger_EventSubscription_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEventErrorLogger_EventSubscription_1(LckEventErrorLogger_EventSubscription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEventErrorLogger_EventSubscription_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEventErrorLogger_EventSubscription_1(LckEventErrorLogger_EventSubscription_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24703};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<TEvent>*  ____callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
