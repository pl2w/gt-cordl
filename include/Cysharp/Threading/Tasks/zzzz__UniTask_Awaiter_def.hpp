#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniTask_Awaiter)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
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
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTask_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTask_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTask_Awaiter, "Cysharp.Threading.Tasks", "UniTask/Awaiter");
// [IsReadOnly]
// Dependencies Cysharp.Threading.Tasks.UniTask
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTask/Awaiter
struct CORDL_TYPE UniTask_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// [DebuggerHidden]
/// @brief Method GetResult, addr 0xadf0c14, size 0xb4, virtual false, abstract: false, final false
inline void GetResult() ;

/// [DebuggerHidden]
/// @brief Method OnCompleted, addr 0xadf0cc8, size 0x110, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// [DebuggerHidden]
/// @brief Method SourceOnCompleted, addr 0xadf0ee8, size 0xe8, virtual false, abstract: false, final false
inline void SourceOnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state) ;

/// [DebuggerHidden]
/// @brief Method UnsafeOnCompleted, addr 0xadf0dd8, size 0x110, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xadf0b14, size 0x10, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Cysharp::Threading::Tasks::UniTask>  task) ;

/// [DebuggerHidden]
/// @brief Method get_IsCompleted, addr 0xadf0b24, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTask_Awaiter() ;

// Ctor Parameters [CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }]
constexpr UniTask_Awaiter(::Cysharp::Threading::Tasks::UniTask  task) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field task, offset: 0x0, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTask_Awaiter, task) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTask_Awaiter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
