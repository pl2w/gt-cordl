#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter)
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
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/UnityWebRequestAsyncOperationAwaiter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationAwaiter
struct CORDL_TYPE UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xae30e48, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* GetResult() ;

/// @brief Method OnCompleted, addr 0xae30efc, size 0x4, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xae30f00, size 0xe8, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xae2b4ec, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0xae30e30, size 0x18, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None, comment: None }]
constexpr UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
