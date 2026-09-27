#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenAwaitable_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CancellationTokenAwaitable_Awaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct CancellationTokenAwaitable_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CancellationTokenAwaitable_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CancellationTokenAwaitable_Awaiter, "Cysharp.Threading.Tasks", "CancellationTokenAwaitable/Awaiter");
// Dependencies System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CancellationTokenAwaitable/Awaiter
struct CORDL_TYPE CancellationTokenAwaitable_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xade5520, size 0x4, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xade5524, size 0x4, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xade5528, size 0x78, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xade5488, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_IsCompleted, addr 0xade5498, size 0x88, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenAwaitable_Awaiter() ;

// Ctor Parameters [CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }]
constexpr CancellationTokenAwaitable_Awaiter(::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field cancellationToken, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CancellationTokenAwaitable_Awaiter, cancellationToken) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CancellationTokenAwaitable_Awaiter) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
