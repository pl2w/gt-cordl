#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Skip_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorBase_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Skip_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Skip_1__Skip;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Skip_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Skip_1__Skip;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Skip_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Skip_1__Skip);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Skip_1, "Cysharp.Threading.Tasks.Linq", "Skip`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Skip_1__Skip, "Cysharp.Threading.Tasks.Linq", "Skip`1/_Skip");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Skip`1<TSource>
class CORDL_TYPE Skip_1 : public ::System::Object {
public:
// Declarations
using _Skip = ::Cysharp::Threading::Tasks::Linq::Skip_1__Skip<TSource>;

/// @brief Field count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Skip_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Skip_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Skip_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Skip_1(Skip_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Skip_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Skip_1(Skip_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20752};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<TSource, TResult>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Skip`1/_Skip<TSource>
class CORDL_TYPE Skip_1__Skip : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource,TSource> {
public:
// Declarations
/// @brief Field count, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field index, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::Cysharp::Threading::Tasks::Linq::Skip_1__Skip<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result) ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Skip_1__Skip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Skip_1__Skip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Skip_1__Skip(Skip_1__Skip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Skip_1__Skip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Skip_1__Skip(Skip_1__Skip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20751};

/// @brief Field count, offset: 0x70, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field index, offset: 0x74, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
