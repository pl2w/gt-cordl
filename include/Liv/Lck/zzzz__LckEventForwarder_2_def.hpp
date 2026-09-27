#pragma once
// IWYU pragma private; include "Liv/Lck/LckEventForwarder_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckEventForwarder_2)
namespace Liv::Lck {
class ILckEventBus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
template<typename TEvent,typename TResult>
class LckEventForwarder_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Liv::Lck::LckEventForwarder_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::LckEventForwarder_2, "Liv.Lck", "LckEventForwarder`2");
// Dependencies System.Object
namespace Liv::Lck {
// cpp template
template<typename TEvent,typename TResult>
// Is value type: false
// CS Name: Liv.Lck.LckEventForwarder`2<TEvent,TResult>
class CORDL_TYPE LckEventForwarder_2 : public ::System::Object {
public:
// Declarations
/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _forwardingAction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardingAction, put=__cordl_internal_set__forwardingAction)) ::System::Action_1<TResult>*  _forwardingAction;

/// @brief Field _selector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::System::Func_2<TEvent,TResult>*  _selector;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Liv::Lck::LckEventForwarder_2<TEvent,TResult>* New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Func_2<TEvent,TResult>*  selector, ::System::Action_1<TResult>*  forwardingAction) ;

/// @brief Method OnEventReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnEventReceived(TEvent  evt) ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::System::Action_1<TResult>* const& __cordl_internal_get__forwardingAction() const;

constexpr ::System::Action_1<TResult>*& __cordl_internal_get__forwardingAction() ;

constexpr ::System::Func_2<TEvent,TResult>* const& __cordl_internal_get__selector() const;

constexpr ::System::Func_2<TEvent,TResult>*& __cordl_internal_get__selector() ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__forwardingAction(::System::Action_1<TResult>*  value) ;

constexpr void __cordl_internal_set__selector(::System::Func_2<TEvent,TResult>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Func_2<TEvent,TResult>*  selector, ::System::Action_1<TResult>*  forwardingAction) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEventForwarder_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEventForwarder_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEventForwarder_2(LckEventForwarder_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEventForwarder_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEventForwarder_2(LckEventForwarder_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24705};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _selector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TEvent,TResult>*  ____selector;

/// @brief Field _forwardingAction, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<TResult>*  ____forwardingAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
