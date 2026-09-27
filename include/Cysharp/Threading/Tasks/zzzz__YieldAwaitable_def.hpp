#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/YieldAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(YieldAwaitable)
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
struct YieldAwaitable_Awaiter;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct YieldAwaitable;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::YieldAwaitable);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::YieldAwaitable, "Cysharp.Threading.Tasks", "YieldAwaitable");
// [IsReadOnly]
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.YieldAwaitable
struct CORDL_TYPE YieldAwaitable {
public:
// Declarations
using Awaiter = ::GlobalNamespace::YieldAwaitable_Awaiter;

/// @brief Method GetAwaiter, addr 0xadf6434, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::YieldAwaitable_Awaiter GetAwaiter() ;

/// @brief Method ToUniTask, addr 0xadf7c64, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ToUniTask() ;

/// @brief Method .ctor, addr 0xadf7c5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

// Ctor Parameters []
// @brief default ctor
constexpr YieldAwaitable() ;

// Ctor Parameters [CppParam { name: "timing", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None, comment: None }]
constexpr YieldAwaitable(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field timing, offset: 0x0, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::YieldAwaitable, timing) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::YieldAwaitable) == 0x4, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
