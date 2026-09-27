#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SequenceEqual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SequenceEqual)
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
struct SequenceEqual__SequenceEqualAsync_d__0_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class SequenceEqual;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::SequenceEqual*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::SequenceEqual*, "Cysharp.Threading.Tasks.Linq", "SequenceEqual");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SequenceEqual
class CORDL_TYPE SequenceEqual : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _SequenceEqualAsync_d__0_1 = ::GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.SequenceEqual::<SequenceEqualAsync>d__0`1<TSource>))]
/// @brief Method SequenceEqualAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> SequenceEqualAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceEqual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceEqual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceEqual(SequenceEqual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceEqual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceEqual(SequenceEqual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::SequenceEqual) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
