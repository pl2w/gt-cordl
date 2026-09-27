#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SwitchToMainThreadAwaitable)
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace GlobalNamespace {
struct SwitchToMainThreadAwaitable_Awaiter;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct SwitchToMainThreadAwaitable;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable, "Cysharp.Threading.Tasks", "SwitchToMainThreadAwaitable");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct CORDL_TYPE SwitchToMainThreadAwaitable {
public:
// Declarations
using Awaiter = ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter;

/// @brief Method GetAwaiter, addr 0xadf7f90, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0xadee940, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr SwitchToMainThreadAwaitable() ;

// Ctor Parameters [CppParam { name: "playerLoopTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }]
constexpr SwitchToMainThreadAwaitable(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field playerLoopTiming, offset: 0x0, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable, playerLoopTiming) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable, cancellationToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
