#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Repeat_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Repeat_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class Repeat_1__Repeat;
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
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class Repeat_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class Repeat_1__Repeat;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Repeat_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Repeat_1, "Cysharp.Threading.Tasks.Linq", "Repeat`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat, "Cysharp.Threading.Tasks.Linq", "Repeat`1/_Repeat");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Repeat`1<TElement>
class CORDL_TYPE Repeat_1 : public ::System::Object {
public:
// Declarations
using _Repeat = ::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>;

/// @brief Field count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field element, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_element, put=__cordl_internal_set_element)) TElement  element;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>* New_ctor(TElement  element, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr TElement const& __cordl_internal_get_element() const;

constexpr TElement& __cordl_internal_get_element() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_element(TElement  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TElement  element, int32_t  count) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TElement_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Repeat_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Repeat_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Repeat_1(Repeat_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Repeat_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Repeat_1(Repeat_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20717};

/// @brief Field element, offset: 0x10, size: 0x8, def value: None
 TElement  ___element;

/// @brief Field count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Repeat`1/_Repeat<TElement>
class CORDL_TYPE Repeat_1__Repeat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) TElement  Current;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field element, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_element, put=__cordl_internal_set_element)) TElement  element;

/// @brief Field remaining, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_remaining, put=__cordl_internal_set_remaining)) int32_t  remaining;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>* New_ctor(TElement  element, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr TElement const& __cordl_internal_get_element() const;

constexpr TElement& __cordl_internal_get_element() ;

constexpr int32_t const& __cordl_internal_get_remaining() const;

constexpr int32_t& __cordl_internal_get_remaining() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_element(TElement  value) ;

constexpr void __cordl_internal_set_remaining(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TElement  element, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TElement get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TElement_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Repeat_1__Repeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Repeat_1__Repeat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Repeat_1__Repeat(Repeat_1__Repeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Repeat_1__Repeat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Repeat_1__Repeat(Repeat_1__Repeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20716};

/// @brief Field element, offset: 0x10, size: 0x8, def value: None
 TElement  ___element;

/// @brief Field count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field remaining, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___remaining;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
