#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/TakeWhileInt_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorBase_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TakeWhileInt_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class TakeWhileInt_1__TakeWhileInt;
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
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class TakeWhileInt_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class TakeWhileInt_1__TakeWhileInt;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1__TakeWhileInt);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1, "Cysharp.Threading.Tasks.Linq", "TakeWhileInt`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1__TakeWhileInt, "Cysharp.Threading.Tasks.Linq", "TakeWhileInt`1/_TakeWhileInt");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.TakeWhileInt`1<TSource>
class CORDL_TYPE TakeWhileInt_1 : public ::System::Object {
public:
// Declarations
using _TakeWhileInt = ::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1__TakeWhileInt<TSource>;

/// @brief Field predicate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_3<TSource,int32_t,bool>*  predicate;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate) ;

constexpr ::System::Func_3<TSource,int32_t,bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_3<TSource,int32_t,bool>*& __cordl_internal_get_predicate() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_predicate(::System::Func_3<TSource,int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TakeWhileInt_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileInt_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TakeWhileInt_1(TakeWhileInt_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileInt_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TakeWhileInt_1(TakeWhileInt_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20834};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<TSource,int32_t,bool>*  ___predicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<TSource, TResult>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<TSource>
class CORDL_TYPE TakeWhileInt_1__TakeWhileInt : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource,TSource> {
public:
// Declarations
/// @brief Field index, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field predicate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_3<TSource,int32_t,bool>*  predicate;

static inline ::Cysharp::Threading::Tasks::Linq::TakeWhileInt_1__TakeWhileInt<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result) ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::System::Func_3<TSource,int32_t,bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_3<TSource,int32_t,bool>*& __cordl_internal_get_predicate() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_predicate(::System::Func_3<TSource,int32_t,bool>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TakeWhileInt_1__TakeWhileInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileInt_1__TakeWhileInt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TakeWhileInt_1__TakeWhileInt(TakeWhileInt_1__TakeWhileInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileInt_1__TakeWhileInt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TakeWhileInt_1__TakeWhileInt(TakeWhileInt_1__TakeWhileInt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20833};

/// @brief Field predicate, offset: 0x70, size: 0x8, def value: None
 ::System::Func_3<TSource,int32_t,bool>*  ___predicate;

/// @brief Field index, offset: 0x78, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
