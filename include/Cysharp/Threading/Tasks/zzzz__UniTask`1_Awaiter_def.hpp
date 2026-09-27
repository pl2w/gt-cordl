#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask`1_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniTask`1_Awaiter)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
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
template<typename T>
struct UniTask_1_Awaiter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UniTask_1_Awaiter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UniTask_1_Awaiter, "Cysharp.Threading.Tasks", "UniTask`1/Awaiter");
// [IsReadOnly]
// Dependencies Cysharp.Threading.Tasks.UniTask`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>
struct CORDL_TYPE UniTask_1_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// [DebuggerHidden]
/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetResult() ;

/// [DebuggerHidden]
/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// [DebuggerHidden]
/// @brief Method SourceOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceOnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state) ;

/// [DebuggerHidden]
/// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  task) ;

/// [DebuggerHidden]
/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTask_1_Awaiter() ;

// Ctor Parameters [CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr UniTask_1_Awaiter(::Cysharp::Threading::Tasks::UniTask_1<T>  task) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field task, offset: 0x0, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
