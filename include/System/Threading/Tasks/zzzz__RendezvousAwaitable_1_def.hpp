#pragma once
// IWYU pragma private; include "System/Threading/Tasks/RendezvousAwaitable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RendezvousAwaitable_1)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template<typename TResult>
class RendezvousAwaitable_1___c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class RendezvousAwaitable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class RendezvousAwaitable_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Threading::Tasks::RendezvousAwaitable_1);
MARK_GEN_REF_T_PTR(::System::Threading::Tasks::RendezvousAwaitable_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Threading::Tasks::RendezvousAwaitable_1, "System.Threading.Tasks", "RendezvousAwaitable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Threading::Tasks::RendezvousAwaitable_1___c, "System.Threading.Tasks", "RendezvousAwaitable`1/<>c");
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.RendezvousAwaitable`1<TResult>
class CORDL_TYPE RendezvousAwaitable_1 : public ::System::Object {
public:
// Declarations
using __c = ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_RunContinuationsAsynchronously, put=set_RunContinuationsAsynchronously)) bool  RunContinuationsAsynchronously;

/// @brief Field <RunContinuationsAsynchronously>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__RunContinuationsAsynchronously_k__BackingField, put=__cordl_internal_set__RunContinuationsAsynchronously_k__BackingField)) bool  _RunContinuationsAsynchronously_k__BackingField;

/// @brief Field _continuation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__continuation, put=__cordl_internal_set__continuation)) ::System::Action*  _continuation;

/// @brief Field _error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__error, put=__cordl_internal_set__error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _error;

/// @brief Field _result, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) TResult  _result;

/// @brief Field s_completionSentinel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_completionSentinel, put=setStaticF_s_completionSentinel)) ::System::Action*  s_completionSentinel;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept;

/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>* GetAwaiter() ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult GetResult() ;

static inline ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>* New_ctor() ;

/// @brief Method NotifyAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void NotifyAwaiter() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(TResult  result) ;

/// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

constexpr bool const& __cordl_internal_get__RunContinuationsAsynchronously_k__BackingField() const;

constexpr bool& __cordl_internal_get__RunContinuationsAsynchronously_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__continuation() const;

constexpr ::System::Action*& __cordl_internal_get__continuation() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__error() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__error() ;

constexpr TResult const& __cordl_internal_get__result() const;

constexpr TResult& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__RunContinuationsAsynchronously_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__continuation(::System::Action*  value) ;

constexpr void __cordl_internal_set__error(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set__result(TResult  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_s_completionSentinel() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// [CompilerGenerated]
/// @brief Method get_RunContinuationsAsynchronously, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_RunContinuationsAsynchronously() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() noexcept;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() noexcept;

static inline void setStaticF_s_completionSentinel(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RunContinuationsAsynchronously, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_RunContinuationsAsynchronously(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendezvousAwaitable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendezvousAwaitable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RendezvousAwaitable_1(RendezvousAwaitable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendezvousAwaitable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendezvousAwaitable_1(RendezvousAwaitable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5904};

/// @brief Field _continuation, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ____continuation;

/// @brief Field _error, offset: 0x18, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ____error;

/// @brief Field _result, offset: 0x20, size: 0x8, def value: None
 TResult  ____result;

/// [CompilerGenerated]
/// @brief Field <RunContinuationsAsynchronously>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____RunContinuationsAsynchronously_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.RendezvousAwaitable`1/<>c<TResult>
class CORDL_TYPE RendezvousAwaitable_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*  __9;

static inline ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>* New_ctor() ;

/// @brief Method <.cctor>b__20_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__20_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>* getStaticF___9() ;

static inline void setStaticF___9(::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendezvousAwaitable_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendezvousAwaitable_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RendezvousAwaitable_1___c(RendezvousAwaitable_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendezvousAwaitable_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendezvousAwaitable_1___c(RendezvousAwaitable_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
