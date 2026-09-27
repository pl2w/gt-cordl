#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Range.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Range)
namespace Cysharp::Threading::Tasks::Linq {
class Range__Range;
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
class Range;
}
namespace Cysharp::Threading::Tasks::Linq {
class Range__Range;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Range*);
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Range__Range*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Range*, "Cysharp.Threading.Tasks.Linq", "Range");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Range__Range*, "Cysharp.Threading.Tasks.Linq", "Range/_Range");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Range
class CORDL_TYPE Range : public ::System::Object {
public:
// Declarations
using _Range = ::Cysharp::Threading::Tasks::Linq::Range__Range;

/// @brief Field end, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field start, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) int32_t  start;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0xae1f618, size 0x9c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<int32_t>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Range* New_ctor(int32_t  start, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr int32_t const& __cordl_internal_get_start() const;

constexpr int32_t& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_start(int32_t  value) ;

/// @brief Method .ctor, addr 0xae06718, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_int32_t_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Range() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Range", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Range(Range && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Range", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Range(Range const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20715};

/// @brief Field start, offset: 0x10, size: 0x4, def value: None
 int32_t  ___start;

/// @brief Field end, offset: 0x14, size: 0x4, def value: None
 int32_t  ___end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Range, ___start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Range, ___end) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Range) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Range/_Range
class CORDL_TYPE Range__Range : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) int32_t  Current;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field current, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) int32_t  current;

/// @brief Field end, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field start, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) int32_t  start;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<int32_t>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<int32_t>*() noexcept;

/// @brief Method DisposeAsync, addr 0xae1f7d4, size 0xc, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0xae1f70c, size 0xc8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Range__Range* New_ctor(int32_t  start, int32_t  end, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr int32_t const& __cordl_internal_get_current() const;

constexpr int32_t& __cordl_internal_get_current() ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr int32_t const& __cordl_internal_get_start() const;

constexpr int32_t& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_current(int32_t  value) ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_start(int32_t  value) ;

/// @brief Method .ctor, addr 0xae1f6b4, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  end, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0xae1f704, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<int32_t>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<int32_t>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_int32_t_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Range__Range() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Range__Range", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Range__Range(Range__Range && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Range__Range", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Range__Range(Range__Range const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20714};

/// @brief Field start, offset: 0x10, size: 0x4, def value: None
 int32_t  ___start;

/// @brief Field end, offset: 0x14, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field current, offset: 0x18, size: 0x4, def value: None
 int32_t  ___current;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Range__Range, ___start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Range__Range, ___end) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Range__Range, ___current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Range__Range, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Range__Range) == 0x28, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
