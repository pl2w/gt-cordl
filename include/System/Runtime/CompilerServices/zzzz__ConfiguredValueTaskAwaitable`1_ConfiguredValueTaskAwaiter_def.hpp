#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
struct ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter");
// [IsReadOnly]
// Dependencies System.Threading.Tasks.ValueTask`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<TResult>
struct CORDL_TYPE ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// [StackTraceHidden]
/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult GetResult() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None, comment: None }]
constexpr ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask_1<TResult>  _value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _value, offset: 0x0, size: 0x18, def value: None
 ::System::Threading::Tasks::ValueTask_1<TResult>  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
