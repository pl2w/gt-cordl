#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancelableAsyncEnumerable`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UniTaskCancelableAsyncEnumerable`1_Enumerator)
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
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct UniTaskCancelableAsyncEnumerable_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator, "Cysharp.Threading.Tasks", "UniTaskCancelableAsyncEnumerable`1/Enumerator");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskCancelableAsyncEnumerable`1/Enumerator<T>
struct CORDL_TYPE UniTaskCancelableAsyncEnumerable_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskCancelableAsyncEnumerable_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "enumerator", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskCancelableAsyncEnumerable_1_Enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field enumerator, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
