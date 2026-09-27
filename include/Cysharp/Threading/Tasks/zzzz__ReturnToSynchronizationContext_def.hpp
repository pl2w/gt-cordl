#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToSynchronizationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ReturnToSynchronizationContext)
namespace GlobalNamespace {
struct ReturnToSynchronizationContext_Awaiter;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct ReturnToSynchronizationContext;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, "Cysharp.Threading.Tasks", "ReturnToSynchronizationContext");
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.ReturnToSynchronizationContext
struct CORDL_TYPE ReturnToSynchronizationContext {
public:
// Declarations
using Awaiter = ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter;

/// @brief Method DisposeAsync, addr 0xadf8cc0, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter DisposeAsync() ;

/// @brief Method .ctor, addr 0xadeeb6c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  syncContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReturnToSynchronizationContext() ;

// Ctor Parameters [CppParam { name: "syncContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dontPostWhenSameContext", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }]
constexpr ReturnToSynchronizationContext(::System::Threading::SynchronizationContext*  syncContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field syncContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  syncContext;

/// @brief Field dontPostWhenSameContext, offset: 0x8, size: 0x1, def value: None
 bool  dontPostWhenSameContext;

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, syncContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, dontPostWhenSameContext) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, cancellationToken) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
