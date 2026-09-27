#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CancellationTokenAwaitable)
namespace GlobalNamespace {
struct CancellationTokenAwaitable_Awaiter;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct CancellationTokenAwaitable;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::CancellationTokenAwaitable);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenAwaitable, "Cysharp.Threading.Tasks", "CancellationTokenAwaitable");
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CancellationTokenAwaitable
struct CORDL_TYPE CancellationTokenAwaitable {
public:
// Declarations
using Awaiter = ::GlobalNamespace::CancellationTokenAwaitable_Awaiter;

/// @brief Method GetAwaiter, addr 0xade5468, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::CancellationTokenAwaitable_Awaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0xade5458, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenAwaitable() ;

// Ctor Parameters [CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }]
constexpr CancellationTokenAwaitable(::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field cancellationToken, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenAwaitable, cancellationToken) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenAwaitable) == 0x8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
