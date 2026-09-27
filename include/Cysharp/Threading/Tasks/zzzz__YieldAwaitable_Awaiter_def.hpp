#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(YieldAwaitable_Awaiter)
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct YieldAwaitable_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::YieldAwaitable_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::YieldAwaitable_Awaiter, "Cysharp.Threading.Tasks", "YieldAwaitable/Awaiter");
// [IsReadOnly]
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.YieldAwaitable/Awaiter
struct CORDL_TYPE YieldAwaitable_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xadf6444, size 0x4, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xadf7cfc, size 0x68, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xadf7d64, size 0x68, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xadf7cf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// @brief Method get_IsCompleted, addr 0xadf643c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr YieldAwaitable_Awaiter() ;

// Ctor Parameters [CppParam { name: "timing", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None, comment: None }]
constexpr YieldAwaitable_Awaiter(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field timing, offset: 0x0, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::YieldAwaitable_Awaiter, timing) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::YieldAwaitable_Awaiter) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
