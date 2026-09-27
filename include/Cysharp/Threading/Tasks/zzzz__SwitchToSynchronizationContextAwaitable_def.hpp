#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToSynchronizationContextAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SwitchToSynchronizationContextAwaitable)
namespace GlobalNamespace {
struct SwitchToSynchronizationContextAwaitable_Awaiter;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct SwitchToSynchronizationContextAwaitable;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable, "Cysharp.Threading.Tasks", "SwitchToSynchronizationContextAwaitable");
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.SwitchToSynchronizationContextAwaitable
struct CORDL_TYPE SwitchToSynchronizationContextAwaitable {
public:
// Declarations
using Awaiter = ::GlobalNamespace::SwitchToSynchronizationContextAwaitable_Awaiter;

/// @brief Method GetAwaiter, addr 0xadf89d8, size 0x44, virtual false, abstract: false, final false
inline ::GlobalNamespace::SwitchToSynchronizationContextAwaitable_Awaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0xadeeaf8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr SwitchToSynchronizationContextAwaitable() ;

// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }]
constexpr SwitchToSynchronizationContextAwaitable(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field synchronizationContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  synchronizationContext;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable, synchronizationContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable, cancellationToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
