#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncResetTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncResetTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncResetHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncResetTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncResetTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncResetTrigger
class CORDL_TYPE AsyncResetTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetResetAsyncHandler, addr 0xae415f0, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler() ;

/// @brief Method GetResetAsyncHandler, addr 0xae4166c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger* New_ctor() ;

/// @brief Method Reset, addr 0xae41578, size 0x78, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetAsync, addr 0xae416f0, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ResetAsync() ;

/// @brief Method ResetAsync, addr 0xae417d8, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ResetAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae418c8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncResetTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncResetTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncResetTrigger(AsyncResetTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncResetTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncResetTrigger(AsyncResetTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22029};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
