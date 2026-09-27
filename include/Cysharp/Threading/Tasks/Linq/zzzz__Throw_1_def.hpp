#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Throw_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Throw_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TValue>
class Throw_1__Throw;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TValue>
class Throw_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TValue>
class Throw_1__Throw;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Throw_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Throw_1__Throw);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Throw_1, "Cysharp.Threading.Tasks.Linq", "Throw`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Throw_1__Throw, "Cysharp.Threading.Tasks.Linq", "Throw`1/_Throw");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Throw`1<TValue>
class CORDL_TYPE Throw_1 : public ::System::Object {
public:
// Declarations
using _Throw = ::Cysharp::Threading::Tasks::Linq::Throw_1__Throw<TValue>;

/// @brief Field exception, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Exception*  exception;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Throw_1<TValue>* New_ctor(::System::Exception*  exception) ;

constexpr ::System::Exception* const& __cordl_internal_get_exception() const;

constexpr ::System::Exception*& __cordl_internal_get_exception() ;

constexpr void __cordl_internal_set_exception(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TValue_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Throw_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Throw_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Throw_1(Throw_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Throw_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Throw_1(Throw_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20844};

/// @brief Field exception, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<TValue>
class CORDL_TYPE Throw_1__Throw : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) TValue  Current;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field exception, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Exception*  exception;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Throw_1__Throw<TValue>* New_ctor(::System::Exception*  exception, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Exception* const& __cordl_internal_get_exception() const;

constexpr ::System::Exception*& __cordl_internal_get_exception() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_exception(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TValue_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Throw_1__Throw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Throw_1__Throw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Throw_1__Throw(Throw_1__Throw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Throw_1__Throw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Throw_1__Throw(Throw_1__Throw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20843};

/// @brief Field exception, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___exception;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
