#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ToArray)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct ToArray__ToArrayAsync_d__0_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class ToArray;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::ToArray*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::ToArray*, "Cysharp.Threading.Tasks.Linq", "ToArray");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToArray
class CORDL_TYPE ToArray : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _ToArrayAsync_d__0_1 = ::GlobalNamespace::ToArray__ToArrayAsync_d__0_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToArray::<ToArrayAsync>d__0`1<TSource>))]
/// @brief Method ToArrayAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<TSource>> ToArrayAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToArray(ToArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToArray(ToArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::ToArray) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
