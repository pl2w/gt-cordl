#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToUniTaskAsyncEnumerableUniTask_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToUniTaskAsyncEnumerableUniTask_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename T>
struct _ToUniTaskAsyncEnumerableUniTask_ToUniTaskAsyncEnumerableUniTask_1__MoveNextAsync_d__7;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToUniTaskAsyncEnumerableUniTask_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1, "Cysharp.Threading.Tasks.Linq", "ToUniTaskAsyncEnumerableUniTask`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask, "Cysharp.Threading.Tasks.Linq", "ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask");
// Dependencies Cysharp.Threading.Tasks.UniTask`1<T>, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1<T>
class CORDL_TYPE ToUniTaskAsyncEnumerableUniTask_1 : public ::System::Object {
public:
// Declarations
using _ToUniTaskAsyncEnumerableUniTask = ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask<T>;

/// @brief Field source, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::UniTask_1<T>  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  source) ;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T> const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::UniTask_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToUniTaskAsyncEnumerableUniTask_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableUniTask_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToUniTaskAsyncEnumerableUniTask_1(ToUniTaskAsyncEnumerableUniTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableUniTask_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToUniTaskAsyncEnumerableUniTask_1(ToUniTaskAsyncEnumerableUniTask_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20881};

/// @brief Field source, offset: 0x10, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.UniTask`1<T>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<T>
class CORDL_TYPE ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask : public ::System::Object {
public:
// Declarations
using _MoveNextAsync_d__7 = ::GlobalNamespace::_ToUniTaskAsyncEnumerableUniTask_ToUniTaskAsyncEnumerableUniTask_1__MoveNextAsync_d__7<T>;

 __declspec(property(get=get_Current)) T  Current;

/// @brief Field called, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_called, put=__cordl_internal_set_called)) bool  called;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field current, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) T  current;

/// @brief Field source, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::UniTask_1<T>  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1::_ToUniTaskAsyncEnumerableUniTask::<MoveNextAsync>d__7<T>))]
/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask<T>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  source, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr bool const& __cordl_internal_get_called() const;

constexpr bool& __cordl_internal_get_called() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr T const& __cordl_internal_get_current() const;

constexpr T& __cordl_internal_get_current() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T> const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_called(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_current(T  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::UniTask_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask(ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask(ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20880};

/// @brief Field source, offset: 0x10, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  ___source;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field current, offset: 0x30, size: 0x8, def value: None
 T  ___current;

/// @brief Field called, offset: 0x38, size: 0x1, def value: None
 bool  ___called;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
