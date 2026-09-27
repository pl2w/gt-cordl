#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnityAsyncExtensions_AssetBundleCreateRequestAwaiter)
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
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityAsyncExtensions_AssetBundleCreateRequestAwaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleCreateRequestAwaiter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestAwaiter
struct CORDL_TYPE UnityAsyncExtensions_AssetBundleCreateRequestAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xae30648, size 0x74, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AssetBundle> GetResult() ;

/// @brief Method OnCompleted, addr 0xae306bc, size 0x4, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xae306c0, size 0xe8, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xae2b040, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AssetBundleCreateRequest*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0xae30630, size 0x18, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleCreateRequestAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleCreateRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None, comment: None }]
constexpr UnityAsyncExtensions_AssetBundleCreateRequestAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AssetBundleCreateRequest*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
