#pragma once
// IWYU pragma private; include "Liv/Lck/LckPublicApiEventBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__ILckResult_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckPublicApiEventBridge)
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
template<typename TEvent,typename TResult>
class LckPublicApiEventBridge___c__3_2;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class LckPublicApiEventBridge;
}
namespace Liv::Lck {
template<typename TEvent,typename TResult>
class LckPublicApiEventBridge___c__3_2;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckPublicApiEventBridge*);
MARK_GEN_REF_T_PTR(::Liv::Lck::LckPublicApiEventBridge___c__3_2);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPublicApiEventBridge*, "Liv.Lck", "LckPublicApiEventBridge");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::LckPublicApiEventBridge___c__3_2, "Liv.Lck", "LckPublicApiEventBridge/<>c__3`2");
// Dependencies Liv.Lck.ILckResult, Liv.Lck.LckEvents::IEventWithResult`1<TResult>, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPublicApiEventBridge
class CORDL_TYPE LckPublicApiEventBridge : public ::System::Object {
public:
// Declarations
template<typename TEvent,typename TResult>
using __c__3_2 = ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent, TResult>;

/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _forwarders, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwarders, put=__cordl_internal_set__forwarders)) ::System::Collections::Generic::List_1<::System::IDisposable*>*  _forwarders;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9ce15fc, size 0x1d4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Forward, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent,typename TResult>
requires(::cordl_internals::type_constraint<TEvent, ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*> && ::cordl_internals::type_constraint<TResult, ::Liv::Lck::ILckResult*>)
inline void Forward(::System::Action_1<TResult>*  publicEventInvoker) ;

/// @brief Method Forward, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent,typename TResult>
inline void Forward(::System::Func_2<TEvent,TResult>*  selector, ::System::Action_1<TResult>*  publicEventInvoker) ;

static inline ::Liv::Lck::LckPublicApiEventBridge* New_ctor(::Liv::Lck::ILckEventBus*  eventBus) ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__forwarders() const;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__forwarders() ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__forwarders(::System::Collections::Generic::List_1<::System::IDisposable*>*  value) ;

/// @brief Method .ctor, addr 0x9ce1560, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPublicApiEventBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPublicApiEventBridge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPublicApiEventBridge(LckPublicApiEventBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPublicApiEventBridge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPublicApiEventBridge(LckPublicApiEventBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24707};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _forwarders, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IDisposable*>*  ____forwarders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPublicApiEventBridge, ____eventBus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPublicApiEventBridge, ____forwarders) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPublicApiEventBridge) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// cpp template
template<typename TEvent,typename TResult>
// Is value type: false
// CS Name: Liv.Lck.LckPublicApiEventBridge/<>c__3`2<TEvent,TResult>
class CORDL_TYPE LckPublicApiEventBridge___c__3_2 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<TEvent,TResult>*  __9__3_0;

static inline ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>* New_ctor() ;

/// @brief Method <Forward>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult _Forward_b__3_0(TEvent  evt) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>* getStaticF___9() ;

static inline ::System::Func_2<TEvent,TResult>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<TEvent,TResult>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPublicApiEventBridge___c__3_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPublicApiEventBridge___c__3_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPublicApiEventBridge___c__3_2(LckPublicApiEventBridge___c__3_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPublicApiEventBridge___c__3_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPublicApiEventBridge___c__3_2(LckPublicApiEventBridge___c__3_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24706};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
