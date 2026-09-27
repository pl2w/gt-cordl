#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerExitTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncTriggerExitTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerExitHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncTriggerExitTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerExitTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerExitTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerExitTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerExitTrigger
class CORDL_TYPE AsyncTriggerExitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Collider>> {
public:
// Declarations
/// @brief Method GetOnTriggerExitAsyncHandler, addr 0xae3ff90, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler() ;

/// @brief Method GetOnTriggerExitAsyncHandler, addr 0xae4000c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerExitTrigger* New_ctor() ;

/// @brief Method OnTriggerExit, addr 0xae3ff38, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExitAsync, addr 0xae40090, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> OnTriggerExitAsync() ;

/// @brief Method OnTriggerExitAsync, addr 0xae4019c, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> OnTriggerExitAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae402b4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerExitTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerExitTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerExitTrigger(AsyncTriggerExitTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerExitTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerExitTrigger(AsyncTriggerExitTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerExitTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
