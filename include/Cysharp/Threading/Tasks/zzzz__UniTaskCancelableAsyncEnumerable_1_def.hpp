#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancelableAsyncEnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniTaskCancelableAsyncEnumerable_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskCancelableAsyncEnumerable_1_Enumerator;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTaskCancelableAsyncEnumerable_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1, "Cysharp.Threading.Tasks", "UniTaskCancelableAsyncEnumerable`1");
// [IsReadOnly]
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskCancelableAsyncEnumerable`1<T>
struct CORDL_TYPE UniTaskCancelableAsyncEnumerable_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T> GetAsyncEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskCancelableAsyncEnumerable_1() ;

// Ctor Parameters [CppParam { name: "enumerable", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskCancelableAsyncEnumerable_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field enumerable, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
