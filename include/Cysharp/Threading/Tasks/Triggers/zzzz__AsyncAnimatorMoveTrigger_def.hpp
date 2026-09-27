#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncAnimatorMoveTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncAnimatorMoveTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnAnimatorMoveHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncAnimatorMoveTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncAnimatorMoveTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncAnimatorMoveTrigger
class CORDL_TYPE AsyncAnimatorMoveTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnAnimatorMoveAsyncHandler, addr 0xae370e8, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler() ;

/// @brief Method GetOnAnimatorMoveAsyncHandler, addr 0xae37164, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0xae37070, size 0x78, virtual false, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method OnAnimatorMoveAsync, addr 0xae371e8, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnAnimatorMoveAsync() ;

/// @brief Method OnAnimatorMoveAsync, addr 0xae372d0, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnAnimatorMoveAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae373c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncAnimatorMoveTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncAnimatorMoveTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncAnimatorMoveTrigger(AsyncAnimatorMoveTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncAnimatorMoveTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncAnimatorMoveTrigger(AsyncAnimatorMoveTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21939};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
