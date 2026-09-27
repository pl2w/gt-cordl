#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AddressablesAsyncExtensions_AsyncOperationHandleAwaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AddressablesAsyncExtensions_AsyncOperationHandleAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct AddressablesAsyncExtensions_AsyncOperationHandleAwaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter, "Cysharp.Threading.Tasks", "AddressablesAsyncExtensions/AsyncOperationHandleAwaiter");
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.AddressablesAsyncExtensions/AsyncOperationHandleAwaiter
struct CORDL_TYPE AddressablesAsyncExtensions_AsyncOperationHandleAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xade2618, size 0x94, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xade26ac, size 0x4, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xade26b0, size 0xe4, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xade25dc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method get_IsCompleted, addr 0xade2610, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddressablesAsyncExtensions_AsyncOperationHandleAwaiter() ;

// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*", modifiers: "", def_value: None, comment: None }]
constexpr AddressablesAsyncExtensions_AsyncOperationHandleAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field handle, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle;

/// @brief Field continuationAction, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter, continuationAction) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
