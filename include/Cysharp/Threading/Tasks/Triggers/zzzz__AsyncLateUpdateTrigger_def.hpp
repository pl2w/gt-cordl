#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncLateUpdateTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncLateUpdateTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncLateUpdateHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncLateUpdateTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncLateUpdateTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncLateUpdateTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncLateUpdateTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncLateUpdateTrigger
class CORDL_TYPE AsyncLateUpdateTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetLateUpdateAsyncHandler, addr 0xae369d8, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* GetLateUpdateAsyncHandler() ;

/// @brief Method GetLateUpdateAsyncHandler, addr 0xae36a54, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* GetLateUpdateAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LateUpdate, addr 0xae36960, size 0x78, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdateAsync, addr 0xae36ad8, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask LateUpdateAsync() ;

/// @brief Method LateUpdateAsync, addr 0xae36bc0, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask LateUpdateAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncLateUpdateTrigger* New_ctor() ;

/// @brief Method .ctor, addr 0xae36cb0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncLateUpdateTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncLateUpdateTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncLateUpdateTrigger(AsyncLateUpdateTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLateUpdateTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncLateUpdateTrigger(AsyncLateUpdateTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncLateUpdateTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
