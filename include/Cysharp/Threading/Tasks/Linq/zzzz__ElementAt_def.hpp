#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ElementAt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementAt)
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
struct ElementAt__ElementAtAsync_d__0_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class ElementAt;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::ElementAt*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::ElementAt*, "Cysharp.Threading.Tasks.Linq", "ElementAt");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ElementAt
class CORDL_TYPE ElementAt : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _ElementAtAsync_d__0_1 = ::GlobalNamespace::ElementAt__ElementAtAsync_d__0_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ElementAt::<ElementAtAsync>d__0`1<TSource>))]
/// @brief Method ElementAtAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> ElementAtAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  index, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElementAt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElementAt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ElementAt(ElementAt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElementAt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElementAt(ElementAt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::ElementAt) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
