#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToObservable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToObservable_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToObservable_1_CancellationTokenDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
template<typename T>
struct ToObservable_1__RunAsync_d__3;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T>
class IObserver_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToObservable_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToObservable_1_CancellationTokenDisposable;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToObservable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToObservable_1, "Cysharp.Threading.Tasks.Linq", "ToObservable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable, "Cysharp.Threading.Tasks.Linq", "ToObservable`1/CancellationTokenDisposable");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToObservable`1<T>
class CORDL_TYPE ToObservable_1 : public ::System::Object {
public:
// Declarations
using CancellationTokenDisposable = ::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>;

using _RunAsync_d__3 = ::GlobalNamespace::ToObservable_1__RunAsync_d__3<T>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source;

/// @brief Convert operator to "::System::IObservable_1<T>"
constexpr operator  ::System::IObservable_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToObservable`1::<RunAsync>d__3<T>))]
/// @brief Method RunAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid RunAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  src, ::System::IObserver_1<T>*  observer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<T>*  observer) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source) ;

/// @brief Convert to "::System::IObservable_1<T>"
constexpr ::System::IObservable_1<T>* i___System__IObservable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToObservable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToObservable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToObservable_1(ToObservable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToObservable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToObservable_1(ToObservable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20873};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToObservable`1/CancellationTokenDisposable<T>
class CORDL_TYPE ToObservable_1_CancellationTokenDisposable : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Token)) ::System::Threading::CancellationToken  Token;

/// @brief Field cts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cts, put=__cordl_internal_set_cts)) ::System::Threading::CancellationTokenSource*  cts;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>* New_ctor() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cts() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cts() ;

constexpr void __cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Token, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_Token() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToObservable_1_CancellationTokenDisposable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToObservable_1_CancellationTokenDisposable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToObservable_1_CancellationTokenDisposable(ToObservable_1_CancellationTokenDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToObservable_1_CancellationTokenDisposable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToObservable_1_CancellationTokenDisposable(ToObservable_1_CancellationTokenDisposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20871};

/// @brief Field cts, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
