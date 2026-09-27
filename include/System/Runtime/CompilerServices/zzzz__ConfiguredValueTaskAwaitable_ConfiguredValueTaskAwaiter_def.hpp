#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter");
// [IsReadOnly]
// Dependencies System.Threading.Tasks.ValueTask
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct CORDL_TYPE ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// [StackTraceHidden]
/// @brief Method GetResult, addr 0xa1e4c7c, size 0x138, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xa1e4db4, size 0x1c0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xa1e4f74, size 0x1c0, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xa1e4b2c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::ValueTask  value) ;

/// @brief Method get_IsCompleted, addr 0xa1e4b3c, size 0x140, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None, comment: None }]
constexpr ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask  _value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value, offset: 0x0, size: 0x10, def value: None
 ::System::Threading::Tasks::ValueTask  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter, _value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
