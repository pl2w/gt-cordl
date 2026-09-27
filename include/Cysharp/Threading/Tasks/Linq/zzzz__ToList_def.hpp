#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToList)
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
struct ToList__ToListAsync_d__0_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class ToList;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::ToList*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::ToList*, "Cysharp.Threading.Tasks.Linq", "ToList");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToList
class CORDL_TYPE ToList : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _ToListAsync_d__0_1 = ::GlobalNamespace::ToList__ToListAsync_d__0_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToList::<ToListAsync>d__0`1<TSource>))]
/// @brief Method ToListAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<TSource>*> ToListAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToList(ToList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToList(ToList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::ToList) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
