#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Cast_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorBase_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Cast_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TResult>
class Cast_1__Cast;
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
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TResult>
class Cast_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TResult>
class Cast_1__Cast;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Cast_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Cast_1__Cast);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Cast_1, "Cysharp.Threading.Tasks.Linq", "Cast`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Cast_1__Cast, "Cysharp.Threading.Tasks.Linq", "Cast`1/_Cast");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Cast`1<TResult>
class CORDL_TYPE Cast_1 : public ::System::Object {
public:
// Declarations
using _Cast = ::Cysharp::Threading::Tasks::Linq::Cast_1__Cast<TResult>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Cast_1<TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cast_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cast_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cast_1(Cast_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cast_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cast_1(Cast_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20450};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<TSource, TResult>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Cast`1/_Cast<TResult>
class CORDL_TYPE Cast_1__Cast : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<::System::Object*,TResult> {
public:
// Declarations
static inline ::Cysharp::Threading::Tasks::Linq::Cast_1__Cast<TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cast_1__Cast() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cast_1__Cast", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cast_1__Cast(Cast_1__Cast && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cast_1__Cast", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cast_1__Cast(Cast_1__Cast const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
