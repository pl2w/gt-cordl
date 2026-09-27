#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTransformParentChangedTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncTransformParentChangedTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTransformParentChangedHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncTransformParentChangedTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTransformParentChangedTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTransformParentChangedTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTransformParentChangedTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTransformParentChangedTrigger
class CORDL_TYPE AsyncTransformParentChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnTransformParentChangedAsyncHandler, addr 0xae3f490, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler() ;

/// @brief Method GetOnTransformParentChangedAsyncHandler, addr 0xae3f50c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTransformParentChangedTrigger* New_ctor() ;

/// @brief Method OnTransformParentChanged, addr 0xae3f418, size 0x78, virtual false, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method OnTransformParentChangedAsync, addr 0xae3f590, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnTransformParentChangedAsync() ;

/// @brief Method OnTransformParentChangedAsync, addr 0xae3f678, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnTransformParentChangedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3f768, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTransformParentChangedTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTransformParentChangedTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTransformParentChangedTrigger(AsyncTransformParentChangedTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTransformParentChangedTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTransformParentChangedTrigger(AsyncTransformParentChangedTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTransformParentChangedTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
